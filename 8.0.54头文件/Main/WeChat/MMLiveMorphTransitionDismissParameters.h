@interface MMLiveMorphTransitionDismissParameters : MMLiveMorphTransitionParameters
{
    UIView * _customSnapView; // +0x40
    id <MMLiveMorphDismissSource> _sourceContext; // +0x48
    CGRect _targetFrame; // +0x50
}
- (CGRect)targetFrame;
- (void)setTargetFrame:(CGRect)arg1;
- (id)customSnapView;
- (void)setCustomSnapView:(id)arg1;
- (id)sourceContext;
- (void)setSourceContext:(id)arg1;
- (void).cxx_destruct;
@end

