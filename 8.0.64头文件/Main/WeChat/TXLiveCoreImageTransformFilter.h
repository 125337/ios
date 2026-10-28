@interface TXLiveCoreImageTransformFilter : NSObject <TXLivePixelBufferTransformFilter>
{
    CIContext * _context; // +0x8
}
- (id)context;
- (BOOL)process:(__CVBuffer *)arg1 dstBuffer:(__CVBuffer *)arg2;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
