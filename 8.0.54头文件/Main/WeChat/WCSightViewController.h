@interface WCSightViewController : FullScreenViewController <SightViewDelegate, IUiUtilExt, FullScreenGestureDelegate, WCPlayerDownloaderExt, ForwardMessageLogicDelegate, WCActionSheetDelegate, SNSVideoABTestExt>
{
    unsigned int _startTime; // +0x6c
    MMUIViewController * _fullScreenWindow; // +0x70
    UIView * _nodeView; // +0x78
    UIView * _fullScreenContent; // +0x80
    SightView * _sightView; // +0x88
    double _videoTime; // +0x90
    BOOL _fullScreenPlaying; // +0x98
    WCMediaItem * _mediaItem; // +0xa0
    UIImageView * _thumbImageView; // +0xa8
    CGRect _thumbRect; // +0xb0
    WXFullScreenGestureRecognizer * m_gestureReconizer; // +0xd0
    WCDataItem * _dataItem; // +0xd8
    BOOL _bTimelineScene; // +0xe0
    unsigned int m_uOperateMode; // +0xe4
    BOOL m_bPreventRotate; // +0xe8
    struct m_currentPlayTime; // +0xec
    NSString * _nsFromVCName; // +0x108
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x110
    MMUIButton * _gameButton; // +0x118
    BOOL _silencePlay; // +0x120
    BOOL _bIgnoreLongPress; // +0x121
}
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)layoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (void)initGestures;
- (void)addGameTailButton;
- (void)onGameButtonClick:(id)arg1;
- (void)showVCAnimation;
- (BOOL)isFullScreenPlaying;
- (void)setThumbImage:(id)arg1;
- (void)internalStopAndCloseFullScreenWindow;
- (void)stopAndCloseFullScreenWindow;
- (double)calTransformFromRect:(CGRect)arg1;
- (void)clearSubviews;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenClose;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (BOOL)sightView:(id)arg1 playbackDidReadEnd:(BOOL)arg2;
- (void)onStartToPlayVideo;
- (void)reStartStateMachine;
- (void)onSightDurationUpdate:(struct)arg1;
- (void)onVideoTotalTimeUpdate:(double)arg1 msgClientId:(id)arg2;
- (void)onVideoStreamDownloadFail:(BOOL)arg1;
- (BOOL)checkDownloadForOperateMode:(unsigned int)arg1;
- (void)startLoadFullDownloadView;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onShowSightAction;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tryToAddFavorite;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)trySendSightToFriend;
- (void)OnDownloadSuccessForForwardVideoToFriend;
- (void)tryToSaveVideoToAlbum;
- (void)OnDownloadSuccessForSaveVideoToAlbum;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (BOOL)silencePlay;
- (void)setSilencePlay:(BOOL)arg1;
- (BOOL)bIgnoreLongPress;
- (void)setBIgnoreLongPress:(BOOL)arg1;
- (void).cxx_destruct;
@end

