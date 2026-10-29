@interface MMMultipleMusicViewController : MMUIViewController <SendAppMsgHandleDelegate, UIScrollViewDelegate, MMScrollActionSheetDelegate, MMMusicPageViewDelegate, ShakeCheckerDelegate, IMusicPlayerExt, MMTipsViewControllerDelegate, FileDetailLogicDelegate>
{
    MMScrollView * _musicPageScrollView; // +0x70
    MMMusicPageView * _leftPageView; // +0x78
    MMMusicPageView * _centerPageView; // +0x80
    MMMusicPageView * _rightPageView; // +0x88
    NSMutableArray * _musicInfoArray; // +0x90
    MMMusicInfo * _curMusicInfo; // +0x98
    int _numberOfPages; // +0xa0
    unsigned long long _currentPageIndex; // +0xa8
    SendAppMsgHandler * _sendAppMsgHandler; // +0xb0
    BOOL _isSingleLyricPage; // +0xb8
    float _offset; // +0xbc
    UIImageView * _bottomView; // +0xc0
    UIButton * _playMusicButton; // +0xc8
    MMTimer * _musicProgressTimer; // +0xd0
    MMMusicPlayerModeTipView * _transModeTipView; // +0xd8
    unsigned long long _pushedFromType; // +0xe0
    BOOL _isFromShaking; // +0xe8
    MMScrollActionSheet * _scrollActionSheet; // +0xf0
    CShakeChecker * _shakeChecker; // +0xf8
    BOOL _isOnShakeCheck; // +0x100
    unsigned long long _beginShakeTime; // +0x108
    unsigned long long _endShakeTime; // +0x110
    unsigned long long _startEntranceTime; // +0x118
    MMTipsViewController * _easterEggTipView; // +0x120
    MMMusicPlayerModeTipView * _justOneSongTipView; // +0x128
    MPVolumeView * m_viewAirPlay; // +0x130
    UIButton * m_jumpOriginMusicView; // +0x138
    MMWebImageView * m_sourceMusicIconImageView; // +0x140
    UILabel * m_sourceMusicTitleLabel; // +0x148
    UIImageView * m_arrowImageView; // +0x150
    MMMusicSliderControlView * _sliderView; // +0x158
    BOOL _bLayoutScrollView; // +0x160
    BOOL _forceRestart; // +0x161
    CGSize _lastContainerSize; // +0x168
    BOOL _bClickJumpButton; // +0x178
    long long _playMode; // +0x180
    NSString * _taskBizKey; // +0x188
    unsigned long long _enterMusicTime; // +0x190
    MMMusicLocalFileDataInfo * _fileLogicController; // +0x198
    MMScrollActionSheet * _actionSheet; // +0x1a0
}
- (id)initWithMusicInfo:(id)arg1 withMusicListSource:(long long)arg2 withOffset:(float)arg3;
- (id)initWithMusicInfo:(id)arg1 withMusicListSource:(long long)arg2 withOffset:(float)arg3 forceRestart:(BOOL)arg4;
- (id)initFromBanner;
- (id)initFromLocalFileData:(id)arg1;
- (void)initPageInfo;
- (unsigned long long)indexOfCurrentPage;
- (void)commonInit;
- (void)setPushedFromType:(long long)arg1;
- (unsigned int)getSceneByPushFromType:(unsigned long long)arg1;
- (void)setPlayMode:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateLogEntranceType;
- (void)viewWillBePushed:(BOOL)arg1;
- (BOOL)shouldShowSearchPlayAllTip;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)reportState;
- (void)beginPlayCurMusic;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)dealloc;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)initView;
- (void)updateButtomBtnColor:(id)arg1;
- (void)initSelfView;
- (void)initNavigationItem;
- (void)initScrollView;
- (void)tileMusicPages;
- (void)setMusicPageDelegate;
- (void)initMusicPlayBtn;
- (void)initAirPlayBtn;
- (void)initSlider;
- (void)onClickJumpOriginMusicButton;
- (void)initJumpOriginMusicButton;
- (void)updateJumpOriginMusicView;
- (void)airPlayButtonTouchUpInside:(id)arg1;
- (void)onRouteActiveChange:(id)arg1;
- (void)onMinimizeMusicPlayer;
- (void)onPlayMusicBtnClicked;
- (id)getJumpToOriginMusicSheetItemWithMusicInfo:(id)arg1;
- (id)getJumpToOriginMusicSheetItemWithMusicInfo:(id)arg1 FromShowMore:(BOOL)arg2;
- (void)onShowCommonMore:(id)arg1;
- (void)showFileActionSheet:(id)arg1;
- (void)addGestureRecognizers;
- (void)onSwipeScrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateMusicScrollView:(BOOL)arg1;
- (void)updateMusicScrollViewByCurMusicInfo;
- (void)cancelSetShakePage;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)onLyricsChanged:(id)arg1 Lyrics:(id)arg2;
- (void)onMusicPlayStatusChanged;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (void)onPlayNextMusic;
- (void)onPlayPreviousMusic;
- (void)OnUpdateDuarationOnForeGround;
- (void)onDataBuffering:(double)arg1;
- (void)onStopMusicListPlay;
- (id)getCoverImageData;
- (id)getUpLoadTask:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getMessageWrap:(id)arg1;
- (void)setPlayMusicButtonImage:(BOOL)arg1;
- (void)updatePlayBtn;
- (void)updateCurMusicInfo;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)onUpdateBottomBtnColor:(id)arg1;
- (void)updateNavBarByColor:(id)arg1;
- (void)updateNavBarTintColorByColor:(id)arg1;
- (void)onFollowArrayUpToShowSecondPage;
- (void)onShowSecondPage;
- (void)onBack2FirstPage;
- (id)getPlayButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)layoutTipView;
- (void)layoutMusicPlayBtn;
- (void)layoutAirPlayBtn;
- (void)layoutScrollView;
- (void)layoutMusicPageView;
- (void)OnShake;
- (void)startShakeCheck;
- (void)transPlayMode;
- (void)showEasterEgg;
- (id)getEasterEggcontentTip;
- (void)playShakeSound;
- (void)playSoundByAQAudioPlayer:(id)arg1 type:(id)arg2;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (id)getCurrentViewController;
- (id)getRightBarButtonItem;
- (void)onRevoked;
- (void)onRevokedReturn;
- (BOOL)isFromShaking;
- (void)setIsFromShaking:(BOOL)arg1;
- (long long)playMode;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (unsigned long long)enterMusicTime;
- (void)setEnterMusicTime:(unsigned long long)arg1;
- (BOOL)bClickJumpButton;
- (void)setBClickJumpButton:(BOOL)arg1;
- (id)fileLogicController;
- (void)setFileLogicController:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (void).cxx_destruct;
@end
