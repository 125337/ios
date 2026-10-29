@interface MMLiveFaceTrackTask : NSObject
{
    UIImage * _sourceImage; // +0x8
}
- (id)initWithSourcePixelBuffer:(__CVBuffer *)arg1 context:(id)arg2;
- (id)transferPixelBufferToImage:(__CVBuffer *)arg1 context:(id)arg2;
- (void)dealloc;
- (id)sourceImage;
- (void)setSourceImage:(id)arg1;
- (void).cxx_destruct;
@end
