@interface SearchMatchTip : NSObject
{
    NSString * _showResult; // +0x8
    unsigned int _minLocation; // +0x10
    BOOL _isSilent; // +0x14
    unsigned int _createTime; // +0x18
    unsigned int _chatRoomMemberCount; // +0x1c
    NSString * _key; // +0x20
    NSString * _matchPhase; // +0x28
    NSString * _queryText; // +0x30
    NSString * _showPrefix; // +0x38
    NSString * _showSuffix; // +0x40
    unsigned long long _matchType; // +0x48
    unsigned long long _matchSubType; // +0x50
    unsigned long long _groupMemberMatchType; // +0x58
    unsigned long long _location; // +0x60
    NSString * _displayNameFullPY; // +0x68
    unsigned long long _queryMatchType; // +0x70
    NSMutableDictionary * _dicGroupMemberMatchTip; // +0x78
}
+ (void)updateGroupSortContext;
+ (id)GetActiveMatchTipFrom:(id)arg1;
+ (id)GetUnActiveMatchTipFrom:(id)arg1;
+ (unsigned int)GetContactActiveDays;
- (id)convertMatchTypeStr;
- (BOOL)isValidMatchTypeStr:(id)arg1;
- (id)init;
- (unsigned int)convertLogType;
- (unsigned int)convertGroupMemberMatchType;
- (unsigned int)convertLogType:(unsigned int)arg1;
- (id)getShowResult;
- (unsigned int)minMatchLocation;
- (id)matchKeywordsForDisplay;
- (long long)compareSearchMatchTipFirstLineAscending:(id)arg1;
- (long long)compareSearchMatchTipSecondLineAscending:(id)arg1;
- (long long)compareGroupSearchMatchTipAscending:(id)arg1;
- (long long)compareGroupSearchMatchTipAscendingUseBasicLogic:(id)arg1;
- (long long)comparePhoneSearchMatchTipFirstLineAscending:(id)arg1;
- (long long)comparePhoneSearchMatchTipSecondLineAscending:(id)arg1;
- (BOOL)isStrongMatch;
- (BOOL)isMultiMemberMatch;
- (id)key;
- (void)setKey:(id)arg1;
- (id)matchPhase;
- (void)setMatchPhase:(id)arg1;
- (id)queryText;
- (void)setQueryText:(id)arg1;
- (id)showPrefix;
- (void)setShowPrefix:(id)arg1;
- (id)showSuffix;
- (void)setShowSuffix:(id)arg1;
- (unsigned long long)matchType;
- (void)setMatchType:(unsigned long long)arg1;
- (unsigned long long)matchSubType;
- (void)setMatchSubType:(unsigned long long)arg1;
- (unsigned long long)groupMemberMatchType;
- (void)setGroupMemberMatchType:(unsigned long long)arg1;
- (unsigned long long)location;
- (void)setLocation:(unsigned long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)displayNameFullPY;
- (void)setDisplayNameFullPY:(id)arg1;
- (BOOL)isSilent;
- (void)setIsSilent:(BOOL)arg1;
- (unsigned long long)queryMatchType;
- (void)setQueryMatchType:(unsigned long long)arg1;
- (unsigned int)chatRoomMemberCount;
- (void)setChatRoomMemberCount:(unsigned int)arg1;
- (id)dicGroupMemberMatchTip;
- (void)setDicGroupMemberMatchTip:(id)arg1;
- (void).cxx_destruct;
@end

