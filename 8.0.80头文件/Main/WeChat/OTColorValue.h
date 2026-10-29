@interface OTColorValue : NSObject
{
    double _red; // +0x8
    double _green; // +0x10
    double _blue; // +0x18
    double _weight; // +0x20
}
+ (id)colorValueWith:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (double)distanceWith:(id)arg1;
- (void)meanWithColorValue:(id)arg1;
- (id)color;
- (double)red;
- (void)setRed:(double)arg1;
- (double)green;
- (void)setGreen:(double)arg1;
- (double)blue;
- (void)setBlue:(double)arg1;
- (double)weight;
- (void)setWeight:(double)arg1;
@end
