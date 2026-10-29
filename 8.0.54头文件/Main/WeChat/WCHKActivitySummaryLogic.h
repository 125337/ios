@interface WCHKActivitySummaryLogic : NSObject
{
    BOOL _bHadObserverActivitySummary; // +0x8
    id <WCHKActivitySummaryLogicDelegate> _delegate; // +0x10
    HKHealthStore * _healthStore; // +0x18
    NSString * _lastQueryResult; // +0x20
}
- (id)init;
- (BOOL)p_canTryUploadActivitySummary;
- (void)updateHealthStoreData;
- (void)tryDoObserverActivitySummary;
- (void)queryActivitySummary;
- (void)onQueryCompeletedWithSummary:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)healthStore;
- (void)setHealthStore:(id)arg1;
- (BOOL)bHadObserverActivitySummary;
- (void)setBHadObserverActivitySummary:(BOOL)arg1;
- (id)lastQueryResult;
- (void)setLastQueryResult:(id)arg1;
- (void).cxx_destruct;
@end

