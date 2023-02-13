#include<iostream>
using namespace std;


class HardDisk
{
public:
	virtual void work() = 0;
};

class Memory
{
public:
	virtual void work() = 0;
};

class Cpu
{
public:
	virtual void work() = 0;
};

class InterCpu :public Cpu
{
public:
	void work()
	{
		cout << "interCpu 开始工作了" << endl;
	}
};

class XSHardDisk :public HardDisk
{
public:
	void work()
	{
		cout << "����Ӳ�� ��ʼ������" << endl;
	}
};

class JSDMemory :public Memory
{
public:
	void work()
	{
		cout << "JSDM 开始工作了" << endl;
	}
};


class Computer
{
public:
	Computer(HardDisk* harddisk, Memory* memory, Cpu* cpu)
	{
		m_harddisk = harddisk;
		m_memory = memory;
		m_cpu = cpu;
	}

	void work()
	{
		m_harddisk->work();
		m_memory->work();
		m_cpu->work();
	}
private:
	HardDisk* m_harddisk;
	Memory* m_memory;
	Cpu* m_cpu;
};
int main()
{
	Computer	*computer = NULL;
	HardDisk	*harddisk = NULL;
	Memory		*memory = NULL;
	Cpu			*cpu = NULL;
	harddisk = new XSHardDisk;
	memory = new JSDMemory;
	cpu = new InterCpu;

	computer = new Computer(harddisk, memory, cpu);
	computer->work();


	delete computer;
	delete harddisk;
	delete memory;
	delete cpu;
	return 0;
}