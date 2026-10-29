@interface MMOrderCenterLandingPageController : MMUIViewController <WCSearchDelegate>
{
    id <MMOrderCenterReporter> _reporter; // +0x68
    NSArray * _pivotTabControllers; // +0x70
    WCSearcher * _searcher; // +0x78
    MMOrderCenterPivotViewController * _pivotViewController; // +0x80
    NSString * _filteringAppId; // +0x88
}
- (id)initWithFilteringAppId:(id)arg1;
- (void)setReporter:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)wcsSearchBarShouldBeginEditing:(id)arg1;
- (id)reporter;
- (id)pivotTabControllers;
- (void)setPivotTabControllers:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)pivotViewController;
- (void)setPivotViewController:(id)arg1;
- (id)filteringAppId;
- (void)setFilteringAppId:(id)arg1;
- (void).cxx_destruct;
@end

