@interface ScanLicenceBackgroundView : UIView
{
    CGRect maskRect; // +0x8
    UIImage * _leftTopImage; // +0x28
    UIImage * _rightTopImage; // +0x30
    UIImage * _leftBottomImage; // +0x38
    UIImage * _rightBottomImage; // +0x40
    double _lengthWidthRatio; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 andTypeRatio:(double)arg2;
- (void)commonInit;
- (void)drawRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
