@interface VoIPPIPRenderView : UIView
{
    __CVBuffer * _localImageBuffer; // +0x8
    AVSampleBufferDisplayLayer * _customRenderLayer; // +0x10
}
+ (id)viewWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 avSampleBufferDisplayerLayer:(id)arg2;
- (void)layoutSubviews;
- (void)clear;
- (void)drawPixelBufferRef:(__CVBuffer *)arg1;
- (id)customRenderLayer;
- (void)setCustomRenderLayer:(id)arg1;
- (void).cxx_destruct;
@end

