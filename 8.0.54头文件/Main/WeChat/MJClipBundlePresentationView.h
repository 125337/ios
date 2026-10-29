@interface MJClipBundlePresentationView : UIView
{
    BOOL _isPreviousTansAnimationDone; // +0x8
    MJPublisherMovieCompositionTask * _compositeTask; // +0x10
    long long _imageIndex; // +0x18
    UIImageView * _backgroundImageView; // +0x20
    UIImageView * _transitionImageViewOne; // +0x28
    UIImageView * _transitionImageViewTwo; // +0x30
}
- (id)initWithCompositeTask:(id)arg1;
- (void)commonInit;
- (void)setupVideoFrameCallback;
- (void)updatePreviewImageAnimated:(id)arg1;
- (void)setupNotifications;
- (void)handleBackingExportTaskHasFinishedNoti:(id)arg1;
- (id)compositeTask;
- (long long)imageIndex;
- (void)setImageIndex:(long long)arg1;
- (BOOL)isPreviousTansAnimationDone;
- (void)setIsPreviousTansAnimationDone:(BOOL)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)transitionImageViewOne;
- (void)setTransitionImageViewOne:(id)arg1;
- (id)transitionImageViewTwo;
- (void)setTransitionImageViewTwo:(id)arg1;
- (void).cxx_destruct;
@end

