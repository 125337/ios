@interface MMImgFullScreenVideoView : UIView <WCC2CVideoThumbImageViewDelegate, FullScreenGestureDelegate, WCPlayerViewUIDelegate, MMImgFullScreenVideoView_ControlDelegate>
{
    BOOL _bInMuteMode; // +0x8
    BOOL _isRawVideoMode; // +0x9
    BOOL _bRequestingVideoStateCgi; // +0xa
    BOOL _bHasRequestedVideoState; // +0xb
    BOOL _bRequaringVideoState; // +0xc
    BOOL _bVideoIsBlocked; // +0xd
    BOOL _bFirstPlay; // +0xe
    BOOL _bPlayToEnd; // +0xf
    unsigned int _brandEnterIdForReport; // +0x10
    double _initialPlayTime; // +0x18
    MMImgDataItem * _item; // +0x20
    MMImgFullScreenViewController<MMImgFullScreenVideoViewDelegate> * _viewController; // +0x28
    WCPlayerView * _playerView; // +0x30
    MMImgFullScreenVideoView_Control * _controlView; // +0x38
    WCC2CVideoThumbImageView * _thumbImageView; // +0x40
    WCPlayerPlayArgs * _playerInfo; // +0x48
    WCPlayerPlayArgs * _rawPlayerInfo; // +0x50
    WCPlayerView * _rawPlayerView; // +0x58
    WXFullScreenGestureRecognizer * _fullScreenGestureRecognizer; // +0x60
    MMUIButton * _brandContentView; // +0x68
    CAGradientLayer * _brandMaskLayer; // +0x70
    MMUILabel * _brandTitleView; // +0x78
    MMBrandHeadImageView * _brandHeadView; // +0x80
    MMUIButton * _brandNickNameView; // +0x88
    MMUIButton * _brandOpenMpPageBtn; // +0x90
    MPLandingPageCgiHandler * _brandCgiHandler; // +0x98
    unsigned long long _rawBtnClickTime; // +0xa0
    unsigned long long _rawPlayStartTime; // +0xa8
    MMImgFullScreenVideoReporter * _reporter; // +0xb0
    UIEdgeInsets _pageContentInset; // +0xb8
}
- (BOOL)isVideoPlaying;
- (BOOL)isVideoReadyToPlay;
- (void)advancePreloadMpDataIfNeed;
- (void)initBrandViews;
- (void)initBrandContentView;
- (void)initBrandTitleView;
- (void)initBrandHeadView;
- (void)initBrandNickNameView;
- (void)initBrandOpenMpPageBtn;
- (void)addShadowToView:(id)arg1;
- (void)layoutBrandViews;
- (void)onOpenProfile;
- (id)contactByUsrName:(id)arg1;
- (void)onOpenMpPage;
- (void)startPlayForBrand;
- (void)destoryWhenVideoIsBlocked:(id)arg1;
- (void)requestVideoStateByVid:(id /* block */)arg1;
- (id)initWithFrame:(CGRect)arg1 item:(id)arg2 viewController:(id)arg3;
- (void)initView;
- (void)initFullScreenGestureOnView:(id)arg1;
- (void)layoutSubviews;
- (void)setPageContentInset:(UIEdgeInsets)arg1;
- (CGRect)contentFrame;
- (void)setControlViewAlpha:(double)arg1;
- (void)setToolViewAlpha:(double)arg1;
- (BOOL)isToolViewHidden;
- (void)setCustomBottomLeftTitle:(id)arg1 customBottomLeftAction:(id /* block */)arg2;
- (void)updateUI;
- (void)updateDownloadingStatus:(float)arg1 bHD:(BOOL)arg2;
- (void)startPlay;
- (void)pause;
- (void)stopPlay;
- (void)stopPlay:(BOOL)arg1;
- (id)getAnimateView;
- (id)generatePlayerView:(id)arg1;
- (void)replaceRawVideoToCompressVideo;
- (void)exitPage:(int)arg1;
- (unsigned int)status;
- (id)controlView;
- (id)thumbImageView;
- (void)onVideoPlay;
- (void)replaceRawPlayerViewToPlayerView;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onClickPlayButton;
- (BOOL)canShowLocateButton;
- (BOOL)canShowImgFastBrowseButton;
- (void)onClickAttachButton;
- (void)onClickCloseButton;
- (void)onClickRawPlayButton;
- (void)onClickRawPlayStatusButton;
- (void)onClickShareButton:(id)arg1;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickLocateButton:(id)arg1;
- (void)onClickImgFastBrowseButton:(id)arg1;
- (void)onClickMoreButton:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenClose;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)playerViewDidZoom:(id)arg1;
- (void)playerViewDidEndZoom:(id)arg1;
- (void)playerView:(id)arg1 doubleTap:(id)arg2;
- (void)thumbImageViewWillBeginZoom:(id)arg1;
- (void)thumbImageViewDidZoom:(id)arg1;
- (void)thumbImageViewDidEndZoom:(id)arg1;
- (void)thumbImageView:(id)arg1 doubleTap:(id)arg2;
- (CGRect)adjustShowAreaForDisplayFrame:(CGRect)arg1;
- (BOOL)bInMuteMode;
- (void)setBInMuteMode:(BOOL)arg1;
- (double)initialPlayTime;
- (void)setInitialPlayTime:(double)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (UIEdgeInsets)pageContentInset;
- (void)setControlView:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (id)rawPlayerInfo;
- (void)setRawPlayerInfo:(id)arg1;
- (id)rawPlayerView;
- (void)setRawPlayerView:(id)arg1;
- (BOOL)isRawVideoMode;
- (void)setIsRawVideoMode:(BOOL)arg1;
- (id)fullScreenGestureRecognizer;
- (void)setFullScreenGestureRecognizer:(id)arg1;
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
- (BOOL)bHasRequestedVideoState;
- (void)setBHasRequestedVideoState:(BOOL)arg1;
- (BOOL)bRequaringVideoState;
- (void)setBRequaringVideoState:(BOOL)arg1;
- (BOOL)bVideoIsBlocked;
- (void)setBVideoIsBlocked:(BOOL)arg1;
- (unsigned long long)rawBtnClickTime;
- (void)setRawBtnClickTime:(unsigned long long)arg1;
- (unsigned long long)rawPlayStartTime;
- (void)setRawPlayStartTime:(unsigned long long)arg1;
- (BOOL)bFirstPlay;
- (void)setBFirstPlay:(BOOL)arg1;
- (BOOL)bPlayToEnd;
- (void)setBPlayToEnd:(BOOL)arg1;
- (unsigned int)brandEnterIdForReport;
- (void)setBrandEnterIdForReport:(unsigned int)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
