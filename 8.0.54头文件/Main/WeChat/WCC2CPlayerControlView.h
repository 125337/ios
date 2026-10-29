@interface WCC2CPlayerControlView : WCPlayerControlView <SightIconViewDelegate, WCC2CPlayerProgressBarDelegate, UIGestureRecognizerDelegate, RawVideoDownloadMgrExt>
{
    BOOL _bVideoBlocked; // +0x8
    BOOL _bPreventHiddenTool; // +0x9
    BOOL _isSyncSaveingData; // +0xa
    BOOL _hideCloseButton; // +0xb
    BOOL _didClickSaveButton; // +0xc
    unsigned int _rawDownloadPercent; // +0x10
    id <WCC2CPlayerControlViewDelegate> _delegate; // +0x18
    UIView * _toolPanView; // +0x20
    UIImageView * _topBkgView; // +0x28
    MMUIButton * _closeButton; // +0x30
    UIImageView * _bottomBkgView; // +0x38
    MMUILabel * _errorTipsLabel; // +0x40
    MMUIButton * _leftTopCloseButton; // +0x48
    WCC2CShadowLabel * _rawExpireLabel; // +0x50
    MMUIButton * _saveBtn; // +0x58
    SightIconView * _iconView; // +0x60
    WCC2CPlayerProgressBar * _progressBar; // +0x68
    UIButton * _playAttachVideoButton; // +0x70
    CMessageWrap * _msgWrap; // +0x78
    WCC2CVideoPlayerReporter * _reporter; // +0x80
    double _buttonRightPadding; // +0x88
    UIView * _tapgGestureView; // +0x90
    UIView * _iconViewMask; // +0x98
    UITapGestureRecognizer * _tapGestureRecognizer; // +0xa0
    MMUIButton * _rawPlayStatusBtn; // +0xa8
    MMUIButton * _sessionSourceBtn; // +0xb0
    ImageBrowseButton * _previewRawVideoBtn; // +0xb8
    UILabel * _rawPlayingTagLabel; // +0xc0
    UIPanGestureRecognizer * _panGestureRecognizer; // +0xc8
    UITapGestureRecognizer * _controlTapGesture; // +0xd0
    NSString * _rawVideoAssetID; // +0xd8
    AVAsset * _rawVideoAsset; // +0xe0
    NSURL * _rawVideoAssetUrl; // +0xe8
    id /* block */ _customBottomLeftAction; // +0xf0
    id /* block */ _customBottomLeftString; // +0xf8
    CGSize _iconSize; // +0x100
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
- (id)leftTopCloseButton;
- (CGPoint)getLeftTopCloseButtonOrigin;
- (id)rawPlayingTagLabel;
- (BOOL)canShowSaveButton;
- (id)saveBtn;
- (BOOL)canShowPreviewRawVideoButton;
- (id)previewRawVideoBtn;
- (BOOL)canShowRawExpireLabel;
- (id)rawExpireLabel;
- (void)initRawPlayStatusBtn;
- (void)updateRawStatusBtn;
- (id)getHDButtonTextBySize:(unsigned long long)arg1;
- (void)initSessionResourceButton;
- (void)onSessionSourceBtnClick;
- (void)addShadowToView:(id)arg1;
- (id)tapgGestureView;
- (id)progressBar;
- (id)tapGestureRecognizer;
- (id)errorTipsLabel;
- (void)onClickSaveVideoButton;
- (void)onClickRawStatusButton;
- (BOOL)showExpireSheetView;
- (void)_onClickRawStatusButton;
- (void)onCloseBtnClick;
- (void)onClickDetailButton;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickPreviewRawVideoButton;
- (void)showVideoController;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)setBottomToolsLeftSpace:(double)arg1;
- (void)setIconSize:(CGSize)arg1;
- (void)setProgress:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (double)videoTotalTime;
- (void)setErrorTipsText:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)showUploadStopWithText:(id)arg1;
- (void)showRawPlayStatusBtn;
- (void)showWaitUploading;
- (void)hiddenWaitUploading;
- (void)makeToolViewUserInteractionEnabled:(BOOL)arg1;
- (void)hiddenErrorTips;
- (void)showSwitchingToRawStatus;
- (void)showRawVideoPlaySuccess;
- (void)showToolPanel;
- (void)hideToolPanel;
- (void)setHideCloseButton:(BOOL)arg1;
- (void)updateButtonRightPadding:(double)arg1;
- (void)layoutControls;
- (void)layoutSubviews;
- (void)onSingleTapOnIconView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)getRawPlayStatusBtnLeft;
- (BOOL)isVideoPlaying;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)isPreventProgressBarHidden;
- (void)onProgressBarHidden;
- (void)onProgressBarChangePlayRate:(float)arg1 currentPlayRate:(float)arg2;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
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
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)updateDownloadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onReceiveAllVideoData;
- (void)updateRawProgressWithPercent:(unsigned int)arg1;
- (void)animateHideRawProgressButton:(float)arg1;
- (void)animateShowRawTagLabel;
- (void)animateShowSaveButton;
- (void)animateLayoutControls;
- (CGRect)adjustShowAreaForDisplayFrame:(CGRect)arg1;
- (void)onRawVideoDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRawVideoDownloadSuccess:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
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
- (void)setToolPanView:(id)arg1;
- (void)setTopBkgView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setBottomBkgView:(id)arg1;
- (void)setErrorTipsLabel:(id)arg1;
- (void)setLeftTopCloseButton:(id)arg1;
- (void)setRawExpireLabel:(id)arg1;
- (void)setSaveBtn:(id)arg1;
- (BOOL)didClickSaveButton;
- (void)setDidClickSaveButton:(BOOL)arg1;
- (void)setIconView:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (id)playAttachVideoButton;
- (void)setPlayAttachVideoButton:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (double)buttonRightPadding;
- (void)setButtonRightPadding:(double)arg1;
- (void)setTapgGestureView:(id)arg1;
- (void)setIconViewMask:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)rawPlayStatusBtn;
- (void)setRawPlayStatusBtn:(id)arg1;
- (id)sessionSourceBtn;
- (void)setSessionSourceBtn:(id)arg1;
- (void)setPreviewRawVideoBtn:(id)arg1;
- (void)setRawPlayingTagLabel:(id)arg1;
- (unsigned int)rawDownloadPercent;
- (void)setRawDownloadPercent:(unsigned int)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (id)controlTapGesture;
- (void)setControlTapGesture:(id)arg1;
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
- (void).cxx_destruct;
@end

