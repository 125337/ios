@interface WCFinderLongVideoPlayViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFeedLongPlayTableViewCellDelegate, WCFinderMegaVideoViewModelDelegate, MMScrollActionSheetDelegate, UIGestureRecognizerDelegate, WCFinderDataItemExt, WCFinderLongVideoPlayerViewModelDelegate, WCFinderCommentDetailViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderInPictureProtocol>
{
    BOOL _fromInPicture; // +0x70
    BOOL _isRotating; // +0x71
    BOOL _hadAppeared; // +0x72
    int _entryScene; // +0x74
    unsigned long long _enterScene; // +0x78
    unsigned long long _viewerScene; // +0x80
    NSString * _minimizeKey; // +0x88
    unsigned long long _minimizeIndex; // +0x90
    id /* block */ _appender; // +0x98
    UIScreenEdgePanGestureRecognizer * _leftEdgePanGestureRecognizer; // +0xa0
    UIScreenEdgePanGestureRecognizer * _rightEdgePanGestureRecognizer; // +0xa8
    MiniRecTransitionController * _minimizationTransitionController; // +0xb0
    UIScrollView * _contentScroll; // +0xb8
    UITableView * _tableView; // +0xc0
    long long _orientation; // +0xc8
    NSIndexPath * _currentIndexPath; // +0xd0
    NSMutableDictionary * _bullets; // +0xd8
    UIViewController<WCFinderCommentBaseViewProtocol> * _lastCommentVC; // +0xe0
    WCFinderLongVideoPlayerViewModel * _viewModel; // +0xe8
    WCFinderMegaVideoViewModel * _megaVideoViewModel; // +0xf0
    NSMutableArray * _items; // +0xf8
    NSString * _videoId; // +0x100
    NSString * _videoNonceId; // +0x108
    NSString * _encryptedVideoId; // +0x110
}
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3;
- (id)initWithItems:(id)arg1 chooseIndex:(unsigned long long)arg2;
- (id)minimizeKey;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willDisappear;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)playingVideo;
- (id)viewForCapture;
- (void)maxmizeFromInPicture;
- (void)closeInPicture;
- (unsigned long long)commentScene;
- (void)updateCurrentVideoInfo;
- (void)preloadVideos;
- (id)getTableViewCurrentCell;
- (void)pourStatsIntoPool;
- (void)reportFullStatsImmediately:(unsigned long long)arg1;
- (void)reportExposeForVideo:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)playCellDismiss:(id)arg1;
- (void)playCellLandScape:(id)arg1;
- (void)playCellProtrait:(id)arg1;
- (void)playCellMinimize:(id)arg1;
- (void)playCellInPicture:(id)arg1;
- (void)playCellOnPlayEnd:(id)arg1;
- (void)playCellBulletTooLong:(id)arg1;
- (void)playCellShowComment:(id)arg1 forContentVM:(id)arg2 fromComment:(BOOL)arg3;
- (void)setupUI;
- (void)fetchVideoDetail;
- (void)fetchNextRecommends;
- (void)fetchNextPage;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)showLoadingWithText:(id)arg1;
- (void)showToastWithText:(id)arg1;
- (void)showErrorToastWithText:(id)arg1;
- (BOOL)isAuthorViewForMoreOptions;
- (BOOL)canMinimize;
- (void)minimize;
- (void)inPicture:(BOOL)arg1;
- (void)willInPicture;
- (void)stashPlayer;
- (void)unstashPlayer;
- (BOOL)setVideoMute:(BOOL)arg1;
- (void)showPlayRate;
- (BOOL)isPlaying;
- (CGRect)fullRectForMedia;
- (int)relatedScene;
- (void)clickAuthorCommentAvatarWhenInProfile:(id)arg1;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(BOOL)arg4 dataItem:(id)arg5;
- (void)_pushContentTopicVCWith:(id)arg1 dataItem:(id)arg2 fromVC:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2 commentVC:(id)arg3;
- (void)_pushContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 fromVC:(id)arg4 sucBlock:(id /* block */)arg5;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 commentVC:(id)arg4 sucBlock:(id /* block */)arg5;
- (void)_pushContentExtReadingWithUrl:(id)arg1 fromVC:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onClickContentExtReadingAction:(id)arg1 commentVC:(id)arg2;
- (void)_pushContentPOIVCAction:(id)arg1 fromVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1 commentVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)_pushEventEntry:(id)arg1 fromVC:(id)arg2;
- (void)onClickEventEntry:(id)arg1 commentVC:(id)arg2;
- (void)onClickEventEntry:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)enablePanToPop;
- (void)panToExit;
- (void)setPanGesturePriority;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)shouldInteractivePop;
- (unsigned long long)enterScene;
- (unsigned long long)viewerScene;
- (void)setViewerScene:(unsigned long long)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (void)setMinimizeKey:(id)arg1;
- (unsigned long long)minimizeIndex;
- (void)setMinimizeIndex:(unsigned long long)arg1;
- (BOOL)fromInPicture;
- (void)setFromInPicture:(BOOL)arg1;
- (id /* block */)appender;
- (void)setAppender:(id /* block */)arg1;
- (id)leftEdgePanGestureRecognizer;
- (void)setLeftEdgePanGestureRecognizer:(id)arg1;
- (id)rightEdgePanGestureRecognizer;
- (void)setRightEdgePanGestureRecognizer:(id)arg1;
- (id)minimizationTransitionController;
- (void)setMinimizationTransitionController:(id)arg1;
- (id)contentScroll;
- (void)setContentScroll:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id)currentIndexPath;
- (void)setCurrentIndexPath:(id)arg1;
- (id)bullets;
- (void)setBullets:(id)arg1;
- (id)lastCommentVC;
- (void)setLastCommentVC:(id)arg1;
- (BOOL)isRotating;
- (void)setIsRotating:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)megaVideoViewModel;
- (void)setMegaVideoViewModel:(id)arg1;
- (BOOL)hadAppeared;
- (void)setHadAppeared:(BOOL)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (id)videoNonceId;
- (void)setVideoNonceId:(id)arg1;
- (id)encryptedVideoId;
- (void)setEncryptedVideoId:(id)arg1;
- (void).cxx_destruct;
@end
