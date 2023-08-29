// EasyChair.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#ifndef EASYCHAIR_CORE
#define EASYCHAIR_CORE

#include <iostream>
#include <list>
#include <string>

/// <summary>
/// EasyChair 程序使用的类型、函数和变量等。
/// </summary>
namespace easychair
{
    /// <summary>
    /// 定义程序的状态。
    /// </summary>
    enum AppStatus
    {
        /// <summary>
        /// 程序空闲中。
        /// </summary>
        Idle = 0,
        /// <summary>
        /// 程序正在执行点名流程。
        /// </summary>
        RollCall = 1,
        /// <summary>
        /// 程序正在执行名单发言流程。
        /// </summary>
        SpeakersList = 2,
        /// <summary>
        /// 程序正在执行动议流程。
        /// </summary>
        Motion = 3,
        /// <summary>
        /// 程序正在执行文件展示流程。
        /// </summary>
        FileView = 4,
        /// <summary>
        /// 程序正在执行表决流程。
        /// </summary>
        Vote = 5,
        /// <summary>
        /// 程序正在使用计时器。
        /// </summary>
        TimerOnly = 6
    };

    /// <summary>
    /// 定义文件类型。
    /// </summary>
    enum FileCategory 
    {
        /// <summary>
        /// 工作文件。
        /// </summary>
        WorkingPaper = 0,
        /// <summary>
        /// 决议草案。
        /// </summary>
        DraftResolution = 1,
        /// <summary>
        /// 修正案。
        /// </summary>
        Amendment = 2,
        /// <summary>
        /// 指令草案。
        /// </summary>
        DraftDirective = 3,
        /// <summary>
        /// 危机文件。
        /// </summary>
        Crisis = 4,
        /// <summary>
        /// 政策建议。
        /// </summary>
        PolicySuggect = 5,
        /// <summary>
        /// 其他杂项文件。
        /// </summary>
        Miscellaneous = 6
    };
        
    /// <summary>
    /// 定义主发言名单剩余时间的让渡方式。
    /// </summary>
    enum YieldTo
    {
        /// <summary>
        /// 无让渡操作定义。
        /// </summary>
        NoYield = 0,
        /// <summary>
        /// 让渡给其他国家。
        /// </summary>
        ToNation = 1,
        /// <summary>
        /// 让渡给问题。
        /// </summary>
        ToQuestion = 2,
        /// <summary>
        /// 让渡给评论。
        /// </summary>
        ToComment = 3,
        /// <summary>
        /// 让渡给主席。
        /// </summary>
        ToDais = 4
    };

    // 定义工作语言。
    enum WorkLanguage
    {
        /// <summary>
        /// 简体中文。
        /// </summary>
        ChineseS = 1,
        /// <summary>
        /// English.
        /// </summary>
        English = 2
    };

    /// <summary>
    /// 定义会议使用的议事规则。
    /// </summary>
    enum UsingRule
    {
        Robert = 0,
        European = 1,
        Security = 2
    };

    /// <summary>
    /// 定义议题选定情况。
    /// </summary>
    enum TopicSelection
    {
        /// <summary>
        /// 选定第一议题，或仅有单一议题。
        /// </summary>
        Topic1 = 0,
        /// <summary>
        /// 选定第二议题。
        /// </summary>
        Topic2 = 1,
        /// <summary>
        /// 议题等待选定。
        /// </summary>
        Unchosen = 2
    };

    /// <summary>
    /// 定义投票立场。
    /// </summary>
    enum VoteOpinion
    {
        /// <summary>
        /// 赞成。
        /// </summary>
        Yes = 1,
        /// <summary>
        /// 反对。
        /// </summary>
        No = 2,
        /// <summary>
        /// 弃权。
        /// </summary>
        Abst = 3
    };
        
    /// <summary>
    /// 定义会议基本信息。
    /// </summary>
    class Conference
    {
    public:
        const WorkLanguage Language;
        const UsingRule MyRule;
        const int XmlVersion;
        string ConferenceTitle;
        string Committee;
        string Topic[2];

        /// <summary>
        /// 新建会议。
        /// </summary>
        /// <param name="title">会议名称。</param>
        /// <param name="committee">会议的委员会名称。</param>
        /// <param name="topic1">会议议题</param>
        /// <param name="topic2">可选。创建双议题会议时会议的第二议题，并将 TopicSel 字段设定为 Unchosen。如果省略该参数，则自动按单议题模式创建会议。</param>
        /// <param name="lang">会议的工作语言。</param>
        Conference(string title, string committee, WorkLanguage lang, string topic1, string topic2 = "");
        /// <summary>
        /// 摧毁会议对象。
        /// </summary>
        ~Conference();
        /// <summary>
        /// 获取会议议题。
        /// </summary>
        /// <returns></returns>
        string GetTopic();

    private:
        TopicSelection TopicSel;
    };
    /// <summary>
    /// 表示单个国家。
    /// </summary>
    class Nation
    {
    public:
        /// <summary>
        /// 国家名称。
        /// </summary>
        string Name;
        /// <summary>
        /// 代表姓名。
        /// </summary>
        std::list<string> Delegates;
        /// <summary>
        /// 代表所在学校。
        /// </summary>
        string SchoolDelegates;
        /// <summary>
        /// 该国投票权限，默认值为 1（一票）。
        /// </summary>
        int Competence = 1;
        /// <summary>
        /// 该国立场文件提交情况。
        /// </summary>
        string PresentationPaper;
        /// <summary>
        /// 该国出席情况。
        /// </summary>
        bool Attendence = False;
        /// <summary>
        /// 该国是否拥有一票否决权。
        /// </summary>
        bool VetoPower = False;
        //static Nation::Empty = null;
        /// <summary>
        /// 初始化国家。
        /// </summary>
        /// <param name="name">国家的名称。</param>
        /// <param name="competence">可选。表示该国的投票权重，默认值为 1（一票）。</param>
        /// <param name="vetopower">可选。表示该国是否具有一票否决权。</param>
        /// <param name="delegates">可选。该国的所有代表（暂不使用）。</param>
        Nation(string name, int competence = 1, bool vetopower = false, std::list<Delegate> delegates = nullptr);
        /// <summary>
        /// 摧毁国家对象。
        /// </summary>
        ~Nation();
        /// <summary>
        /// 返回所有代表的姓名。
        /// </summary>
        /// <param name="delimiter">可选。任何字符串，用于在返回的字符串中分隔子字符串。如果省略该参数，则使用空白字符 (" ")。如果 Delimiter 是零长度字符串 ("") 或 Nothing，则列表中的所有项目都串联在一起，中间没有分隔符。</param>
        /// <returns>该国代表的姓名。</returns>
        string GetDelegateNames(string delimiter = " ");
        /// <summary>
        /// 将当前国家的投票权限转换为其等效的字符串表示形式。
        /// </summary>
        /// <returns>以数字表示的投票权限，数字代表其票数；星号（*）标记代表该国家具有一票否决权。</returns>
        string GetCompetence();
        /// <summary>
        /// 将当前国家的名称转换为其等效的字符串表示形式。 
        /// </summary>
        /// <returns>当前国家名称的字符串表示形式。</returns>
        string ToString();
    };

    /// <summary>
    /// 表示单个代表。
    /// </summary>
    class Delegate
    {
        //兼容在线系统中的代表类，本API中使用以下数据：
        //1. 代表姓名；
        //2. 学校；
        //3. 年级。
    };

    /// <summary>
    /// 表示包含国家的列表。
    /// </summary>
    class NationList : std::list<Nation>
    {
    public:
        /// <summary>
        /// 根据国家名获取国家。
        /// </summary>
        /// <param name="name">需要获取的国家名称。如果该国在列表中不存在，则返回 null 值。</param>
        /// <returns>对应名称的国家对象。</returns>
        Nation GetNationFromName(string name);
        /// <summary>
        /// 根据国家名从国家列表获取国家。
        /// </summary>
        /// <param name="name">需要获取的国家名称。如果该国在列表中不存在，则返回 null 值。</param>
        /// <param name="list">指定的国家列表。</param>
        /// <returns>对应名称的国家对象。</returns>
        static Nation FindNation(string name, NationList list);
        /// <summary>
        /// 返回所有国家的名称。
        /// </summary>
        /// <param name="delimiter">可选。任何字符串，用于在返回的字符串中分隔子字符串。如果省略该参数，则使用空白字符 (" ")。如果 Delimiter 是零长度字符串 ("") 或 Nothing，则列表中的所有项目都串联在一起，中间没有分隔符。</param>
        /// <returns>所有国家名称的字符串表示形式。</returns>
        string ToString(string delimiter = " ");
    };

    class SpeakersList
    {
    public:
        string slName;
        int slSingleTime;
        const int slTotalTime;
        const bool isYield;
        NationList slNations;
        /// <summary>
        /// 初始化新的发言列表。
        /// </summary>
        /// <param name="name">发言列表的名称。</param>
        /// <param name="yield">可选。定义该列表是否有让渡权。如果省略该参数，则为 false（无让渡权）。</param>
        /// <param name="singletime">可选。发言列表中每一位发言者的发言时长。如果省略该参数，则默认指定 120 秒。</param>
        /// <param name="totaltime">可选。发言列表的总时长，设置为 0 则无限制。如果省略该参数，则默认无限制。</param>
        SpeakersList(string name, bool yield = false, int singletime = 120, int totaltime = 0);
        /// <summary>
        /// 摧毁发言列表对象。
        /// </summary>
        ~SpeakersList();
        /// <summary>
        /// 向发言列表添加国家。
        /// </summary>
        /// <param name="n">被添加的国家。</param>
        /// <returns>返回当前发言列表的国家总数。</returns>
        int AddNation(Nation n);
        /// <summary>
        /// 将发言标记移动至下一个国家。
        /// </summary>
        int SpeakNext();
    private:
        /// <summary>
        /// 发言标记所在的位置。
        /// </summary>
        int slCurrent;
    };

    /// <summary>
    /// 定义会场内文件。
    /// </summary>
    class File
    {
    public:
        /// <summary>
        /// 文件名称。
        /// </summary>
        /// <returns></returns>
        string FileTitle;
        /// <summary>
        /// 文件保存路径。
        /// </summary>
        /// <returns></returns>
        string FilePath;
        /// <summary>
        /// 文件类型。
        /// </summary>
        /// <returns></returns>
        FileCategory Category;
        /// <summary>
        /// 起草国。
        /// </summary>
        /// <returns></returns>
        NationList Sponsers;
        /// <summary>
        /// 附议国。
        /// </summary>
        /// <returns></returns>
        NationList Signatories;
        /// <summary>
        /// 初始化空白的新文件。
        /// </summary>
        File();
        /// <summary>
        /// 初始化新文件。
        /// </summary>
        /// <param name="title">文件名称。</param>
        /// <param name="path">文件保存路径。</param>
        /// <param name="cate">文件类型。</param>
        /// <param name="sponser">可选。定义文件起草国。</param>
        /// <param name="signatorie">可选。定义文件附议国。</param>
        File(string title, string path, FileCategory cate, NationList sponser = nullptr, NationList signatory = nullptr);
        /// <summary>
        /// 摧毁文件对象。
        /// </summary>
        ~File();
        /// <summary>
        /// 将当前文件的名称转换为其等效的字符串表示形式。 
        /// </summary>
        /// <returns>文件名称的字符串表示形式。</returns>
        string ToString();
    };

    class FileList : std::list<File>
    {
    public:
        /// <summary>
        /// 根据文件名获取文件。
        /// </summary>
        /// <param name="name">需要获取的文件名称。如果该文件在列表中不存在，则返回 null 值。</param>
        /// <returns>对应名称的文件对象。</returns>
        File GetFileFromName(string name);
        /// <summary>
        /// 根据文件名和文件列表获取文件。
        /// </summary>
        /// <param name="name">需要获取的文件名称。如果该文件在列表中不存在，则返回 null 值。</param>
        /// <param name="list">指定的文件列表。</param>
        /// <returns>对应名称的文件对象。</returns>
        static File FindFile(string name, FileList list);
    };

    class Vote
    {
    public:
        const File VoteFile;
        const NationList VoteNations;
        const std::list<VoteOpinion> VoteOpinions;
    };
}

#endif