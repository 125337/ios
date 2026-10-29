@interface MMLiveMorphVideoPushTransitionPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _targetHasBottomView; // +0x8
    UIView * _videoView; // +0x10
    UIView * _micUserView; // +0x18
    UIView * _micUserBackContainerView; // +0x20
    UIView * _audioRoomView; // +0x28
    UIView * _backgroundBlurView; // +0x30
    CGSize _videoSize; // +0x38
}
- (id)initWithTransitionParameters:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (BOOL)targetHasBottomView;
- (void)setTargetHasBottomView:(BOOL)arg1;
- (id)micUserView;
- (void)setMicUserView:(id)arg1;
- (id)micUserBackContainerView;
- (void)setMicUserBackContainerView:(id)arg1;
- (id)audioRoomView;
- (void)setAudioRoomView:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (void).cxx_destruct;
@end
