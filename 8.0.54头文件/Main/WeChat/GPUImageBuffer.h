@interface GPUImageBuffer : GPUImageFilter
{
    NSMutableArray * bufferedFramebuffers; // +0xe8
    unsigned long long _bufferSize; // +0xf0
}
- (id)init;
- (void)dealloc;
- (void)newFrameReadyAtTime:(struct)arg1 atIndex:(long long)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setBufferSize:(unsigned long long)arg1;
- (unsigned long long)bufferSize;
- (void).cxx_destruct;
@end

