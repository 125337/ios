@interface WCLanDeviceStateItemProgressView : UIView
{
    CAShapeLayer * m_shapeLayer; // +0x8
    double _progress; // +0x10
}
+ (id)progressView;
- (id)initWithFrame:(CGRect)arg1;
- (void)initShapeLayer;
- (void)setProgress:(double)arg1;
- (void)completeAnimate:(BOOL)arg1;
- (double)progress;
- (void).cxx_destruct;
@end

