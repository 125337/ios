@interface MTCTLineDisplay : MTDisplay
{
    __CTLine * _line; // +0x60
    NSAttributedString * _attributedString; // +0x68
    NSArray * _atoms; // +0x70
}
- (id)initWithString:(id)arg1 position:(CGPoint)arg2 range:(_NSRange)arg3 font:(id)arg4 atoms:(id)arg5;
- (void)setAttributedString:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)computeDimensions:(id)arg1;
- (void)dealloc;
- (void)draw:(CGContext *)arg1;
- (__CTLine *)line;
- (id)attributedString;
- (id)atoms;
- (void).cxx_destruct;
@end
