@interface SightCameraPreviewView : SightPreviewViewF2
{
    CALayer * _previewLayer; // +0x18
    CGSize _videoSize; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setVideoOuputSize:(CGSize)arg1;
- (void)updatePreviewLayer:(id)arg1;
- (void)layoutSubviews;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

