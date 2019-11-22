#include <iostream>
using namespace std;
class CCreature  {
	protected :
		int m_nLifeValue, m_nPower;
	public:
  	  virtual void Attack( CCreature * pCreature) = 0;
	  virtual void  Hurted( int nPower) = 0;
	  virtual void FightBack( CCreature * pCreature) = 0;
};
class CDragon : public CCreature {
	public:
  	  virtual void Attack( CCreature * pCreature);
	 virtual void Hurted( int nPower);
	 virtual void FightBack( CCreature * pCreature);
};
class CGhost : public CCreature {
	public:
  	  virtual void Attack( CCreature * pCreature);
	 virtual void Hurted( int nPower);
	 virtual void FightBack( CCreature * pCreature);
};
class CWolf : public CCreature {
	public:
  	  virtual void Attack( CCreature * pCreature);
	 virtual void Hurted( int nPower);
	 virtual void FightBack( CCreature * pCreature);
};
void CDragon::Attack(CCreature * p)
{
	 p->Hurted(m_nPower);
     p->FightBack(this);
}
void CDragon::Hurted( int nPower)  
{ 
	m_nLifeValue -= nPower;
}
void CDragon::FightBack(CCreature * p)
{
 	p->Hurted(m_nPower/2);
} 


void CWolf::Attack(CCreature * p)
{
	 p->Hurted(m_nPower);
     p->FightBack(this);
}
void CWolf::Hurted( int nPower)  
{ 
	m_nLifeValue -= nPower;
}
void CWolf::FightBack(CCreature * p)
{
 	p->Hurted(m_nPower/2);
} 

void CGhost::Attack(CCreature * p)
{
	 p->Hurted(m_nPower);
     p->FightBack(this);
}
void CGhost::Hurted( int nPower)  
{ 
	m_nLifeValue -= nPower;
}
void CGhost::FightBack(CCreature * p)
{
 	p->Hurted(m_nPower/2);
} 


int main()
{   
    CDragon Dragon;
    CWolf  Wolf;
    CGhost Ghost;
    //CThunderBird Bird£»
    Dragon.Attack( & Wolf);//(1) 
    Dragon.Attack( & Ghost);//(2) 
    //Dragon.Attack( & Bird); //(3) 
    return 0;
}
