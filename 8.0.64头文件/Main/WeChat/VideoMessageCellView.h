@interface VideoMessageCellView : CommonMessageCellView <IVideoExt, MMDragDelegate, MsgImgFullScreenTransitionObject>
{
    YYAsyncImageView * m_thumbImageView; // +0xb0
    SightIconView * m_sightIconView; // +0xb8
    UIView * m_videoInfoBgView; // +0xc0
    CAGradientLayer * m_videoInfoMaskLayer; // +0xc8
    UILabel * m_videoTimeLabel; // +0xd0
    UILabel * m_videoSizeLabel; // +0xd8
    UILabel * m_pauseTipsLabel; // +0xe0
    int m_uiStatus; // +0xe8
    MMDragManager * dragManager; // +0xf0
    UIImageView * tmp_liftingImgView; // +0xf8
    UIDragInteraction * dragInteraction; // +0x100
    UIButton * _iconClickBgButton; // +0x108
    UIView * _downloadSuccTipsView; // +0x110
    MMUILabel * _downloadSuccTipsLabel; // +0x118
    MMUILabel * _progressLabel; // +0x120
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
- (id)iconClickBgButton;
- (id)downloadSuccTipsView;
- (void)initVideoInfoView;
- (id)operationMenuItems;
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
- (void)onClickToPlayWithSoundable:(BOOL)arg1;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)arg1;
- (void)setIconClickBgButton:(id)arg1;
- (void)setDownloadSuccTipsView:(id)arg1;
- (id)downloadSuccTipsLabel;
- (void)setDownloadSuccTipsLabel:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (void).cxx_destruct;
@end
