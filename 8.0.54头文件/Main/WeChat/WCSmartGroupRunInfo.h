@interface WCSmartGroupRunInfo : NSObject
{
    BOOL _bOnlyRecommendGroups; // +0x8
    BOOL _bSearchRecommendGroups; // +0x9
    BOOL _bRecommendFromLastMemberIfNeed; // +0xa
    BOOL _bForbidRecommendOpenIMContact; // +0xb
    BOOL _bRepick; // +0xc
    unsigned int _totalGroupCnt; // +0x10
    unsigned int _totalMMCnt; // +0x14
    unsigned long long _seq; // +0x18
    NSArray * _arrInputMemlist; // +0x20
    NSArray * _arrSessionCopy; // +0x28
    unsigned long long _taskBeginTime; // +0x30
    unsigned long long _taskEndTime; // +0x38
    NSMutableArray * _arrResult; // +0x40
    NSMutableArray * _arrTimeCost; // +0x48
    NSMutableArray * _arrSharedGroupCnt; // +0x50
    NSArray * _arrSharedGroup; // +0x58
    NSMutableSet * _filterSet; // +0x60
}
- (id)getInputMemDesc;
- (id)getSessionByUserName:(id)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (BOOL)bOnlyRecommendGroups;
- (void)setBOnlyRecommendGroups:(BOOL)arg1;
- (BOOL)bSearchRecommendGroups;
- (void)setBSearchRecommendGroups:(BOOL)arg1;
- (BOOL)bRecommendFromLastMemberIfNeed;
- (void)setBRecommendFromLastMemberIfNeed:(BOOL)arg1;
- (BOOL)bForbidRecommendOpenIMContact;
- (void)setBForbidRecommendOpenIMContact:(BOOL)arg1;
- (id)arrInputMemlist;
- (void)setArrInputMemlist:(id)arg1;
- (id)arrSessionCopy;
- (void)setArrSessionCopy:(id)arg1;
- (unsigned long long)taskBeginTime;
- (void)setTaskBeginTime:(unsigned long long)arg1;
- (unsigned long long)taskEndTime;
- (void)setTaskEndTime:(unsigned long long)arg1;
- (unsigned int)totalGroupCnt;
- (void)setTotalGroupCnt:(unsigned int)arg1;
- (unsigned int)totalMMCnt;
- (void)setTotalMMCnt:(unsigned int)arg1;
- (BOOL)bRepick;
- (void)setBRepick:(BOOL)arg1;
- (id)arrResult;
- (void)setArrResult:(id)arg1;
- (id)arrTimeCost;
- (void)setArrTimeCost:(id)arg1;
- (id)arrSharedGroupCnt;
- (void)setArrSharedGroupCnt:(id)arg1;
- (id)arrSharedGroup;
- (void)setArrSharedGroup:(id)arg1;
- (id)filterSet;
- (void)setFilterSet:(id)arg1;
- (void).cxx_destruct;
@end

