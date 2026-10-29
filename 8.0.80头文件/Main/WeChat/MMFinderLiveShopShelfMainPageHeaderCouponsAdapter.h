@interface MMFinderLiveShopShelfMainPageHeaderCouponsAdapter : NSObject <WCFinderLiveLogReportValueProvider>
{
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x8
}
- (BOOL)shouldShow;
- (id)buildWithCoordinatorAndIsSingle:(BOOL)arg1;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
