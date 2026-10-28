@interface TXLivePixelBufferTransform : NSObject
{
    TXLivePixelBufferPool * _pool; // +0x8
    id <TXLivePixelBufferTransformFilter> _cropFilter; // +0x10
}
- (id)cropFilter;
- (BOOL)isSupportFormat:(unsigned int)arg1;
- (__CVBuffer *)cropPixelBuffer:(__CVBuffer *)arg1 expectedSize:(CGSize)arg2;
- (__CVBuffer *)doProcess:(__CVBuffer *)arg1;
- (unsigned int)findSuitableFormat:(unsigned int)arg1;
- (id)pool;
- (void)setPool:(id)arg1;
- (void)setCropFilter:(id)arg1;
- (void).cxx_destruct;
@end
