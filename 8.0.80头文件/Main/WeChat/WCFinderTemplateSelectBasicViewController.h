@interface WCFinderTemplateSelectBasicViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource>
{
    int _fromScene; // +0x70
    UILabel * _templateTitleLabel; // +0x78
    UILabel * _templateDescLabel; // +0x80
    UIView * _playerView; // +0x88
    UILabel * _noDataTipsLabel; // +0x90
    UICollectionView * _collectionView; // +0x98
    unsigned long long _currentSelectIndex; // +0xa0
    unsigned long long _enterTime; // +0xa8
    NSString * _traceId; // +0xb0
    WCFinderVideoTemplateSelectBasicViewModel * _viewModel; // +0xb8
    MJTemplateListParams * _params; // +0xc0
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (void)setupVM;
- (void)dealloc;
- (BOOL)shouldFetchDataAfterViewDidLoad;
- (void)reloadView;
- (void)reloadData;
- (void)relayoutView;
- (void)setupGesture;
- (void)setupBasicUI;
- (BOOL)useTransparentNavibar;
- (id)getReportExtInfoWithTemplateId:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)addNotificationObserver;
- (void)removeNotificationObserver;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)onVideoSelectVMFetchDataSuccessful;
- (void)onClickCancel;
- (void)onClickDone;
- (void)onSwipe:(id)arg1;
- (void)setupDisplayView;
- (void)playVideo;
- (void)pauseVideo;
- (id)createViewModel;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)templateTitleLabel;
- (void)setTemplateTitleLabel:(id)arg1;
- (id)templateDescLabel;
- (void)setTemplateDescLabel:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)noDataTipsLabel;
- (void)setNoDataTipsLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (unsigned long long)currentSelectIndex;
- (void)setCurrentSelectIndex:(unsigned long long)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
