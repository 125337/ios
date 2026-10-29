@interface XSampleBufferDisplayView : UIView
{
    AVSampleBufferDisplayLayer * _displayLayer; // +0x8
}
+ (Class)layerClass;
- (void)setVideoContentMode:(unsigned long long)arg1;
- (BOOL)enqueueImage:(id)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)displayLayer;
- (void)setDisplayLayer:(id)arg1;
- (void).cxx_destruct;
@end

