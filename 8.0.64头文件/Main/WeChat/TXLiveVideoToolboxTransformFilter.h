@interface TXLiveVideoToolboxTransformFilter : NSObject <TXLivePixelBufferTransformFilter>
{
    void * _session; // +0x8
}
- (id)init;
- (void)dealloc;
- (void *)session;
- (BOOL)process:(__CVBuffer *)arg1 dstBuffer:(__CVBuffer *)arg2;
- (void)setSession:(void *)arg1;
@end
