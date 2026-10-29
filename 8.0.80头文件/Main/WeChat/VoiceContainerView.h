@interface VoiceContainerView : UIView
{
    BOOL _bIsTouchesEnded; // +0x8
    id <VoiceContainerViewDelegate> _delegate; // +0x10
    BOOL _isLeft; // +0x18
    BOOL _isNeedLight; // +0x19
    UIView * _animatedMaskView; // +0x20
}
- (id)init;
- (id)animatedMaskView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)initMembers;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)isLeft;
- (void)setIsLeft:(BOOL)arg1;
- (BOOL)isNeedLight;
- (void)setIsNeedLight:(BOOL)arg1;
- (void)setAnimatedMaskView:(id)arg1;
- (void).cxx_destruct;
@end
