@interface MMFullScreenItemView : UIView <FavSightViewDelegate, WCPlayerConfigDelegate>
{
    SightIconView * m_sightIconView; // +0x8
    MMUILabel * m_hintLabel; // +0x10
    BOOL m_isItemShowing; // +0x18
    UIImageView * m_imageView; // +0x20
    BOOL m_hasPlayVideo; // +0x28
    id <MMFullScreenItemViewDelegate> _delegate; // +0x30
    SimpleImgInfo * _imgInfo; // +0x38
    UIView<FavPlayerViewProtocol> * _playerView; // +0x40
    WCLivePhotoView * _livePhotoView; // +0x48
}
- (id)image;
- (void)setFrame:(CGRect)arg1;
- (void)resize;
- (void)setContentMode:(long long)arg1;
- (void)initContentView:(id)arg1;
- (void)tryPlaySight;
- (void)onWillAnimateShow;
- (void)setAnimateFrame:(CGRect)arg1;
- (void)onWilAnimateClose;
- (void)onShow;
- (void)didFullScreenAnimationCompleted;
- (void)onHide;
- (BOOL)isItemShowing;
- (void)releaseContentView;
- (void)showFavDataExpiredView;
- (void)FavDataExpiredViewResize;
- (void)HideDataExpiredView;
- (BOOL)isReady;
- (void)updateImage:(id)arg1;
- (void)onSingleTap;
- (BOOL)isNeedLazyDownload;
- (void)onScreenDragBegin;
- (void)onScreenDragCancel;
- (void)onScreenDragToRect:(CGRect)arg1;
- (BOOL)shouldPreventDragDownCloseGesture;
- (void)displayLivePhoto;
- (void)stopDisplayLivePhoto;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)arg1;
- (void)onToolViewAutoClose;
- (BOOL)onClickPlayButton;
- (void)onClickToolView;
- (void)onPlayerStartPlay;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (void)onPlayerClickCloseButton;
- (void)tryToDownLoadVideo;
- (void)onPlayerDisplayFrameChanged:(CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imgInfo;
- (void)setImgInfo:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)livePhotoView;
- (void)setLivePhotoView:(id)arg1;
- (void).cxx_destruct;
@end
