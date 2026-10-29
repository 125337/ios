@interface WCAdAlphaVideoProcessor : NSObject
{
    int _videoCompositeType; // +0x8
    __CVBuffer * _inputPixelBuffer; // +0x10
    __CVBuffer * _resultPixelBuffer; // +0x18
    CIContext * _context; // +0x20
    CIFilter * _alphaVideoFilter; // +0x28
}
- (void)dealloc;
- (id)initWithVideoCompositeType:(int)arg1;
- (void)setInputPixelBuffer:(__CVBuffer *)arg1;
- (void)setResultPixelBuffer:(__CVBuffer *)arg1;
- (id)context;
- (__CVBuffer *)processPixelBuffer:(__CVBuffer *)arg1;
- (void)startRendering;
- (__CVBuffer *)renderCompressByCIImage:(__CVBuffer *)arg1;
- (__CVBuffer *)inputPixelBuffer;
- (__CVBuffer *)resultPixelBuffer;
- (void)setContext:(id)arg1;
- (int)videoCompositeType;
- (void)setVideoCompositeType:(int)arg1;
- (id)alphaVideoFilter;
- (void)setAlphaVideoFilter:(id)arg1;
- (void).cxx_destruct;
@end

