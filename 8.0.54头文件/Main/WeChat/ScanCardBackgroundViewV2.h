@interface ScanCardBackgroundViewV2 : UIView
{
    CGRect maskRect; // +0x8
    UIImage * _leftTopImage; // +0x28
    UIImage * _rightTopImage; // +0x30
    UIImage * _leftBottomImage; // +0x38
    UIImage * _rightBottomImage; // +0x40
    double _lengthWidthRatio; // +0x48
    UIImageView * _scanLineView; // +0x50
    CAAnimationGroup * _scanLineAnimation; // +0x58
    double _scanLineTop; // +0x60
    double _scanLineBottom; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 andTypeRatio:(double)arg2;
- (void)commonInit;
- (void)setupScanLineView;
- (void)drawRect:(CGRect)arg1;
- (void)startScanLineAnimation;
- (void)stopScanLineAnimation;
- (id)scanLineView;
- (void)setScanLineView:(id)arg1;
- (id)scanLineAnimation;
- (void)setScanLineAnimation:(id)arg1;
- (double)scanLineTop;
- (void)setScanLineTop:(double)arg1;
- (double)scanLineBottom;
- (void)setScanLineBottom:(double)arg1;
- (void).cxx_destruct;
@end

