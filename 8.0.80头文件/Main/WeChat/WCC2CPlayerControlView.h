@interface WCC2CPlayerControlView : WCPlayerControlView <SightIconViewDelegate, WCC2CPlayerProgressBarDelegate, UIGestureRecognizerDelegate, C2CVideoDownloadMgrExt, WCPlayerEventExt>
{
    BOOL _bVideoBlocked; // +0x8
    BOOL _bPreventHiddenTool; // +0x9
    BOOL _isSyncSaveingData; // +0xa
    BOOL _hideCloseButton; // +0xb
    BOOL _bCheckVideoData; // +0xc
    BOOL _isDownloadingFromCloudRoam; // +0xd
    unsigned int _downloadPercent; // +0x10
    unsigned int _rawDownloadPercent; // +0x14
    unsigned int _scrubbBeginProgress; // +0x18
    id <WCC2CPlayerControlViewDelegate> _delegate; // +0x20
    UIView * _toolPanView; // +0x28
    UIView * _topBkgView; // +0x30
    ImageBrowseButton * _closeButton; // +0x38
    ImageBrowseButton * _shareBtn; // +0x40
    ImageBrowseButton * _downloadBtn; // +0x48
    ImageBrowseButton * _imgFastBrowseBtn; // +0x50
    ImageBrowseButton * _moreBtn; // +0x58
    ImageBrowseButton * _locateBtn; // +0x60
    UIView * _bottomBkgView; // +0x68
    MMUILabel * _errorTipsLabel; // +0x70
    MMUIButton * _leftTopCloseButton; // +0x78
    SightIconView * _iconView; // +0x80
    WCC2CPlayerProgressBar * _progressBar; // +0x88
    UIButton * _playAttachVideoButton; // +0x90
    CMessageWrap * _msgWrap; // +0x98
    WCC2CVideoPlayerReporter * _reporter; // +0xa0
    HDImageExpireReporter * _imageExpireReporter; // +0xa8
    WCDownloadArgsWrap * _videoSaveDownloadArgsWrap; // +0xb0
    double _buttonRightPadding; // +0xb8
    CAGradientLayer * _topGradientLayer; // +0xc0
    CAGradientLayer * _bottomGradientLayer; // +0xc8
    UIView * _tapgGestureView; // +0xd0
    UIView * _iconViewMask; // +0xd8
    UITapGestureRecognizer * _tapGestureRecognizer; // +0xe0
    MMUIButton * _rawPlayStatusBtn; // +0xe8
    ImageBrowseButton * _cloudRoamBtn; // +0xf0
    MMUIButton * _sessionSourceBtn; // +0xf8
    SightIconView * _saveLoadingIconView; // +0x100
    NSString * _rawVideoAssetID; // +0x108
    AVAsset * _rawVideoAsset; // +0x110
    NSURL * _rawVideoAssetUrl; // +0x118
    id /* block */ _customBottomLeftAction; // +0x120
    id /* block */ _customBottomLeftString; // +0x128
    MMTimer * _videoPlayingChecker; // +0x130
    unsigned long long _lastVideoFrameOutTime; // +0x138
    CGSize _iconSize; // +0x140
}
- (id)initWithFrame:(CGRect)arg1 MessageWrap:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 MessageWrap:(id)arg2 customBottomLeftAction:(id /* block */)arg3 customBottomLeftString:(id /* block */)arg4;
- (void)initSubview;
- (void)initPlayAttachVideoBtn;
- (id)iconView;
- (id)toolPanView;
- (id)iconViewMask;
- (id)topBkgView;
- (id)bottomBkgView;
- (id)closeButton;
- (id)shareBtn;
- (id)downloadBtn;
- (BOOL)isChangeIconClicfgOn;
- (id)imgFastBrowseBtn;
- (id)moreBtn;
- (id)locateBtn;
- (id)leftTopCloseButton;
- (id)saveLoadingIconView;
- (CGPoint)getLeftTopCloseButtonOrigin;
- (void)initRawPlayStatusBtn;
- (void)initCloudRoamBtn;
- (void)updateRawStatusBtn;
- (id)getHDButtonTextBySize:(unsigned long long)arg1;
- (void)initSessionResourceButton;
- (void)onSessionSourceBtnClick;
- (void)addShadowToView:(id)arg1;
- (id)tapgGestureView;
- (id)progressBar;
- (id)tapGestureRecognizer;
- (id)errorTipsLabel;
- (void)onClickRawStatusButton;
- (void)_onClickRawStatusButton;
- (void)onCloseBtnClick;
- (void)onShareBtnClick:(id)arg1;
- (void)onDownloadBtnClick:(id)arg1;
- (void)onImgFastBrowseBtnClick:(id)arg1;
- (void)onMoreBtnClick:(id)arg1;
- (void)onLocateBtnClick:(id)arg1;
- (void)onClickDetailButton;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickPreviewRawVideoButton;
- (void)showVideoController;
- (void)setBottomToolsLeftSpace:(double)arg1;
- (void)setIconSize:(CGSize)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (double)videoTotalTime;
- (void)setErrorTipsText:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)showUploadStopWithText:(id)arg1;
- (void)showRawPlayStatusBtn;
- (void)showCloudRoamBtn;
- (void)showWaitUploading;
- (void)hiddenWaitUploading;
- (void)makeToolViewUserInteractionEnabled:(BOOL)arg1;
- (void)hiddenErrorTips;
- (void)showSwitchingToRawStatus;
- (void)showToolPanel;
- (void)hideToolPanel;
- (void)updateVideoSaveLoadingStatus;
- (void)setHideCloseButton:(BOOL)arg1;
- (void)onVideoBlocked;
- (void)layoutControls;
- (void)updateRightBottomTool:(double)arg1;
- (void)layoutSubviews;
- (void)onSingleTapOnIconView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)getRawPlayStatusBtnLeft;
- (BOOL)isVideoPlaying;
- (BOOL)canShowShareButton;
- (BOOL)canShowDownloadButton;
- (BOOL)canShowImgFastBrowseButton;
- (BOOL)canShowMoreButton;
- (BOOL)canShowLocateButton;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)onPlayButtonExpose;
- (void)onPlayButtonClicked;
- (id)onPlayRateExpose;
- (BOOL)isPreventProgressBarHidden;
- (void)onProgressBarHidden;
- (void)onProgressBarChangePlayRate:(float)arg1 currentPlayRate:(float)arg2;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
- (void)tryStartVideoPlayingChecker;
- (void)stopVideoPlayingChecker;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onCheckVideoPlaying;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (void)showIconView;
- (void)hiddenIconView;
- (void)setVideoSaveDownloadArgsWrap:(id)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onDownloadProgressChange:(id)arg1 finishLength:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onReceiveAllVideoData:(id)arg1;
- (void)updateRawProgressWithPercent:(unsigned int)arg1;
- (void)animateHideRawProgressButton:(float)arg1;
- (void)animateHideCloudRoamBtn:(float)arg1;
- (void)animateLayoutControls;
- (CGRect)adjustShowAreaForDisplayFrame:(CGRect)arg1;
- (void)onVideoDownloadProgress:(id)arg1 isRaw:(BOOL)arg2 progressInfo:(id)arg3;
- (void)onVideoDownloadComplete:(id)arg1 isRaw:(BOOL)arg2 taskInfo:(id)arg3;
- (void)onRoamBackupPackageServiceLoadMediaProgress:(id)arg1 dataID:(id)arg2 finished:(unsigned long long)arg3 total:(unsigned long long)arg4;
- (void)onRoamBackupPackageServiceDownloadFromCloudRoamStart;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isHDRVideo;
- (void)onPlayerStartPlay:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)iconSize;
- (BOOL)bVideoBlocked;
- (void)setBVideoBlocked:(BOOL)arg1;
- (BOOL)bPreventHiddenTool;
- (void)setBPreventHiddenTool:(BOOL)arg1;
- (BOOL)isSyncSaveingData;
- (void)setIsSyncSaveingData:(BOOL)arg1;
- (BOOL)hideCloseButton;
- (BOOL)bCheckVideoData;
- (void)setBCheckVideoData:(BOOL)arg1;
- (void)setToolPanView:(id)arg1;
- (void)setTopBkgView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setDownloadBtn:(id)arg1;
- (void)setImgFastBrowseBtn:(id)arg1;
- (void)setMoreBtn:(id)arg1;
- (void)setLocateBtn:(id)arg1;
- (void)setBottomBkgView:(id)arg1;
- (void)setErrorTipsLabel:(id)arg1;
- (void)setLeftTopCloseButton:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (id)playAttachVideoButton;
- (void)setPlayAttachVideoButton:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)imageExpireReporter;
- (void)setImageExpireReporter:(id)arg1;
- (id)videoSaveDownloadArgsWrap;
- (double)buttonRightPadding;
- (void)setButtonRightPadding:(double)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setTapgGestureView:(id)arg1;
- (void)setIconViewMask:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)rawPlayStatusBtn;
- (void)setRawPlayStatusBtn:(id)arg1;
- (id)cloudRoamBtn;
- (void)setCloudRoamBtn:(id)arg1;
- (id)sessionSourceBtn;
- (void)setSessionSourceBtn:(id)arg1;
- (void)setSaveLoadingIconView:(id)arg1;
- (unsigned int)downloadPercent;
- (void)setDownloadPercent:(unsigned int)arg1;
- (unsigned int)rawDownloadPercent;
- (void)setRawDownloadPercent:(unsigned int)arg1;
- (id)rawVideoAssetID;
- (void)setRawVideoAssetID:(id)arg1;
- (id)rawVideoAsset;
- (void)setRawVideoAsset:(id)arg1;
- (id)rawVideoAssetUrl;
- (void)setRawVideoAssetUrl:(id)arg1;
- (id /* block */)customBottomLeftAction;
- (void)setCustomBottomLeftAction:(id /* block */)arg1;
- (id /* block */)customBottomLeftString;
- (void)setCustomBottomLeftString:(id /* block */)arg1;
- (unsigned int)scrubbBeginProgress;
- (void)setScrubbBeginProgress:(unsigned int)arg1;
- (id)videoPlayingChecker;
- (void)setVideoPlayingChecker:(id)arg1;
- (unsigned long long)lastVideoFrameOutTime;
- (void)setLastVideoFrameOutTime:(unsigned long long)arg1;
- (BOOL)isDownloadingFromCloudRoam;
- (void)setIsDownloadingFromCloudRoam:(BOOL)arg1;
- (void).cxx_destruct;
@end
