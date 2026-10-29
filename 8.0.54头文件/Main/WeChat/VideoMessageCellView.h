@interface VideoMessageCellView : CommonMessageCellView <IVideoExt, MMDragDelegate, MsgImgFullScreenTransitionObject>
{
    YYAsyncImageView * m_thumbImageView; // +0xa8
    SightIconView * m_sightIconView; // +0xb0
    UIView * m_videoInfoBgView; // +0xb8
    CAGradientLayer * m_videoInfoMaskLayer; // +0xc0
    UILabel * m_videoTimeLabel; // +0xc8
    UILabel * m_videoSizeLabel; // +0xd0
    UILabel * m_pauseTipsLabel; // +0xd8
    int m_uiStatus; // +0xe0
    MMDragManager * dragManager; // +0xe8
    UIImageView * tmp_liftingImgView; // +0xf0
    UIDragInteraction * dragInteraction; // +0xf8
    UIButton * _iconClickBgButton; // +0x100
    SightIconView * _rawProgressIcon; // +0x108
    UIImageView * _rawSuccTipsView; // +0x110
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)updateStatus;
- (void)updateUploadStatus;
- (void)updateDownloadStatus;
- (id)displayViewForImageBrowser;
- (CGRect)showRectForMenuController;
- (void)showVideo;
- (void)addMagicTapActions:(id)arg1;
- (BOOL)handleMagicTapAction:(id)arg1;
- (void)initThumbImageView;
- (void)initSightIconView;
- (void)initRawProgressIcon;
- (id)iconClickBgButton;
- (void)initVideoInfoView;
- (id)operationMenuItems;
- (void)onForward:(id)arg1;
- (void)onSliencePlay:(id)arg1;
- (void)doForward;
- (void)onVideoForwardToFinder:(id)arg1;
- (void)onTouchUpInside;
- (void)onClickSightIcon:(id)arg1;
- (void)tryRestartSendingTask;
- (void)restartSendingTask;
- (void)asyncCheckAsset;
- (void)onAssetCheckFinish:(BOOL)arg1;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)liftingImageNeedRemove;
- (void)onAppear;
- (void)onCancelButtonClicked:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartDownloadVideo:(id)arg1;
- (void)onClick:(BOOL)arg1 soundable:(BOOL)arg2;
- (void)onSendFailButtonClicked:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)arg1;
- (void)setIconClickBgButton:(id)arg1;
- (id)rawProgressIcon;
- (void)setRawProgressIcon:(id)arg1;
- (id)rawSuccTipsView;
- (void)setRawSuccTipsView:(id)arg1;
- (void).cxx_destruct;
@end

