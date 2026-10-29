@interface TXCBaseYUVDrawer : TXCGLDrawer
{
    const float * _colorConversionMartixPtr; // +0x8
    const float * _colorConversionOffsetPtr; // +0x10
    unsigned int _colorConversionOffsetUniform; // +0x18
    unsigned int _colorConversionMatrixUniform; // +0x1c
}
- (void)getColorConversionMatrix:(const float * *)arg1 andColorConversionOffset:(const float * *)arg2 fromPixelBuffer:(__CVBuffer *)arg3;
- (void)setupColorConversionWithPixelBuffer:(__CVBuffer *)arg1;
- (void)uploadColorConversionToGPU;
- (unsigned int)colorConversionOffsetUniform;
- (void)setColorConversionOffsetUniform:(unsigned int)arg1;
- (unsigned int)colorConversionMatrixUniform;
- (void)setColorConversionMatrixUniform:(unsigned int)arg1;
@end

