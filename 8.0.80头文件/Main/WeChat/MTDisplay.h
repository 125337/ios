@interface MTDisplay : NSObject
{
    BOOL _hasScript; // +0x8
    double _ascent; // +0x10
    double _descent; // +0x18
    double _width; // +0x20
    UIColor * _textColor; // +0x28
    UIColor * _localTextColor; // +0x30
    UIColor * _localBackgroundColor; // +0x38
    CGPoint _position; // +0x40
    _NSRange _range; // +0x50
}
- (void)draw:(CGContext *)arg1;
- (CGRect)displayBounds;
- (id)debugQuickLookObject;
- (double)ascent;
- (void)setAscent:(double)arg1;
- (double)descent;
- (void)setDescent:(double)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (CGPoint)position;
- (void)setPosition:(CGPoint)arg1;
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (BOOL)hasScript;
- (void)setHasScript:(BOOL)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)localTextColor;
- (void)setLocalTextColor:(id)arg1;
- (id)localBackgroundColor;
- (void)setLocalBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end
