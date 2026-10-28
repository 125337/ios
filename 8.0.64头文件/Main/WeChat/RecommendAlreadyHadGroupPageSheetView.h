@interface RecommendAlreadyHadGroupPageSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray * _arrRecommendAlreadyHadGroup; // +0x8
    id <RecommendAlreadyHadGroupPageSheetViewDelegate> _delegate; // +0x10
    MMUIView * _containerView; // +0x18
    MMTableView * _tableView; // +0x20
    UIView * _headerTitleView; // +0x28
    MMUIView * _bottomToolView; // +0x30
    double _targetPageSheetHeight; // +0x38
    UIView * _tableViewMaskView; // +0x40
}
- (id)initWithArrRecommendAlreadyHadGroup:(id)arg1 targetPageSheetHeight:(double)arg2;
- (void)initConfig;
- (void)initView;
- (void)initHeaderTitleView;
- (void)initTableView;
- (void)initBottomToolView;
- (id)genLinkButton;
- (void)setUpScrollViewGradientLayer;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickOperateButton:(id)arg1;
- (void)reportCreatGroupSameRecommendReporSameAddNewGroup;
- (id)arrRecommendAlreadyHadGroup;
- (void)setArrRecommendAlreadyHadGroup:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)headerTitleView;
- (void)setHeaderTitleView:(id)arg1;
- (id)bottomToolView;
- (void)setBottomToolView:(id)arg1;
- (double)targetPageSheetHeight;
- (void)setTargetPageSheetHeight:(double)arg1;
- (id)tableViewMaskView;
- (void)setTableViewMaskView:(id)arg1;
- (void).cxx_destruct;
@end
