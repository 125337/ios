@interface WCPanoramaImageView : MMUIView
{
    BOOL _shouldStartMonitoring; // +0x8
    UIImage * _image; // +0x10
    CMMotionManager * _motionManager; // +0x18
    UIScrollView * _scrollView; // +0x20
    UIImageView * _imageView; // +0x28
    double _motionRate; // +0x30
    long long _minimumXOffset; // +0x38
    long long _maximumXOffset; // +0x40
    CGRect _viewFrame; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)resetViewFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)doStartMonitor;
- (id)scrollView;
- (id)imageView;
- (id)motionManager;
- (void)setImage:(id)arg1;
- (id)image;
- (CGRect)viewFrame;
- (void)setViewFrame:(CGRect)arg1;
- (void)setMotionManager:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setImageView:(id)arg1;
- (double)motionRate;
- (void)setMotionRate:(double)arg1;
- (long long)minimumXOffset;
- (void)setMinimumXOffset:(long long)arg1;
- (long long)maximumXOffset;
- (void)setMaximumXOffset:(long long)arg1;
- (BOOL)shouldStartMonitoring;
- (void)setShouldStartMonitoring:(BOOL)arg1;
- (void).cxx_destruct;
@end

