#include "cpu.h"

CPU::CPU()
{
	PC = 0;
	SP = 255;
	ACC = 0;
	irX = 0;
	irY = 0;
	for(int i = 0; i < 7; i++)
	{
		status[i] = false;
	}
}

void CPU::push(unsigned char value)
{
	stack[SP] = value;
	SP--;
}

unsigned char CPU::pull()
{
	SP++;
	unsigned char temp = stack[SP];
	stack[SP] = 0;
	return temp;
}

unsigned short int CPU::relative_addr()
{
	return PC; // + byte that is being addessed
}

void CPU::BRK()
{
	cout<<"break"<<endl;
	PC++;
	push((PC >> 8) & 0xff);
	push(PC & 0xff);
	status[BREAK] = true;
	//PUSH(SR)
	status[INTERRUPT] = true;
	// PC = (load(0xffe) | (load(0xffe) << 8))
}

void CPU::ORA_indirect_X()
{
}

void CPU::ORA_zero_page()
{
}

void CPU::ASL_zero_page()
{
}

void CPU::PHP()
{
}

void CPU::ORA_immediate()
{
}

void CPU::ASL_accumulator()
{
}

void CPU::ORA_absolute()
{
}

void CPU::ASL_absolute()
{
}

void CPU::BPL()
{
}

void CPU::ORA_indirect_Y()
{
}

void CPU::ORA_zero_page_X()
{
}

void CPU::ASL_zero_page_X()
{
}

void CPU::CLC()
{
}

void CPU::ORA_absolute_Y()
{
}

void CPU::ORA_absolute_X()
{
}

void CPU::ASL_absolute_X()
{
}


void CPU::JSR()
{
}

void CPU::AND_indirect_X()
{
}

void CPU::BIT_zero_page()
{
}

void CPU::AND_zero_page()
{
}

void CPU::ROL_zero_page()
{
}

void CPU::PLP()
{
}

void CPU::AND_immediate()
{
}

void CPU::ROL_accumulator()
{
}

void CPU::BIT_absolute()
{
}

void CPU::AND_absolute()
{
}

void CPU::ROL_absolute()
{
}

void CPU::BMI()
{
}

void CPU::AND_indirect_Y()
{
}

void CPU::AND_zero_page_X()
{
}

void CPU::ROL_zero_page_X()
{
}

void CPU::SEC()
{
}

void CPU::AND_absolute_Y()
{
}

void CPU::AND_absolute_X()
{
}

void CPU::ROL_absolute_X()
{
}

	
void CPU::RTI()
{
}

void CPU::EOR_indirect_X()
{
}

void CPU::EOR_zero_page()
{
}

void CPU::LSR_zero_page()
{
}

void CPU::PHA()
{
}

void CPU::EOR_immediate()
{
}

void CPU::LSR_accumulator()
{
}

void CPU::JMP_absolute()
{
}

void CPU::EOR_absolute()
{
}

void CPU::LSR_absolute()
{
}

void CPU::BVC()
{
}

void CPU::EOR_indirect_Y()
{
}

void CPU::EOR_zero_page_Y()
{
}

void CPU::EOR_zero_page_X()
{
}

void CPU::CLI()
{
}

void CPU::EOR_absolute_Y()
{
}

void CPU::EOR_absolute_X()
{
}

void CPU::LSR_absolute_X()
{
}

	
void CPU::RTS()
{
}

void CPU::ADC_indirect_X()
{
}

void CPU::ADC_zero_page()
{
}

void CPU::ROR_zero_page()
{
}

void CPU::PLA()
{
}

void CPU::ADC_immediate()
{
}

void CPU::ROR_accumulator()
{
}

void CPU::JMP_indirect()
{
}

void CPU::ADC_absolute()
{
}

void CPU::ROR_absolute()
{
}

void CPU::BVS()
{
}

void CPU::ADC_indirect_Y()
{
}

void CPU::ADC_zero_page_X()
{
}

void CPU::ROR_zero_page_X()
{
}

void CPU::SEI()
{
}

void CPU::ADC_absolute_Y()
{
}

void CPU::ADC_absolute_X()
{
}

void CPU::ROR_absolute_X()
{
}

	
void CPU::STA_indirect_X()
{
}

void CPU::STY_zero_page()
{
}

void CPU::STA_zero_page()
{
}

void CPU::STX_zero_page()
{
}

void CPU::DEY()
{
}

void CPU::TXA()
{
}

void CPU::STY_absolute()
{
}

void CPU::STA_absolute()
{
}

void CPU::STX_absolute()
{
}

void CPU::BCC()
{
}

void CPU::STA_indirect_Y()
{
}

void CPU::STY_zero_page_X()
{
}

void CPU::STA_zero_page_X()
{
}

void CPU::STX_zero_page_Y()
{
}

void CPU::TYA()
{
}

void CPU::STA_absolute_Y()
{
}

void CPU::TXS()
{
}

void CPU::STA_absolute_X()
{
}

	
void CPU::LDY_immediate()
{
}

void CPU::LDA_indirect_X()
{
}

void CPU::LDX_immediate()
{
}

void CPU::LDY_zero_page()
{
}

void CPU::LDA_zero_page()
{
}

void CPU::LDX_zero_page()
{
}

void CPU::TAY()
{
}

void CPU::LDA_immediate()
{
}

void CPU::TAX()
{
}

void CPU::LDY_absolute()
{
}

void CPU::LDA_absolute()
{
}

void CPU::LDX_absolute()
{
}

void CPU::BCS()
{
}

void CPU::LDA_indirect_Y()
{
}

void CPU::LDY_zero_page_X()
{
}

void CPU::LDA_zero_page_X()
{
}

void CPU::LDX_zero_page_Y()
{
}

void CPU::CLV()
{
}

void CPU::LDA_absolute_Y()
{
}

void CPU::TSX()
{
}

void CPU::LDY_absolute_X()
{
}

void CPU::LDA_absolute_X()
{
}

void CPU::LDX_absolute_Y()
{
}


void CPU::CPY_immediate()
{
}

void CPU::CMP_indirect_X()
{
}

void CPU::CPY_zero_page()
{
}

void CPU::CMP_zero_page()
{
}

void CPU::DEC_zero_page()
{
}


void CPU::INY()
{
}

void CPU::CMP_immediate()
{
}

void CPU::DEX()
{
}

void CPU::CPY_absolute()
{
}

void CPU::CMP_absolute()
{
}

void CPU::DEC_absolute()
{
}

void CPU::BNE()
{
}

void CPU::CMP_indirect_Y()
{
}

void CPU::CMP_zero_page_X()
{
}

void CPU::CMP_zero_page_Y()
{
}

void CPU::DEC_zero_page_X()
{
}

void CPU::CLD()
{
}

void CPU::CMP_absolute_Y()
{
}

void CPU::CMP_absolute_X()
{
}

void CPU::DEC_absolute_X()
{
}

	
void CPU::CPX_immediate()
{
}

void CPU::SBC_indirect_X()
{
}

void CPU::CPX_zero_page()
{
}

void CPU::SBC_zero_page()
{
}

void CPU::INC_zero_page()
{
}

void CPU::INX()
{
}

void CPU::SBC_immediate()
{
}

void CPU::NOP()
{
}

void CPU::CPX_absolute()
{
}

void CPU::SBC_absolute()
{
}

void CPU::INC_absolute()
{
}

void CPU::BEQ()
{
}

void CPU::SBC_indirect_Y()
{
}

void CPU::SBC_zero_page_X()
{
}

void CPU::INC_zero_page_X()
{
}

void CPU::SED()
{
}

void CPU::SBC_absolute_Y()
{
}

void CPU::SBC_absolute_X()
{
}

void CPU::INC_absolute_X()
{
}
