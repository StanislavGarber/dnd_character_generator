#pragma once
#include<string>
using namespace std;
class Character 
{
private:
	int m_str, m_con, m_dex, m_intl, m_wis, m_cha;
	string m_race, m_cls;
public:
	string barbarian[6] = { "str", "con", "dex", "wis", "cha", "int" };
	string bard[6] = { "cha", "dex", "int", "wis", "str", "con" };
	string cleric[6] = { "wis", "con", "str", "int", "dex", "cha" };
	string druid[6] = { "wis", "con", "cha", "str", "int", "dex" };
	string fighter[6] = { "str", "con", "dex", "int", "wis", "cha" };
	string monk[6] = { "dex", "wis", "str", "int", "cha", "con" };
	string paladin[6] = { "str", "cha", "con", "dex", "int", "wis" };
	string ranger[6] = { "dex", "wis", "cha", "int", "con", "str" };
	string rogue[6] = { "dex", "int", "cha", "wis", "str", "con" };
	string sorcerer[6] = { "cha", "con", "wis", "int", "str", "dex" };
	string warlok[6] = { "cha", "con", "wis", "int", "str", "dex" };
	string wizard[6] = { "int", "con", "dex", "cha", "wis", "str" };

	void distribute_abilities(int abilities[6]);
	
	int getStr();
	void setStr(int str);
	
	int getCon();
	void setCon(int con);
	
	int getDex();
	void setDex(int dex);

	int getIntl();
	void setIntl(int intl);

	int getWis();
	void setWis(int wis);

	int getCha();
	void setCha(int cha);

	string getRace();
	void setRace(string race);
	
	string getCls();
	void setCls(string cls);

};