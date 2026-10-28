@interface TXCWatermarkCoordinate : NSObject <TXCRenderCoordinate>
{
    float[8] _positionVertexBytes; // +0x8
    float[8] _texcoordVertexBytes; // +0x28
    CGRect _targetRect; // +0x48
    CGSize _imageSize; // +0x68
    CGSize _inputSize; // +0x78
}
- (id)initWithTargetRect:(CGRect)arg1 imageSize:(CGSize)arg2;
- (void)updateCoordinate:(CGSize)arg1;
- (float *)positionVertexBytes;
- (float *)texcoordVertexBytes;
- (unsigned long long)texcoordVertexCount;
- (float *)texcoordVertexAtIndex:(unsigned long long)arg1;
@end
