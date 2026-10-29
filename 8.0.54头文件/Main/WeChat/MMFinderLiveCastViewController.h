@interface MMFinderLiveCastViewController : MMUIHalfScreenViewController <UITableViewDataSource, UITableViewDelegate, MMFinderLiveCastViewModelDelegate, MMFinderLiveCastingViewDelegate>
{
    BOOL _hasReportedThatDevicesDisplaying; // +0x68
    BOOL _castingDeviceViewItemDidChanged; // +0x69
    unsigned long long _customSupportInterfaceOrientations; // +0x70
    MMFinderLiveCastViewModel * _viewModel; // +0x78
    UIView * _containerView; // +0x80
    UITableView * _tableView; // +0x88
    MMFinderLiveCastingView * _castingView; // +0x90
    UILabel * _titleLabel; // +0x98
    UILabel * _tipsLabel; // +0xa0
    MMUIButton * _operateAllButton; // +0xa8
    unsigned long long _projectionSearchTime; // +0xb0
    unsigned long long _lastCastingTime; // +0xb8
}
- (id)initWithViewModel:(id)arg1 lastCastingTime:(unsigned long long)arg2;
- (id)initWithViewModel:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)loadContainerView;
- (void)loadTableView;
- (void)loadCastingView;
- (void)refreshCastingView;
- (void)loadTopViews;
- (void)refreshTopViews;
- (void)layoutTopViews;
- (void)closeButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)liveCastViewModelDidReloadViewItems:(id)arg1;
- (void)liveCastViewModel:(id)arg1 didFailToCastDeviceViewItem:(id)arg2 withError:(id)arg3;
- (void)liveCastViewModel:(id)arg1 castingDeviceViewItemDidChange:(id)arg2;
- (void)liveCastingViewDidClickStopButton:(id)arg1;
- (id)audienceLogReporter;
- (unsigned long long)customSupportInterfaceOrientations;
- (void)setCustomSupportInterfaceOrientations:(unsigned long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)castingView;
- (void)setCastingView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)operateAllButton;
- (void)setOperateAllButton:(id)arg1;
- (BOOL)hasReportedThatDevicesDisplaying;
- (void)setHasReportedThatDevicesDisplaying:(BOOL)arg1;
- (BOOL)castingDeviceViewItemDidChanged;
- (void)setCastingDeviceViewItemDidChanged:(BOOL)arg1;
- (unsigned long long)projectionSearchTime;
- (void)setProjectionSearchTime:(unsigned long long)arg1;
- (unsigned long long)lastCastingTime;
- (void)setLastCastingTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

