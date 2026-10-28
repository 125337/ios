@interface TAVKeyframeValueParam : NSObject
{
    id <TAVKeyframeValue> _fromValue; // +0x8
    id <TAVKeyframeValue> _toValue; // +0x10
    double _tween; // +0x18
    TAVVideoCompositionRenderInfo * _info; // +0x20
}
- (id)fromValue;
- (void)setFromValue:(id)arg1;
- (id)toValue;
- (void)setToValue:(id)arg1;
- (double)tween;
- (void)setTween:(double)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end
