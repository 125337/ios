@interface LocalSearchDynamicConfig : NSObject
{
    BOOL _isUseSilentSort; // +0x8
    BOOL _isUseUnReadSort; // +0x9
    BOOL _isUseWANetSearch; // +0xa
    BOOL _isUseTrainModelSort; // +0xb
    BOOL _isTopHitContainsWeApp; // +0xc
    BOOL _isGlobalSearchOpenPardusSearch; // +0xd
    BOOL _isAutoRepairFtsMsgClose; // +0xe
    unsigned int _uiContactActiveDays; // +0x10
    unsigned int _uiGroupActiveDays; // +0x14
    unsigned int _uiGroupMyActiveDays; // +0x18
    unsigned int _uiSmallGroupMembers; // +0x1c
    FTSIndexDynamicConfig * _ftsIndexDynamic; // +0x20
}
- (id)init;
- (id)description;
- (void)updateConfigs;
- (unsigned int)uiContactActiveDays;
- (void)setUiContactActiveDays:(unsigned int)arg1;
- (BOOL)isUseSilentSort;
- (void)setIsUseSilentSort:(BOOL)arg1;
- (BOOL)isUseUnReadSort;
- (void)setIsUseUnReadSort:(BOOL)arg1;
- (unsigned int)uiGroupActiveDays;
- (void)setUiGroupActiveDays:(unsigned int)arg1;
- (unsigned int)uiGroupMyActiveDays;
- (void)setUiGroupMyActiveDays:(unsigned int)arg1;
- (unsigned int)uiSmallGroupMembers;
- (void)setUiSmallGroupMembers:(unsigned int)arg1;
- (BOOL)isUseWANetSearch;
- (void)setIsUseWANetSearch:(BOOL)arg1;
- (BOOL)isUseTrainModelSort;
- (void)setIsUseTrainModelSort:(BOOL)arg1;
- (id)ftsIndexDynamic;
- (void)setFtsIndexDynamic:(id)arg1;
- (BOOL)isTopHitContainsWeApp;
- (void)setIsTopHitContainsWeApp:(BOOL)arg1;
- (BOOL)isGlobalSearchOpenPardusSearch;
- (void)setIsGlobalSearchOpenPardusSearch:(BOOL)arg1;
- (BOOL)isAutoRepairFtsMsgClose;
- (void)setIsAutoRepairFtsMsgClose:(BOOL)arg1;
- (void).cxx_destruct;
@end

