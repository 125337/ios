@interface ODSRenderViewIOSDisplay : UIView
+ (Class)layerClass;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (id)displayLayer;
- (void)displayPixelBuffer:(__CVBuffer *)arg1 enableHDR:(BOOL)arg2;
- (opaqueCMSampleBuffer *)createSampleBufferWithPixelBuffer:(__CVBuffer *)arg1;
- (void)displaySampleBuffer:(opaqueCMSampleBuffer *)arg1;
@end

