@interface MMLiveMorphTransitionVideoPresentParameters : MMLiveMorphTransitionParameters
{
    BOOL _targetHasBottomView; // +0x40
    BOOL _hasScaledAudioRoomView; // +0x41
    UIView * _micUserView; // +0x48
    UIView * _micUserBackContainerView; // +0x50
    UIView * _audioRoomView; // +0x58
    UIView * _backgroundBlurView; // +0x60
    unsigned long long _transitionStyle; // +0x68
}
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
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (unsigned long long)transitionStyle;
- (void)setTransitionStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
