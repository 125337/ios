@interface CBTShadowSlice : NSObject
{
    CBTShadowSpan * _span; // +0x8
    _NSRange _shadowSubRange; // +0x10
    _NSRange _localSubRange; // +0x20
}
- (id)span;
- (void)setSpan:(id)arg1;
- (_NSRange)shadowSubRange;
- (void)setShadowSubRange:(_NSRange)arg1;
- (_NSRange)localSubRange;
- (void)setLocalSubRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end
