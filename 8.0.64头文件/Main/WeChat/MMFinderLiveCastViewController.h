@interface MMFinderLiveCastViewController : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMFinderLiveCastViewModelDelegate, MMFinderLiveCastingViewDelegate, MMLiveHalfScreenTitleBarViewDelegate>
{
    BOOL _hasReportedThatDevicesDisplaying; // +0x8
    BOOL _castingDeviceViewItemDidChanged; // +0x9
    MMFinderLiveCastViewModel * _viewModel; // +0x10
    UIView * _containerView; // +0x18
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x20
    UITableView * _tableView; // +0x28
    MMFinderLiveCastingView * _castingView; // +0x30
    MMUIButton * _closeButton; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _tipsLabel; // +0x48
    MMUIButton * _operateAllButton; // +0x50
    unsigned long long _projectionSearchTime; // +0x58
    unsigned long long _lastCastingTime; // +0x60
}
- (id)initWithViewModel:(id)arg1 lastCastingTime:(unsigned long long)arg2;
- (id)initWithViewModel:(id)arg1;
- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)currentContentViewHeight;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetDidDisappear:(BOOL)arg1;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)pageSheetWillAppear;
- (void)initContainerView;
- (void)initTableView;
- (void)layoutTableView;
- (void)initCastingView;
- (void)refreshCastingView;
- (void)initTitleBarView;
- (void)layoutTitleBarView;
- (void)refreshTopViews;
- (void)layoutTopViews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)liveCastViewModelDidReloadViewItems:(id)arg1;
- (void)liveCastViewModel:(id)arg1 didFailToCastDeviceViewItem:(id)arg2 withError:(id)arg3;
- (void)liveCastViewModel:(id)arg1 castingDeviceViewItemDidChange:(id)arg2;
- (void)liveCastingViewDidClickStopButton:(id)arg1;
- (id)audienceLogReporter;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)castingView;
- (void)setCastingView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
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
