@interface FavoritePlayerControlView : WCPlayerControlView <SightIconViewDelegate, VideoProgressBarDelegate, UIGestureRecognizerDelegate, RawVideoDownloadMgrExt>
{
    BOOL _isRawVideo; // +0x8
    BOOL _isSyncSaveingData; // +0x9
    BOOL _bPreventHiddenTool; // +0xa
    unsigned int _rawDownloadPercent; // +0xc
    UIView * _toolPanView; // +0x10
    UIImageView * _topBkgView; // +0x18
    MMUIButton * _closeButton; // +0x20
    UIImageView * _bottomBkgView; // +0x28
    MMUIButton * _rawPlayStatusBtn; // +0x30
    MMUILabel * _errorTipsLabel; // +0x38
    MMUIButton * _leftTopCloseButton; // +0x40
    WCDownloadArgsWrap * _rawDownloadArgsWrap; // +0x48
    SightIconView * _iconView; // +0x50
    WCPlayerProgressBar * _progressBar; // +0x58
    id <FavoritePlayerControlViewDelegate> _delegate; // +0x60
    UIView * _iconViewMask; // +0x68
    UIView * _tapgGestureView; // +0x70
    UILabel * _rawPlayingTagLabel; // +0x78
    FavoritesRecordDataField * _dataField; // +0x80
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x88
    CGSize _iconSize; // +0x90
}
- (id)initWithFrame:(CGRect)arg1 dataField:(id)arg2;
- (BOOL)isRawVideo:(id)arg1;
- (void)initSubview;
- (id)iconView;
- (id)toolPanView;
- (id)iconViewMask;
- (id)topBkgView;
- (id)bottomBkgView;
- (id)closeButton;
- (id)leftTopCloseButton;
- (CGPoint)getLeftTopCloseButtonOrigin;
- (id)rawPlayingTagLabel;
- (void)initRawPlayStatusBtn;
- (void)updateRawStatusBtn;
- (id)getHDButtonTextBySize:(unsigned long long)arg1;
- (void)addShadowToView:(id)arg1;
- (id)tapgGestureView;
- (id)progressBar;
- (id)tapGestureRecognizer;
- (id)errorTipsLabel;
- (void)onClickRawStatusButton;
- (void)onCloseBtnClick;
- (void)onClickDetailButton;
- (void)onClickPlayAttachVideoBtn;
- (void)setBottomToolsLeftSpace:(double)arg1;
- (void)setIconSize:(CGSize)arg1;
- (void)setProgress:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (double)videoTotalTime;
- (void)setErrorTipsText:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)showUploadStopWithText:(id)arg1;
- (void)showRawPlayStatusBtn;
- (void)makeToolViewUserInteractionEnabled:(BOOL)arg1;
- (void)hiddenErrorTips;
- (void)showSwitchingToRawStatus;
- (void)showRawVideoPlaySuccess;
- (void)showToolPanel;
- (void)layoutControls;
- (void)layoutSubviews;
- (void)onSingleTapOnIconView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)getRawPlayStatusBtnLeft;
- (BOOL)isPreventProgressBarHidden;
- (void)onProgressBarHidden;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoSizeChange:(CGSize)arg1;
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
- (void)animateLayoutControls;
- (BOOL)isRawVideo;
- (void)setIsRawVideo:(BOOL)arg1;
- (CGSize)iconSize;
- (void)setToolPanView:(id)arg1;
- (void)setTopBkgView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setBottomBkgView:(id)arg1;
- (id)rawPlayStatusBtn;
- (void)setRawPlayStatusBtn:(id)arg1;
- (void)setErrorTipsLabel:(id)arg1;
- (void)setLeftTopCloseButton:(id)arg1;
- (BOOL)isSyncSaveingData;
- (void)setIsSyncSaveingData:(BOOL)arg1;
- (BOOL)bPreventHiddenTool;
- (void)setBPreventHiddenTool:(BOOL)arg1;
- (id)rawDownloadArgsWrap;
- (void)setRawDownloadArgsWrap:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconViewMask:(id)arg1;
- (void)setTapgGestureView:(id)arg1;
- (unsigned int)rawDownloadPercent;
- (void)setRawDownloadPercent:(unsigned int)arg1;
- (void)setRawPlayingTagLabel:(id)arg1;
- (id)dataField;
- (void)setDataField:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

