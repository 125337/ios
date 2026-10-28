@interface WCC2CVideoPlayerView : UIView <IVideoExt, FullScreenGestureDelegate, WCC2CPlayerControlViewDelegate, WCPlayerViewUIDelegate, WCC2CVideoThumbImageViewDelegate, IRoamBackupPackageServiceExt, CNetworkStatusExt>
{
    double m_initialTime; // +0x8
    UIImage * m_thumbImage; // +0x10
    BOOL _bVideoIsBlocked; // +0x18
    BOOL _bVideoIsExpired; // +0x19
    BOOL _isAnimating; // +0x1a
    BOOL _soundable; // +0x1b
    BOOL _hideCloseButton; // +0x1c
    BOOL _bShouldResumeInterrupt; // +0x1d
    BOOL _isRawVideoMode; // +0x1e
    BOOL _isPreloadSvrRecall; // +0x1f
    BOOL _bFirstPlay; // +0x20
    BOOL _bPlayToEnd; // +0x21
    BOOL _bHasRequestedVideoState; // +0x22
    BOOL _bRequaringVideoState; // +0x23
    BOOL _bInMuteMode; // +0x24
    BOOL _isDisplayingPlaceHolderMsg; // +0x25
    BOOL _isWaitingPlayWhenReceiveFinishMsg; // +0x26
    BOOL _isShowRawPlaySucc; // +0x27
    BOOL _enableLTR; // +0x28
    BOOL _bRequestingVideoStateCgi; // +0x29
    BOOL _hasAddToRecentUsed; // +0x2a
    BOOL _hasRemovedFromRecentUsed; // +0x2b
    int _action; // +0x2c
    unsigned int _brandEnterIdForReport; // +0x30
    CMessageWrap * _msgWrap; // +0x38
    id <WCC2CVideoPlayerViewDelegate> _delegate; // +0x40
    id <WCC2CVideoPlayerViewTouchDelegate> _touchDelegate; // +0x48
    MMScrollViewZoomReporter * _zoomReporter; // +0x50
    MMScrollViewZoomReporter * _thumbZoomReporter; // +0x58
    WCC2CVideoPlayerReporter * _reporter; // +0x60
    WCPlayerView * _playerView; // +0x68
    WCPlayerPlayArgs * _playerInfo; // +0x70
    WCC2CPlayerControlView * _controlView; // +0x78
    WCPlayerPlayArgs * _rawPlayerInfo; // +0x80
    WCPlayerView * _rawPlayerView; // +0x88
    WCC2CVideoThumbImageView * _thumbImageView; // +0x90
    WXFullScreenGestureRecognizer * _fullScreenGestureRecognizer; // +0x98
    unsigned long long _rawBtnClickTime; // +0xa0
    unsigned long long _rawPlayStartTime; // +0xa8
    id /* block */ _customBottomLeftActioin; // +0xb0
    id /* block */ _customBottomLeftString; // +0xb8
    WCDownloadArgsWrap * _videoSaveDownloadArgsWrap; // +0xc0
    MMUIButton * _brandContentView; // +0xc8
    CAGradientLayer * _brandMaskLayer; // +0xd0
    MMUILabel * _brandTitleView; // +0xd8
    MMBrandHeadImageView * _brandHeadView; // +0xe0
    MMUIButton * _brandNickNameView; // +0xe8
    MMUIButton * _brandOpenMpPageBtn; // +0xf0
    MPLandingPageCgiHandler * _brandCgiHandler; // +0xf8
    MPLandingPageReportLogic * _brandReportLogic; // +0x100
}
- (void)notifyBrandMpVideoDealloc;
- (void)initBrandViews;
- (void)initBrandContentView;
- (void)initBrandTitleView;
- (void)initBrandHeadView;
- (void)initBrandNickNameView;
- (void)initBrandOpenMpPageBtn;
- (void)addShadowToView:(id)arg1;
- (void)layoutBrandViews;
- (void)setBrandViewsHidden:(BOOL)arg1;
- (void)onOpenProfile;
- (void)onOpenMpPage;
- (void)requestVideoStateByVid:(id /* block */)arg1;
- (void)reportBrandMpVideoCommonEvent:(unsigned long long)arg1;
- (void)reportVideoPlayCgi17537:(unsigned long long)arg1;
- (void)reportBrandMpVideoPlayFail:(int)arg1 localizedErrorDes:(id)arg2;
- (void)reportVideoShareSuccessEvent;
- (void)initReportLogicIfNeed;
- (unsigned int)getScene;
- (id)initWithFrame:(CGRect)arg1 MsgWrap:(id)arg2 Soundable:(BOOL)arg3 AutoPlay:(BOOL)arg4 delegate:(id)arg5;
- (id)initWithFrame:(CGRect)arg1 MsgWrap:(id)arg2 Soundable:(BOOL)arg3 AutoPlay:(BOOL)arg4 delegate:(id)arg5 customBottomLeftAction:(id /* block */)arg6 customBottomLeftString:(id /* block */)arg7;
- (void)dealloc;
- (void)initView;
- (void)configPlayerView;
- (void)setIsRawVideoMode:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setThumbImage:(id)arg1;
- (void)setInitialTime:(double)arg1;
- (id)thumbImageView;
- (id)tryGetImgFromVideoPath:(id)arg1 thumbImagePath:(id)arg2;
- (void)createNewMaskedImageWithImage:(id)arg1;
- (void)initFullScreenGestureOnView:(id)arg1;
- (void)setEnableLeftToRightClose:(BOOL)arg1;
- (void)didMoveToSuperview;
- (void)setReporter:(id)arg1;
- (void)setImageExpireReporter:(id)arg1;
- (id)generatePlayerView;
- (id)generateRawPlayerView;
- (id)generatePlayerView:(id)arg1;
- (id)generatePlayerInfo;
- (id)generateRawPlayerInfo;
- (id)controlView;
- (void)onPlayPlaceHolderMsg;
- (void)onStartPlay;
- (void)reportOnRawVideoPlayEnd:(BOOL)arg1;
- (void)reportOnVideoPlayEnd;
- (void)changeMsgToDownloadStatus:(unsigned int)arg1;
- (BOOL)tryRequestVideoInfo;
- (BOOL)startPlay;
- (void)realPlay;
- (void)seekTo:(double)arg1;
- (void)destoryWhenVideoIsBlocked:(id)arg1;
- (void)stopPlay;
- (void)stopPlayerDownload:(BOOL)arg1;
- (void)stopPlay:(id)arg1;
- (void)interruptVideo;
- (void)resumeVideoFromInterrupt;
- (void)pause;
- (unsigned long long)totalTime;
- (double)getCurrPlayedTimeInSec;
- (double)getTotalPlaybackTimeInSec;
- (id)getAnimateView;
- (void)preparePlayerView;
- (BOOL)checkFinishMsg:(id)arg1;
- (BOOL)isNeedPlayFromEveryDisplay;
- (void)setVideoSaveDownloadArgsWrap:(id)arg1;
- (void)blockPlayerSyncDownload:(BOOL)arg1;
- (BOOL)isVideoPlaying;
- (BOOL)isVideoReadyToPlay;
- (BOOL)isPreventHiddenTool;
- (void)onClickPreviewRawVideoButton;
- (void)updateToolbar;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)showToolView;
- (void)hideToolView;
- (void)setToolViewsHidden:(BOOL)arg1;
- (void)setViewsHiddenOnScroll:(BOOL)arg1;
- (void)setViewsHiddenOnScroll:(BOOL)arg1 hideIconOnFirstPlay:(BOOL)arg2;
- (void)setViewsAlphaOnMultiPageScroll:(double)arg1;
- (void)handleDownloadFail;
- (void)handleDownloadExpired;
- (void)setBForbidDragDownToClose:(BOOL)arg1;
- (BOOL)bForbidDragDownToClose;
- (void)onFullScreenClose;
- (void)exitVideoPlay:(int)arg1;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (BOOL)shouldPreventDragDownCloseGesture;
- (double)updateBottomLeftSpace;
- (double)getBottomRightMargin;
- (void)onVideoPrepareToPlay;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (BOOL)tryDownloadFromCloudBackup;
- (void)reportWhenStartPlay;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onPlayToEnd;
- (void)onStartPlayIconClick;
- (void)onCloseVideoPlay;
- (void)onClickDetailButton;
- (void)onClickPlayButton;
- (void)onClickPlayAttachVideoBtn;
- (void)onSightProgressBarHidden;
- (void)onProgressBarBeginSeek;
- (void)onProgressBarEndSeek:(double)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onClickToPlayRawVideo;
- (void)onClickToCancelPlayRawVideo;
- (BOOL)canShowShareButton;
- (BOOL)canShowDownloadButton;
- (BOOL)canShowImgFastBrowseButton;
- (BOOL)canShowMoreButton;
- (void)onClickShareButton:(id)arg1;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickToCancelSaveVideo;
- (void)onClickImgFastBrowseButton:(id)arg1;
- (void)onClickMoreButton:(id)arg1;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onVideoDataDownloadSuccess:(id)arg1;
- (void)onVideoDataDownloadFail:(id)arg1;
- (void)configPlayerViewWhenReceiveFinishMsg;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)playerViewWillBeginZoom:(id)arg1;
- (void)playerViewDidZoom:(id)arg1;
- (void)playerViewDidEndZoom:(id)arg1;
- (void)playerView:(id)arg1 doubleTap:(id)arg2;
- (void)thumbImageViewWillBeginZoom:(id)arg1;
- (void)thumbImageViewDidZoom:(id)arg1;
- (void)thumbImageViewDidEndZoom:(id)arg1;
- (void)thumbImageView:(id)arg1 doubleTap:(id)arg2;
- (void)onRoamBackupPackageServiceLoadMediaProgress:(id)arg1 dataID:(id)arg2 finished:(unsigned long long)arg3 total:(unsigned long long)arg4;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (CGRect)adjustShowAreaForDisplayFrame:(CGRect)arg1;
- (BOOL)bVideoIsBlocked;
- (void)setBVideoIsBlocked:(BOOL)arg1;
- (BOOL)bVideoIsExpired;
- (void)setBVideoIsExpired:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)soundable;
- (void)setSoundable:(BOOL)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)touchDelegate;
- (void)setTouchDelegate:(id)arg1;
- (id)zoomReporter;
- (void)setZoomReporter:(id)arg1;
- (id)thumbZoomReporter;
- (void)setThumbZoomReporter:(id)arg1;
- (id)reporter;
- (BOOL)hideCloseButton;
- (void)setHideCloseButton:(BOOL)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (void)setControlView:(id)arg1;
- (id)rawPlayerInfo;
- (void)setRawPlayerInfo:(id)arg1;
- (id)rawPlayerView;
- (void)setRawPlayerView:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (BOOL)bShouldResumeInterrupt;
- (void)setBShouldResumeInterrupt:(BOOL)arg1;
- (BOOL)isRawVideoMode;
- (BOOL)isPreloadSvrRecall;
- (void)setIsPreloadSvrRecall:(BOOL)arg1;
- (id)fullScreenGestureRecognizer;
- (void)setFullScreenGestureRecognizer:(id)arg1;
- (BOOL)bFirstPlay;
- (void)setBFirstPlay:(BOOL)arg1;
- (BOOL)bPlayToEnd;
- (void)setBPlayToEnd:(BOOL)arg1;
- (BOOL)bHasRequestedVideoState;
- (void)setBHasRequestedVideoState:(BOOL)arg1;
- (BOOL)bRequaringVideoState;
- (void)setBRequaringVideoState:(BOOL)arg1;
- (BOOL)bInMuteMode;
- (void)setBInMuteMode:(BOOL)arg1;
- (BOOL)isDisplayingPlaceHolderMsg;
- (void)setIsDisplayingPlaceHolderMsg:(BOOL)arg1;
- (BOOL)isWaitingPlayWhenReceiveFinishMsg;
- (void)setIsWaitingPlayWhenReceiveFinishMsg:(BOOL)arg1;
- (BOOL)isShowRawPlaySucc;
- (void)setIsShowRawPlaySucc:(BOOL)arg1;
- (BOOL)enableLTR;
- (void)setEnableLTR:(BOOL)arg1;
- (unsigned long long)rawBtnClickTime;
- (void)setRawBtnClickTime:(unsigned long long)arg1;
- (unsigned long long)rawPlayStartTime;
- (void)setRawPlayStartTime:(unsigned long long)arg1;
- (int)action;
- (void)setAction:(int)arg1;
- (id /* block */)customBottomLeftActioin;
- (void)setCustomBottomLeftActioin:(id /* block */)arg1;
- (id /* block */)customBottomLeftString;
- (void)setCustomBottomLeftString:(id /* block */)arg1;
- (id)videoSaveDownloadArgsWrap;
- (id)brandContentView;
- (void)setBrandContentView:(id)arg1;
- (id)brandMaskLayer;
- (void)setBrandMaskLayer:(id)arg1;
- (id)brandTitleView;
- (void)setBrandTitleView:(id)arg1;
- (id)brandHeadView;
- (void)setBrandHeadView:(id)arg1;
- (id)brandNickNameView;
- (void)setBrandNickNameView:(id)arg1;
- (id)brandOpenMpPageBtn;
- (void)setBrandOpenMpPageBtn:(id)arg1;
- (id)brandCgiHandler;
- (void)setBrandCgiHandler:(id)arg1;
- (BOOL)bRequestingVideoStateCgi;
- (void)setBRequestingVideoStateCgi:(BOOL)arg1;
- (id)brandReportLogic;
- (void)setBrandReportLogic:(id)arg1;
- (unsigned int)brandEnterIdForReport;
- (void)setBrandEnterIdForReport:(unsigned int)arg1;
- (BOOL)hasAddToRecentUsed;
- (void)setHasAddToRecentUsed:(BOOL)arg1;
- (BOOL)hasRemovedFromRecentUsed;
- (void)setHasRemovedFromRecentUsed:(BOOL)arg1;
- (void).cxx_destruct;
@end
