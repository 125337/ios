@interface WCHKActivitySummaryLogic : NSObject
{
    BOOL _bHadObserverActivitySummary; // +0x8
    BOOL _controlHKQuery; // +0x9
    id <WCHKActivitySummaryLogicDelegate> _delegate; // +0x10
    HKHealthStore * _healthStore; // +0x18
    NSMutableArray * _activitySummaryObserverQueries; // +0x20
    HKActivitySummaryQuery * _summaryQuery; // +0x28
    unsigned long long _summaryQueryToken; // +0x30
    NSString * _lastQueryResult; // +0x38
}
- (id)init;
- (void)dealloc;
- (BOOL)p_canTryUploadActivitySummary;
- (void)updateHealthStoreData;
- (void)tryDoObserverActivitySummaryNew;
- (void)tryDoObserverActivitySummary;
- (void)queryActivitySummaryNew;
- (void)queryActivitySummary;
- (void)onQueryCompeletedWithSummary:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)healthStore;
- (void)setHealthStore:(id)arg1;
- (BOOL)bHadObserverActivitySummary;
- (void)setBHadObserverActivitySummary:(BOOL)arg1;
- (id)activitySummaryObserverQueries;
- (void)setActivitySummaryObserverQueries:(id)arg1;
- (id)summaryQuery;
- (void)setSummaryQuery:(id)arg1;
- (unsigned long long)summaryQueryToken;
- (void)setSummaryQueryToken:(unsigned long long)arg1;
- (BOOL)controlHKQuery;
- (void)setControlHKQuery:(BOOL)arg1;
- (id)lastQueryResult;
- (void)setLastQueryResult:(id)arg1;
- (void).cxx_destruct;
@end
