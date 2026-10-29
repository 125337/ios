@interface FTSGlobalStat : NSObject
{
    unsigned int _msgIndexCount; // +0x8
    unsigned int _intelligentMsgIndexCount; // +0xc
    unsigned int _favIndexCount; // +0x10
    unsigned int _allContactCount; // +0x14
    unsigned int _singleContactResultCnt; // +0x18
    unsigned int _groupContactResultCnt; // +0x1c
    unsigned int _brandContactResultCnt; // +0x20
    unsigned int _addressBookResultCnt; // +0x24
    NSString * _searchId; // +0x28
    NSMutableDictionary * _moduleStat; // +0x30
}
- (id)init;
- (void)setAllContactCount:(unsigned int)arg1;
- (void)finishContactSearchWithSingleCount:(unsigned int)arg1 groupCount:(unsigned int)arg2 brandCount:(unsigned int)arg3;
- (void)startGlobalModule;
- (void)startModeule:(unsigned long long)arg1;
- (void)finishModule:(unsigned long long)arg1 withResultCount:(unsigned int)arg2;
- (void)removeModule:(unsigned long long)arg1;
- (id)getModuleForType:(unsigned long long)arg1;
- (void)doReportOneGlobalSearch:(id)arg1;
- (id)parseModuleTime;
- (id)parseModuleResultCount;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)moduleStat;
- (void)setModuleStat:(id)arg1;
- (unsigned int)msgIndexCount;
- (void)setMsgIndexCount:(unsigned int)arg1;
- (unsigned int)intelligentMsgIndexCount;
- (void)setIntelligentMsgIndexCount:(unsigned int)arg1;
- (unsigned int)favIndexCount;
- (void)setFavIndexCount:(unsigned int)arg1;
- (unsigned int)allContactCount;
- (unsigned int)singleContactResultCnt;
- (void)setSingleContactResultCnt:(unsigned int)arg1;
- (unsigned int)groupContactResultCnt;
- (void)setGroupContactResultCnt:(unsigned int)arg1;
- (unsigned int)brandContactResultCnt;
- (void)setBrandContactResultCnt:(unsigned int)arg1;
- (unsigned int)addressBookResultCnt;
- (void)setAddressBookResultCnt:(unsigned int)arg1;
- (void).cxx_destruct;
@end

