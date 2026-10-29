@interface ContactsSearchReporter : NSObject
{
    BOOL _hasPendingTrigger; // +0x8
    NSString * _sessionId; // +0x10
    unsigned long long _sessionEnterTimeMs; // +0x18
    unsigned long long _pageInTimeMs; // +0x20
    NSString * _filterId; // +0x28
    long long _filterSeq; // +0x30
    ContactsFilterState * _lastFilterState; // +0x38
    long long _pendingScene; // +0x40
}
+ (unsigned long long)nowMs;
+ (BOOL)isSceneSet:(id)arg1 equalTo:(id)arg2;
+ (id)monthRangeTextWithStartYear:(long long)arg1 startMonth:(long long)arg2 endYear:(long long)arg3 endMonth:(long long)arg4;
+ (long long)addSourceEnumOf:(id)arg1;
- (id)init;
- (void)reportPageIn;
- (void)reportPageOut;
- (void)onQueryChanged:(id)arg1;
- (void)onFilterStateChanged:(id)arg1;
- (void)reportResultReturnWithCount:(long long)arg1;
- (void)reportContactCellClickAtIndex:(long long)arg1;
- (void)report:(id)arg1 params:(id)arg2;
- (id)sessionIdWithQuery:(id)arg1;
- (long long)sceneForFilterChangeFrom:(id)arg1 to:(id)arg2;
- (BOOL)isFilterState:(id)arg1 equalTo:(id)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)sessionEnterTimeMs;
- (void)setSessionEnterTimeMs:(unsigned long long)arg1;
- (unsigned long long)pageInTimeMs;
- (void)setPageInTimeMs:(unsigned long long)arg1;
- (id)filterId;
- (void)setFilterId:(id)arg1;
- (long long)filterSeq;
- (void)setFilterSeq:(long long)arg1;
- (id)lastFilterState;
- (void)setLastFilterState:(id)arg1;
- (long long)pendingScene;
- (void)setPendingScene:(long long)arg1;
- (BOOL)hasPendingTrigger;
- (void)setHasPendingTrigger:(BOOL)arg1;
- (void).cxx_destruct;
@end
