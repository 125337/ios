@interface MMOrderCenterLandingPageContainerController : MMUIViewController <MMOrderCenterOrderDataProviderExt>
{
    id <MMOrderCenterReporter> _reporter; // +0x68
    MMOrderCenterLandingPageController * _primaryController; // +0x70
    MMOrderCenterLandingPageController * _filteringController; // +0x78
    MMOrderCenterLandingPageContainerFilteringTitleView * _filteringTitleView; // +0x80
    NSString * _filteringAppId; // +0x88
    NSString * _filteringShopName; // +0x90
    unsigned long long _mode; // +0x98
}
- (id)initWithFilteringAppId:(id)arg1 filteringShopName:(id)arg2;
- (id)init;
- (void)setReporter:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)onFilteringTitleViewTapped;
- (void)onShopNameDetermined:(id)arg1 forFilteringAppId:(id)arg2;
- (void)updateTitleBar;
- (void)updateViewController;
- (void)reportEntry;
- (void)registerYReportSdk;
- (id)reporter;
- (id)primaryController;
- (void)setPrimaryController:(id)arg1;
- (id)filteringController;
- (void)setFilteringController:(id)arg1;
- (id)filteringTitleView;
- (void)setFilteringTitleView:(id)arg1;
- (id)filteringAppId;
- (void)setFilteringAppId:(id)arg1;
- (id)filteringShopName;
- (void)setFilteringShopName:(id)arg1;
- (unsigned long long)mode;
- (void).cxx_destruct;
@end

