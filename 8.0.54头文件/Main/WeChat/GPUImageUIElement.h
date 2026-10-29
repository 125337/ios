@interface GPUImageUIElement : GPUImageOutput
{
    UIView * view; // +0x70
    CALayer * layer; // +0x78
    CGSize previousLayerSizeInPixels; // +0x80
    struct time; // +0x90
    double actualTimeOfLastUpdate; // +0xa8
}
- (id)initWithView:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (CGSize)layerSizeInPixels;
- (void)update;
- (void)updateUsingCurrentTime;
- (void)updateWithTimestamp:(struct)arg1;
- (void).cxx_destruct;
@end

