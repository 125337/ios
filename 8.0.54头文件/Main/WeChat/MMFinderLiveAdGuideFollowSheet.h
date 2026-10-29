@interface MMFinderLiveAdGuideFollowSheet : MMPageSheetBaseView <MMFinderLiveAdGuideFollowCellDelegate, MMFinderLiveGuideFollowExt, MMUIViewControllerExt>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    id <MMFinderLiveAdGuideFollowSheetDelegate> _delegate; // +0x10
    WCTableViewManager * _tableViewManager; // +0x18
}
+ (id)showWithTaskId:(id)arg1 delegate:(id)arg2;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)fixedHeight;
- (void)layoutUI;
- (void)configureOptionTableView;
- (void)addAnchorSection;
- (void)addAdSection;
- (id)makeHeaderViewWith:(id)arg1 topPading:(double)arg2;
- (void)pageSheetDidAppear;
- (void)fetchData;
- (void)refresh;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onFollowInLiveFail:(id)arg1;
- (void)onFollowInLiveSuccess:(id)arg1;
- (void)onClickMMFinderLiveAdGuideFollowCellFollow:(id)arg1 isAnchor:(BOOL)arg2;
- (void)onClickMMFinderLiveAdGuideFollowCellContent:(id)arg1;
- (id)liveTask;
- (double)tableCellHeight;
- (double)tableWidth;
- (id)audienceLogReporter;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (void).cxx_destruct;
@end

