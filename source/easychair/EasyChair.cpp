// EasyChair.cpp: 定义应用程序的入口点。
//

#include "EasyChair.h"

using namespace std;
using namespace easychair;

Conference::Conference(string title, string committee, WorkLanguage lang, string topic1, string topic2 = "")
{
	this->Topic = new string[2];
	if (Topic2 != "")
	{
		this->Topic[1] = topic2;
		this->TopicSel = Unchosen;
	}
	else
		this->TopicSel = Topic1;
	this->Topic[0] = topic1;
	this->ConferenceTitle = title;
	this->Committee = committee;
	this->Language = lang;
}

Conference::~Conference()
{
	delete this->Topic;
}

string Conference::GetTopic()
{
	if (TopicSel < 2) return Topic[TopicSel];
	return "议题等待决定中";
}

Nation::Nation(string name, int competence, bool vetopower, std::list<Delegate> delegates)
{
	Name = name;
	if (competence != 1) Competence = competence;
	if (vetopower) VetoPower = vetopower;
}

Nation::~Nation()
{
	delete this->Delegates;
}

string Nation::GetDelegateNames(string delimiter = " ")
{
	return "";
}

string Nation::GetCompetence()
{
	string cptc = to_string(Competence);
	if (VetoPower) cptc.append("*");
	return cptc;
}

string Nation::ToString()
{
	return this->Name;
}

Nation NationList::GetNationFromName(string name)
{
	for each (Nation n in this)
	{
		if (n.Name == name) return n;
	}
	return nullptr;
}

Nation NationList::FindNation(string name, NationList list)
{
	for each (Nation n in list)
	{
		if (n.Name == name) return n;
	}
	return nullptr;
}

string NationList::ToString(string delimiter)
{
	return string();
}

SpeakersList::SpeakersList(string name, bool yield, int singletime, int totaltime)
{
	slName = name;
	slNations = new NationList();
	slSingleTime = singletime;
	slTotalTime = totaltime;
	slCurrent = 0;
}

SpeakersList::~SpeakersList()
{
	delete slNations;
}

int SpeakersList::AddNation(Nation n)
{
	slNations.insert(end(), n);
	return slNations.size();
}

int SpeakersList::SpeakNext()
{
	return ++slCurrent;
}

File::File()
{
	
}

File::File(string title, string path, FileCategory cate, NationList sponser, NationList signatory)
{
	FileTitle = title;
	FilePath = path;
	Category = cate;
	Sponsers = sponser;
	Signatories = signatory;
}

File::~File()
{
	delete Sponsers;
	delete Signatories;
}

string File::ToString()
{
	return FileTitle;
}

File FileList::GetFileFromName(string name)
{
	for each (File n in this)
	{
		if (n.Name == name) return n;
	}
	return nullptr;
}

File FileList::FindFile(string name, FileList list)
{
	for each (File n in list)
	{
		if (n.Name == name) return n;
	}
	return nullptr;
}

int main()
{
	cout << "Hello CMake." << endl;
	return 0;
}
