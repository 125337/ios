@interface ContactSearchMonitor : NSObject
{
    unsigned int _memSearchCount; // +0x8
    unsigned long long _pinyinSearchTime; // +0x10
    unsigned long long _mainSearchTime; // +0x18
    unsigned long long _getContentTime; // +0x20
    unsigned long long _sortTime; // +0x28
    unsigned long long _singleContactTime; // +0x30
    unsigned long long _groupContactTime; // +0x38
    unsigned long long _totalTime; // +0x40
    unsigned long long _singleContactCount; // +0x48
    unsigned long long _groupContactCount; // +0x50
    unsigned long long _groupMemberCount; // +0x58
    unsigned long long _totalContactCount; // +0x60
    unsigned long long _searchWordLength; // +0x68
    unsigned long long _keywordNum; // +0x70
    unsigned long long _memSearchTime; // +0x78
    unsigned long long _tagSearchTime; // +0x80
    unsigned long long _zoneSearchTime; // +0x88
    unsigned long long _multiKeywordSearchTime; // +0x90
}
- (unsigned long long)pinyinSearchTime;
- (void)setPinyinSearchTime:(unsigned long long)arg1;
- (unsigned long long)mainSearchTime;
- (void)setMainSearchTime:(unsigned long long)arg1;
- (unsigned long long)getContentTime;
- (void)setGetContentTime:(unsigned long long)arg1;
- (unsigned long long)sortTime;
- (void)setSortTime:(unsigned long long)arg1;
- (unsigned long long)singleContactTime;
- (void)setSingleContactTime:(unsigned long long)arg1;
- (unsigned long long)groupContactTime;
- (void)setGroupContactTime:(unsigned long long)arg1;
- (unsigned long long)totalTime;
- (void)setTotalTime:(unsigned long long)arg1;
- (unsigned long long)singleContactCount;
- (void)setSingleContactCount:(unsigned long long)arg1;
- (unsigned long long)groupContactCount;
- (void)setGroupContactCount:(unsigned long long)arg1;
- (unsigned long long)groupMemberCount;
- (void)setGroupMemberCount:(unsigned long long)arg1;
- (unsigned long long)totalContactCount;
- (void)setTotalContactCount:(unsigned long long)arg1;
- (unsigned long long)searchWordLength;
- (void)setSearchWordLength:(unsigned long long)arg1;
- (unsigned long long)keywordNum;
- (void)setKeywordNum:(unsigned long long)arg1;
- (unsigned int)memSearchCount;
- (void)setMemSearchCount:(unsigned int)arg1;
- (unsigned long long)memSearchTime;
- (void)setMemSearchTime:(unsigned long long)arg1;
- (unsigned long long)tagSearchTime;
- (void)setTagSearchTime:(unsigned long long)arg1;
- (unsigned long long)zoneSearchTime;
- (void)setZoneSearchTime:(unsigned long long)arg1;
- (unsigned long long)multiKeywordSearchTime;
- (void)setMultiKeywordSearchTime:(unsigned long long)arg1;
@end
