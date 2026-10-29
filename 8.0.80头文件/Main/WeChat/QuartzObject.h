@interface QuartzObject : NSObject
{
    NSArray * _data; // +0x8
    NSString * _action; // +0x10
    id <IMMQuartz2DContextDelegate> _contextDelegate; // +0x18
}
+ (void)reset;
+ (id)getFontWithSize:(unsigned int)arg1 family:(id)arg2 weight:(id)arg3 style:(id)arg4;
- (id)initWithAction:(id)arg1 data:(id)arg2;
- (void)Execute:(CGContext *)arg1;
- (void)setShadow:(CGContext *)arg1;
- (void)clearRect:(CGContext *)arg1;
- (void)scale:(CGContext *)arg1;
- (void)rotate:(CGContext *)arg1;
- (void)translate:(CGContext *)arg1;
- (void)transform:(CGContext *)arg1;
- (void)setTransform:(CGContext *)arg1;
- (void)setFontSize:(CGContext *)arg1;
- (void)setFontStyle:(CGContext *)arg1;
- (void)setFontWeight:(CGContext *)arg1;
- (void)setFontFamily:(CGContext *)arg1;
- (id)getFontWithContext;
- (void)setTextAlign:(CGContext *)arg1;
- (void)setTextBaseline:(CGContext *)arg1;
- (void)fillText:(CGContext *)arg1;
- (void)strokeText:(CGContext *)arg1;
- (void)drawText:(CGContext *)arg1 isStroke:(BOOL)arg2;
- (void)drawImage:(CGContext *)arg1;
- (void)drawImageData:(CGContext *)arg1;
- (void)setGlobalAlpha:(CGContext *)arg1;
- (void)save:(CGContext *)arg1;
- (void)restore:(CGContext *)arg1;
- (void)setFillStyle:(CGContext *)arg1;
- (void)setStrokeStyle:(CGContext *)arg1;
- (void)setPatternStyle:(CGContext *)arg1 data:(id)arg2 isFill:(BOOL)arg3;
- (CGPattern *)newPatternWithData:(id)arg1;
- (void)setLineCap:(CGContext *)arg1;
- (void)setLineJoin:(CGContext *)arg1;
- (void)setLineWidth:(CGContext *)arg1;
- (void)setMiterLimit:(CGContext *)arg1;
- (void)setLineDash:(CGContext *)arg1;
- (void)setGlobalCompositeOperation:(CGContext *)arg1;
- (void)addTransform:(CGAffineTransform)arg1;
- (CGAffineTransform)getTransform;
- (id)contextDelegate;
- (void)setContextDelegate:(id)arg1;
- (void).cxx_destruct;
@end
