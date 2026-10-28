@interface WCImageView : MMUIControl <WCFacadeExt, WCActionSheetDelegate, WCForceTouchPreviewProtocol, MMDragDelegate, WCMomentsFullScreenTransitionProtocol>
{
    BOOL _imageReady; // +0x8
    BOOL _canShowInvisibleTipsInFullScreen; // +0x9
    BOOL _isLongPressHandled; // +0xa
    id <WCImageViewDelegate> _delegate; // +0x10
    UIImageView * _imageView; // +0x18
    UIImage * _image; // +0x20
    WCImageViewModel * _vm; // +0x28
    double _statusLength; // +0x30
    double _statusMarginX; // +0x38
    double _statusMarginBottom; // +0x40
    long long _statusDirection; // +0x48
    UIImageView * _lockStausView; // +0x50
    UIImageView * _sharedStausView; // +0x58
    UIImageView * _livePhotoStatusView; // +0x60
    UIImageView * _starredStatusView; // +0x68
    UIImageView * _failedStatusView; // +0x70
    UIImageView * _shadowImageView; // +0x78
    UILabel * _nickLabel; // +0x80
    UIView * _highLightView; // +0x88
    MMUIControl * _blurView; // +0x90
    MMDragManager * _dragManager; // +0x98
    UIImageView * _tmpLiftingImgView; // +0xa0
    UIDragInteraction * _dragInteraction; // +0xa8
    UITapGestureRecognizer * _debugTapGesture; // +0xb0
    unsigned long long _imageViewScene; // +0xb8
}
- (id)initWithViewModel:(id)arg1;
- (void)removeFromSuperview;
- (void)setupImageView;
- (void)setupShadowImageView;
- (void)updateShadowImageViewHiddenState;
- (void)setupDragLogic;
- (void)setupLongPressHandler;
- (void)setupDebugHandlerIfNeeded;
- (void)updateViewModel:(id)arg1;
- (void)manuallySetImageViewScene:(unsigned long long)arg1;
- (void)configReportEcsImageViewOrReset;
- (void)subscribeDownloadProcess;
- (void)unsubscribeAll;
- (id)getImage;
- (void)reloadImage;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)liftingImageNeedRemove;
- (void)dealloc;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutStatusView;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)updateImageCotentMode;
- (void)onClickWCImage:(id)arg1;
- (void)triggerClickAction;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)animationShow:(BOOL)arg1 fromViewController:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)LongPressEvents;
- (double)statusLength;
- (void)showLockStatus:(BOOL)arg1;
- (void)showSharedStatus:(BOOL)arg1;
- (void)showStarredStatus:(BOOL)arg1;
- (void)updateLivePhotoStatus:(BOOL)arg1;
- (void)showFailedStatus:(BOOL)arg1;
- (void)showOwnerNickname:(BOOL)arg1 username:(id)arg2;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)resetBlurView;
- (void)appendBlurViewIfNeed;
- (id)highLightView;
- (void)showViewWhenCloseFullScreenAnimationEnd;
- (void)hideViewWhenShowFullScreenAnimationEnd;
- (id)delegate;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (BOOL)imageReady;
- (void)setImageReady:(BOOL)arg1;
- (BOOL)canShowInvisibleTipsInFullScreen;
- (void)setCanShowInvisibleTipsInFullScreen:(BOOL)arg1;
- (void)setStatusLength:(double)arg1;
- (double)statusMarginX;
- (void)setStatusMarginX:(double)arg1;
- (double)statusMarginBottom;
- (void)setStatusMarginBottom:(double)arg1;
- (long long)statusDirection;
- (void)setStatusDirection:(long long)arg1;
- (id)lockStausView;
- (void)setLockStausView:(id)arg1;
- (id)sharedStausView;
- (void)setSharedStausView:(id)arg1;
- (id)livePhotoStatusView;
- (void)setLivePhotoStatusView:(id)arg1;
- (id)starredStatusView;
- (void)setStarredStatusView:(id)arg1;
- (id)failedStatusView;
- (void)setFailedStatusView:(id)arg1;
- (id)shadowImageView;
- (void)setShadowImageView:(id)arg1;
- (id)nickLabel;
- (void)setNickLabel:(id)arg1;
- (void)setHighLightView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)dragManager;
- (void)setDragManager:(id)arg1;
- (id)tmpLiftingImgView;
- (void)setTmpLiftingImgView:(id)arg1;
- (id)dragInteraction;
- (void)setDragInteraction:(id)arg1;
- (id)debugTapGesture;
- (void)setDebugTapGesture:(id)arg1;
- (BOOL)isLongPressHandled;
- (void)setIsLongPressHandled:(BOOL)arg1;
- (unsigned long long)imageViewScene;
- (void)setImageViewScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
