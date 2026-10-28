@interface MMGraphicsImageRenderer : NSObject
{
    BOOL _useBounds; // +0x8
    UIGraphicsImageRendererFormat * _format; // +0x10
    CGSize _size; // +0x18
    CGRect _bounds; // +0x28
}
- (id)initWithSize:(CGSize)arg1;
- (id)initWithSize:(CGSize)arg1 opaque:(BOOL)arg2 scale:(double)arg3;
- (id)initWithSize:(CGSize)arg1 format:(id)arg2;
- (id)initWithBounds:(CGRect)arg1 format:(id)arg2;
- (id)imageWithActions:(id /* block */)arg1;
- (id)PNGDataWithActions:(id /* block */)arg1;
- (id)JPEGDataWithCompressionQuality:(double)arg1 actions:(id /* block */)arg2;
- (id)genRenderer;
- (id)genFormat;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (CGRect)bounds;
- (void)setBounds:(CGRect)arg1;
- (BOOL)useBounds;
- (void)setUseBounds:(BOOL)arg1;
- (id)format;
- (void)setFormat:(id)arg1;
- (void).cxx_destruct;
@end
