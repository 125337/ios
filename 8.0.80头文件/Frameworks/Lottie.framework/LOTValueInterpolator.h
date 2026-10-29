@interface LOTValueInterpolator : NSObject
{
    BOOL _hasDelegateOverride; // +0x8
    LOTKeyframe * _leadingKeyframe; // +0x10
    LOTKeyframe * _trailingKeyframe; // +0x18
    NSArray * _keyframes; // +0x20
}
- (id)initWithKeyframes:(id)arg1;
- (BOOL)hasUpdateForFrame:(id)arg1;
- (void)updateKeyframeSpanForFrame:(id)arg1;
- (double)progressForFrame:(id)arg1;
- (void)setValueDelegate:(id)arg1;
- (id)leadingKeyframe;
- (void)setLeadingKeyframe:(id)arg1;
- (id)trailingKeyframe;
- (void)setTrailingKeyframe:(id)arg1;
- (BOOL)hasDelegateOverride;
- (id)keyframes;
- (void)setKeyframes:(id)arg1;
- (void).cxx_destruct;
@end
