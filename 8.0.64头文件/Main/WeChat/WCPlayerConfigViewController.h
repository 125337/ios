@interface WCPlayerConfigViewController : FullScreenViewController <WCPlayerConfigDelegate, FullScreenGestureDelegate, ForwardMessageLogicDelegate, WCPlayerDownloaderExt, WCFacadeExt, IRoamBackupPackageServiceExt, SNSVideoABTestExt>
{
    BOOL m_isPresented; // +0x71
    BOOL _isNeedChangeContentModeAtExist; // +0x72
    BOOL _bPreventRotate; // +0x73
    BOOL _bDismissSelfOnPresentOther; // +0x74
    BOOL _isClosingFullScreenWindow; // +0x75
    unsigned long long _playerScene; // +0x78
    WCPlayerPlayArgs * _playerInfo; // +0x80
    double _videoStartTime; // +0x88
    UIImage * _thumbImage; // +0x90
    NSString * _attachTitle; // +0x98
    NSObject<WCPlayerMediaExt> * _mediaWrap; // +0xa0
    MsgRecordDataWrap * _dataWrap; // +0xa8
    NSObject<WCPlayerConfigViewControllerDelegate> * _delegate; // +0xb0
    WCPlayerView * _playerView; // +0xb8
    WCPlayerConfigControlView * _controlView; // +0xc0
    WXFullScreenGestureRecognizer * _gestureReconizer; // +0xc8
    ForwardMessageLogicController * _forwardMsgLogic; // +0xd0
    UIView * _fullScreenContent; // +0xd8
    SEL _completeSelector; // +0xe0
    id _context; // +0xe8
    CGRect _originRect; // +0xf0
}
- (void)viewDidLoad;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)changePresentedState:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)PresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (id)gestureReconizer;
- (id)playerView;
- (id)controlView;
- (id)generateConfig;
- (id)forwardMsgLogic;
- (void)showVCAnimation;
- (void)stopAndCloseFullScreenWindow;
- (void)clearSubviews;
- (void)forwardVideoToFriend:(id)arg1;
- (void)forwardVideoOnGetAllData:(id)arg1;
- (void)favoriteVideo;
- (void)favoriteVideoOnGetAllData;
- (void)saveVideo;
- (void)saveVideoOnGetAllData;
- (void)fetchAllVideoDataWithCompleteSelector:(SEL)arg1 context:(id)arg2;
- (BOOL)isChatPlayerMode;
- (BOOL)isVideoPlaying;
- (void)startPlay;
- (void)pause;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenClose;
- (void)resumeMusic;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onSightIconProgressEnd;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapAttachButton:(id)arg1;
- (void)onPlayToEnd;
- (void)onToolViewAutoClose;
- (void)onGetVideoSize:(CGSize)arg1;
- (void)onClickShareButton:(id)arg1;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickMoreButton:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadError:(id)arg1;
- (void)onTimeLineVcWillPop;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (unsigned long long)playerScene;
- (void)setPlayerScene:(unsigned long long)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (double)videoStartTime;
- (void)setVideoStartTime:(double)arg1;
- (CGRect)originRect;
- (void)setOriginRect:(CGRect)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)attachTitle;
- (void)setAttachTitle:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)dataWrap;
- (void)setDataWrap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isNeedChangeContentModeAtExist;
- (void)setIsNeedChangeContentModeAtExist:(BOOL)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setControlView:(id)arg1;
- (void)setGestureReconizer:(id)arg1;
- (void)setForwardMsgLogic:(id)arg1;
- (id)fullScreenContent;
- (void)setFullScreenContent:(id)arg1;
- (BOOL)bPreventRotate;
- (void)setBPreventRotate:(BOOL)arg1;
- (SEL)completeSelector;
- (void)setCompleteSelector:(SEL)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)bDismissSelfOnPresentOther;
- (void)setBDismissSelfOnPresentOther:(BOOL)arg1;
- (BOOL)isClosingFullScreenWindow;
- (void)setIsClosingFullScreenWindow:(BOOL)arg1;
- (void).cxx_destruct;
@end
