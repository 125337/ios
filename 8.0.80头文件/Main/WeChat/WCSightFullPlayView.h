@interface WCSightFullPlayView : UIView <WCFacadeExt, SightViewDelegate, FullScreenGestureDelegate>
{
    BOOL m_bIsLongPressHandled; // +0x8
    BOOL m_isSightVisible; // +0x9
    BOOL m_bIsMute; // +0xa
    BOOL m_bIsAdAttachSight; // +0xb
    UIView * m_fullScreenContent; // +0x10
    SightView * _sightView; // +0x18
    BOOL m_bHasStartedDownLoadingVideo; // +0x20
    BOOL m_bCachedRealDownloadProgress; // +0x21
    unsigned long long m_videoRestPlayTime; // +0x28
    UIButton * m_playAttachVideoButton; // +0x30
    ColorGradientView * m_buttonGradientView; // +0x38
    WXFullScreenGestureRecognizer * m_gesture; // +0x40
    BOOL m_isImageReady; // +0x48
    BOOL m_isSightReady; // +0x49
    unsigned long long index; // +0x50
    UIActivityIndicatorView * mActivityIndicator; // +0x58
    WCMediaItem * m_mediaData; // +0x60
    id <WCSightFullPlayViewDelegate> m_delegate; // +0x68
}
- (void)setContentViewTop:(double)arg1;
- (void)register;
- (void)UnRegister;
- (void)systemResigned:(id)arg1;
- (void)systemActived:(id)arg1;
- (id)initWithMediaData:(id)arg1;
- (id)initWithMediaData:(id)arg1 isMute:(BOOL)arg2;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (void)displaySightwithMediaItem:(id)arg1;
- (void)setDataAndView:(id)arg1;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setPlayAttachVideoButtonFrame;
- (void)onOrientationChanged;
- (BOOL)shouldAutoDownloadSight;
- (void)downloadImage;
- (void)downloadSight;
- (id)getSightPath;
- (long long)getSightDownloadType;
- (id)getProcessCacheKey;
- (BOOL)isSightVideoExist;
- (void)reloadSight;
- (BOOL)shouldShowDetailBtn;
- (id)getImage;
- (void)reloadSightPreviewImage;
- (CGRect)playerRectWithScreenOrientation:(BOOL)arg1;
- (void)cacheFakeProgressValue;
- (void)playSight;
- (void)clearSight;
- (void)stopSight;
- (void)silentPlay;
- (void)fullPlay;
- (void)pausePlay;
- (void)resumePlay;
- (void)clearPlay;
- (void)onLongPressSightView:(id)arg1;
- (void)onClickSightView:(id)arg1;
- (void)onDoubleClickWCSight:(id)arg1;
- (void)rotateToOrientation:(BOOL)arg1;
- (id)getShowTime:(unsigned long long)arg1;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)showDetailButton;
- (void)showPlayAllVideoButton;
- (id)genVideoButtonWithTitle:(id)arg1;
- (void)layoutPlayAttachVideoButton;
- (void)showButtonGradientView;
- (void)onBeginDownload:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)makeFakeProgress;
- (void)showDownloadTooSlow;
- (void)sightViewProgressDidReachEnd:(id)arg1;
- (BOOL)sightView:(id)arg1 playbackDidReadEnd:(BOOL)arg2;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)mActivityIndicator;
- (id)m_mediaData;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isImageReady;
- (BOOL)m_isSightReady;
- (BOOL)m_isSightVisible;
- (void)setM_isSightVisible:(BOOL)arg1;
- (BOOL)m_bIsMute;
- (void)setM_bIsMute:(BOOL)arg1;
- (void).cxx_destruct;
@end
