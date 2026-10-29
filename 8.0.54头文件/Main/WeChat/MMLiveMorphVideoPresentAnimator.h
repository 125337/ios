@interface MMLiveMorphVideoPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _targetHasBottomView; // +0x8
    BOOL _hasScaledAudioRoomView; // +0x9
    UIView * _videoView; // +0x10
    UIView * _micUserView; // +0x18
    UIView * _micUserBackContainerView; // +0x20
    UIView * _audioRoomView; // +0x28
    CGSize _videoSize; // +0x30
    CGRect _sourceFrame; // +0x40
}
- (id)initWithTransitionParameters:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (CGRect)estimatedTargetFrameForVideoSize:(CGSize)arg1 inContainerSize:(CGSize)arg2 withInsetReferenceView:(id)arg3 hasVideoBottomView:(BOOL)arg4;
- (CGRect)sourceFrame;
- (void)setSourceFrame:(CGRect)arg1;
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
- (BOOL)hasScaledAudioRoomView;
- (void)setHasScaledAudioRoomView:(BOOL)arg1;
- (void).cxx_destruct;
@end

