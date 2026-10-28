@interface GPUImageCropFilter : GPUImageFilter
{
    float[8] cropTextureCoordinates; // +0xe8
    CGSize originallySuppliedInputSize; // +0x108
    CGSize _outFrameSize; // +0x118
    CGRect _cropRegion; // +0x128
}
- (id)initWithCropRegion:(CGRect)arg1;
- (id)init;
- (void)setInputSize:(CGSize)arg1 atIndex:(long long)arg2;
- (void)calculateCropTextureCoordinates;
- (void)newFrameReadyAtTime:(struct)arg1 atIndex:(long long)arg2;
- (void)setCropRegion:(CGRect)arg1;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (CGSize)sizeOfFBO;
- (CGSize)outputFrameSize;
- (CGRect)cropRegion;
- (CGSize)outFrameSize;
- (void)setOutFrameSize:(CGSize)arg1;
@end
