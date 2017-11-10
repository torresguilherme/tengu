#include "headers.h"

class CPU
{
	public:
	CPU();

	private:
	// registers
	unsigned short int PC;
	unsigned char SP;
	unsigned char ACC;
	unsigned char irX;
	unsigned char irY;
	
	// status flags
	public:
	enum flags
	{
		CARRY,
		ZERO,
		INTERRUPT,
		DECIMAL,
		BREAK,
		OVERFLOW,
		NEGATIVE
	};

	bool status[7];
	unsigned char stack[256];
	vector<void(*)()> _ops;

	// stack
	void push(unsigned char);
	unsigned char pull();

	unsigned short int relative_addr();

	// CPU operations
	void BRK();
	void ORA_indirect_X();
	void ORA_zero_page();
	void ASL_zero_page();
	void PHP();
	void ORA_immediate();
	void ASL_accumulator();
	void ORA_absolute();
	void ASL_absolute();
	void BPL();
	void ORA_indirect_Y();
	void ORA_zero_page_X();
	void ASL_zero_page_X();
	void CLC();
	void ORA_absolute_Y();
	void ORA_absolute_X();
	void ASL_absolute_X();

	void JSR();
	void AND_indirect_X();
	void BIT_zero_page();
	void AND_zero_page();
	void ROL_zero_page();
	void PLP();
	void AND_immediate();
	void ROL_accumulator();
	void BIT_absolute();
	void AND_absolute();
	void ROL_absolute();
	void BMI();
	void AND_indirect_Y();
	void AND_zero_page_X();
	void ROL_zero_page_X();
	void SEC();
	void AND_absolute_Y();
	void AND_absolute_X();
	void ROL_absolute_X();

	void RTI();
	void EOR_indirect_X();
	void EOR_zero_page();
	void LSR_zero_page();
	void PHA();
	void EOR_immediate();
	void LSR_accumulator();
	void JMP_absolute();
	void EOR_absolute();
	void LSR_absolute();
	void BVC();
	void EOR_indirect_Y();
	void EOR_zero_page_Y();
	void EOR_zero_page_X();
	void CLI();
	void EOR_absolute_Y();
	void EOR_absolute_X();
	void LSR_absolute_X();

	void RTS();
	void ADC_indirect_X();
	void ADC_zero_page();
	void ROR_zero_page();
	void PLA();
	void ADC_immediate();
	void ROR_accumulator();
	void JMP_indirect();
	void ADC_absolute();
	void ROR_absolute();
	void BVS();
	void ADC_indirect_Y();
	void ADC_zero_page_X();
	void ROR_zero_page_X();
	void SEI();
	void ADC_absolute_Y();
	void ADC_absolute_X();
	void ROR_absolute_X();

	void STA_indirect_X();
	void STY_zero_page();
	void STA_zero_page();
	void STX_zero_page();
	void DEY();
	void TXA();
	void STY_absolute();
	void STA_absolute();
	void STX_absolute();
	void BCC();
	void STA_indirect_Y();
	void STY_zero_page_X();
	void STA_zero_page_X();
	void STX_zero_page_Y();
	void TYA();
	void STA_absolute_Y();
	void TXS();
	void STA_absolute_X();

	void LDY_immediate();
	void LDA_indirect_X();
	void LDX_immediate();
	void LDY_zero_page();
	void LDA_zero_page();
	void LDX_zero_page();
	void TAY();
	void LDA_immediate();
	void TAX();
	void LDY_absolute();
	void LDA_absolute();
	void LDX_absolute();
	void BCS();
	void LDA_indirect_Y();
	void LDY_zero_page_X();
	void LDA_zero_page_X();
	void LDX_zero_page_Y();
	void CLV();
	void LDA_absolute_Y();
	void TSX();
	void LDY_absolute_X();
	void LDA_absolute_X();
	void LDX_absolute_Y();

	void CPY_immediate();
	void CMP_indirect_X();
	void CPY_zero_page();
	void CMP_zero_page();
	void DEC_zero_page();
	void INY();
	void CMP_immediate();
	void DEX();
	void CPY_absolute();
	void CMP_absolute();
	void DEC_absolute();
	void BNE();
	void CMP_indirect_Y();
	void CMP_zero_page_X();
	void CMP_zero_page_Y();
	void DEC_zero_page_X();
	void CLD();
	void CMP_absolute_Y();
	void CMP_absolute_X();
	void DEC_absolute_X();

	void CPX_immediate();
	void SBC_indirect_X();
	void CPX_zero_page();
	void SBC_zero_page();
	void INC_zero_page();
	void INX();
	void SBC_immediate();
	void NOP();
	void CPX_absolute();
	void SBC_absolute();
	void INC_absolute();
	void BEQ();
	void SBC_indirect_Y();
	void SBC_zero_page_X();
	void INC_zero_page_X();
	void SED();
	void SBC_absolute_Y();
	void SBC_absolute_X();
	void INC_absolute_X();
};
