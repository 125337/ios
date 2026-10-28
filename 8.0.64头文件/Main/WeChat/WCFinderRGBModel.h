@interface WCFinderRGBModel : NSObject
{
    double _redValue; // +0x8
    double _greenValue; // +0x10
    double _blueValue; // +0x18
}
- (double)redValue;
- (void)setRedValue:(double)arg1;
- (double)greenValue;
- (void)setGreenValue:(double)arg1;
- (double)blueValue;
- (void)setBlueValue:(double)arg1;
@end
