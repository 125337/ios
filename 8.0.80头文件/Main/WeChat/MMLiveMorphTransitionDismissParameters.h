@interface MMLiveMorphTransitionDismissParameters : MMLiveMorphTransitionParameters
{
    MMLiveMorphDismissTargetExtraConfig * _extraConfig; // +0x40
    UIView * _customSnapView; // +0x48
    UIView * _backgroundBlurView; // +0x50
    id <MMLiveMorphDismissSource> _sourceContext; // +0x58
    CGRect _targetFrame; // +0x60
}
- (CGRect)targetFrame;
- (void)setTargetFrame:(CGRect)arg1;
- (id)extraConfig;
- (void)setExtraConfig:(id)arg1;
- (id)customSnapView;
- (void)setCustomSnapView:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)sourceContext;
- (void)setSourceContext:(id)arg1;
- (void).cxx_destruct;
@end
