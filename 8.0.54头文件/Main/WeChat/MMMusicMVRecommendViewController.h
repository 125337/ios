@interface MMMusicMVRecommendViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, WCActionSheetDelegate, MMMusicMVRecommendTableCellDelegate, MMMusicMVRecommendHeaderViewDelegate, MMMusicLiveCGIMgrDelegate>
{
    NSData * _lastBuff; // +0x68
    NSString * _bgmSource; // +0x70
    WCFinderLastestPlayVideoInfoMgr * _lastestBgmPlayVideoInfoMgr; // +0x78
    MMMusicMVModel * _currentModel; // +0x80
    MMMusicMVRecommendTableCell * _activedCell; // +0x88
    UITableView * _tableView; // +0x90
    UIView * _containerView; // +0x98
    UIButton * _backgroundButton; // +0xa0
    MMMusicMVRecommendHeaderView * _headerView; // +0xa8
    UIPanGestureRecognizer * _panGesture; // +0xb0
    UILabel * _stateTipsLabel; // +0xb8
    BOOL _needInternalLoadData; // +0xc0
    BOOL _isInternalLoading; // +0xc1
    id <MMMusicMVRecommendViewControllerDataSource> _dataSource; // +0xc8
    id /* block */ _switchBlock; // +0xd0
    id /* block */ _beforePushVCBlock; // +0xd8
    id /* block */ _afterPopVCBlock; // +0xe0
    id /* block */ _closeVCBlock; // +0xe8
    MMMusicMVRecommendAnimationLoadingView * _loadingView; // +0xf0
    MMMusicLiveCGIMgr * _cgiMgr; // +0xf8
    NSMutableArray * _internalLoadMvModels; // +0x100
}
- (id)initWithModel:(id)arg1 needInternalLoadData:(BOOL)arg2;
- (void)dealloc;
- (id)loadingView;
- (id)backgroundButton;
- (id)stateTipsLabel;
- (id)containerView;
- (id)headerView;
- (id)panGesture;
- (id)tableView;
- (id)cgiMgr;
- (id)internalLoadMvModels;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)startVCLoading;
- (void)stopVCLoading;
- (void)addNoVideoStateTips;
- (void)reload;
- (void)internalReloadData;
- (void)updateHeaderView;
- (void)close:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onClickCloseButton;
- (void)handlePanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hidesStatusBar;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)scrollCommentToTop;
- (void)onClickWithCell:(id)arg1;
- (void)onMusicLiveGetMVRecommentList:(id)arg1 continueFlag:(BOOL)arg2 requestId:(id)arg3;
- (id)currentModel;
- (void)setCurrentModel:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id /* block */)switchBlock;
- (void)setSwitchBlock:(id /* block */)arg1;
- (id /* block */)beforePushVCBlock;
- (void)setBeforePushVCBlock:(id /* block */)arg1;
- (id /* block */)afterPopVCBlock;
- (void)setAfterPopVCBlock:(id /* block */)arg1;
- (id /* block */)closeVCBlock;
- (void)setCloseVCBlock:(id /* block */)arg1;
- (void)setLoadingView:(id)arg1;
- (BOOL)needInternalLoadData;
- (void)setNeedInternalLoadData:(BOOL)arg1;
- (void)setCgiMgr:(id)arg1;
- (BOOL)isInternalLoading;
- (void)setIsInternalLoading:(BOOL)arg1;
- (void)setInternalLoadMvModels:(id)arg1;
- (void).cxx_destruct;
@end

