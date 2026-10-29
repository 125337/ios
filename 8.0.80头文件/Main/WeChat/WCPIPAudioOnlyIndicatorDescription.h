@interface WCPIPAudioOnlyIndicatorDescription : WCPIPTextStateDescription
{
    NSString * _leftIcon; // +0x8
    NSString * _rightIcon; // +0x10
    double _leftRightIconTextInset; // +0x18
    CGSize _leftRightIconSize; // +0x20
}
- (id)initWithText:(id)arg1 leftIcon:(id)arg2 rightIcon:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)leftIcon;
- (void)setLeftIcon:(id)arg1;
- (id)rightIcon;
- (void)setRightIcon:(id)arg1;
- (CGSize)leftRightIconSize;
- (void)setLeftRightIconSize:(CGSize)arg1;
- (double)leftRightIconTextInset;
- (void)setLeftRightIconTextInset:(double)arg1;
- (void).cxx_destruct;
@end
