@interface MMImgFullScreenVideoView_Control : WCPlayerControlView <WCC2CPlayerProgressBarDelegate, WCPlayerEventExt>
{
    BOOL _bCheckVideoData; // +0x8
    float _downloadPercent; // +0xc
    MMImgFullScreenVideoView<MMImgFullScreenVideoView_ControlDelegate> * _videoView; // +0x10
    UIView * _toolView; // +0x18
    UIView * _topBkgView; // +0x20
    CAGradientLayer * _topGradientLayer; // +0x28
    UIView * _bottomBkgView; // +0x30
    CAGradientLayer * _bottomGradientLayer; // +0x38
    SightIconView * _iconView; // +0x40
    MMUILabel * _errorTipsLabel; // +0x48
    UIButton * _attachButton; // +0x50
    WCC2CPlayerProgressBar * _progressBar; // +0x58
    ImageBrowseButton * _closeBtn; // +0x60
    ImageBrowseButton * _rawPlayBtn; // +0x68
    ImageBrowseButton * _rawPlayStatusBtn; // +0x70
    ImageBrowseButton * _customLeftBtn; // +0x78
    ImageBrowseButton * _shareBtn; // +0x80
    ImageBrowseButton * _downloadBtn; // +0x88
    SightIconView * _saveLoadingIconView; // +0x90
    ImageBrowseButton * _locateBtn; // +0x98
    ImageBrowseButton * _imgFastBrowseBtn; // +0xa0
    ImageBrowseButton * _moreBtn; // +0xa8
    MMTimer * _videoPlayingChecker; // +0xb0
    unsigned long long _lastVideoFrameOutTime; // +0xb8
    NSString * _customBottomLeftTitle; // +0xc0
    id /* block */ _customBottomLeftActioin; // +0xc8
    MMImgDataItem * _item; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1 item:(id)arg2 videoView:(id)arg3;
- (void)initViews;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setToolViewAlpha:(double)arg1;
- (void)setCustomBottomLeftTitle:(id)arg1 customBottomLeftAction:(id /* block */)arg2;
- (void)updateUI;
- (void)updateDownloadingStatus:(float)arg1 bHD:(BOOL)arg2;
- (void)updateHDDownloadingStatus:(float)arg1;
- (void)setErrorTipsText:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)hiddenErrorTips;
- (id)getLeftButtons;
- (id)getRightButtons;
- (double)calButtonsWidth:(id)arg1;
- (BOOL)canShowAttachButton;
- (BOOL)canShowCloseButton;
- (BOOL)canShowRawPlayButton;
- (BOOL)canShowRawPlayStatusButton;
- (BOOL)canShowCustomLeftButton;
- (BOOL)canShowShareButton;
- (BOOL)canShowDownloadButton;
- (BOOL)canShowLocateButton;
- (BOOL)canShowImgFastBrowseButton;
- (BOOL)canShowMoreButton;
- (id)topBkgView;
- (id)bottomBkgView;
- (id)attachButton;
- (id)progressBar;
- (id)toolView;
- (id)closeBtn;
- (id)rawPlayBtn;
- (id)getHDButtonTextBySize:(unsigned long long)arg1;
- (id)rawPlayStatusBtn;
- (id)customLeftBtn;
- (void)updateCustomLeftTitle;
- (id)shareBtn;
- (id)downloadBtn;
- (id)saveLoadingIconView;
- (id)locateBtn;
- (BOOL)isChangeIconClicfgOn;
- (id)imgFastBrowseBtn;
- (id)moreBtn;
- (id)errorTipsLabel;
- (id)iconView;
- (void)onAttachBtnClick;
- (void)onCloseBtnClick;
- (void)onRawPlayBtnClick;
- (void)onRawPlayStatusBtnClick;
- (void)onCustomLeftBtnClick;
- (void)onShareBtnClick:(id)arg1;
- (void)onDownloadBtnClick:(id)arg1;
- (void)onLocateBtnClick:(id)arg1;
- (void)onImgFastBrowseBtnClick:(id)arg1;
- (void)onMoreBtnClick:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onCheckVideoPlaying;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPlay;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)onReceiveAllVideoData:(id)arg1;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (CGRect)adjustShowAreaForDisplayFrame:(CGRect)arg1;
- (void)onPlayButtonClicked;
- (void)onProgressBarHidden;
- (void)onProgressBarChangePlayRate:(float)arg1 currentPlayRate:(float)arg2;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
- (void)dr_playButton:(id)arg1;
- (void)dr_playRateButton:(id)arg1;
- (void)tryStartVideoPlayingChecker;
- (void)stopVideoPlayingChecker;
- (BOOL)isHDRVideo;
- (void)onPlayerStartPlay:(id)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (void)setToolView:(id)arg1;
- (BOOL)bCheckVideoData;
- (void)setBCheckVideoData:(BOOL)arg1;
- (void)setTopBkgView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (void)setBottomBkgView:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setErrorTipsLabel:(id)arg1;
- (void)setAttachButton:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void)setRawPlayBtn:(id)arg1;
- (void)setRawPlayStatusBtn:(id)arg1;
- (void)setCustomLeftBtn:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setDownloadBtn:(id)arg1;
- (void)setSaveLoadingIconView:(id)arg1;
- (void)setLocateBtn:(id)arg1;
- (void)setImgFastBrowseBtn:(id)arg1;
- (void)setMoreBtn:(id)arg1;
- (id)videoPlayingChecker;
- (void)setVideoPlayingChecker:(id)arg1;
- (unsigned long long)lastVideoFrameOutTime;
- (void)setLastVideoFrameOutTime:(unsigned long long)arg1;
- (id)customBottomLeftTitle;
- (void)setCustomBottomLeftTitle:(id)arg1;
- (id /* block */)customBottomLeftActioin;
- (void)setCustomBottomLeftActioin:(id /* block */)arg1;
- (float)downloadPercent;
- (void)setDownloadPercent:(float)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
