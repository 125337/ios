@interface ZZBorderModel : NSObject
{
    double _width; // +0x8
    UIColor * _color; // +0x10
    double _radius; // +0x18
}
+ (id)create;
- (double)width;
- (void)setWidth:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (void).cxx_destruct;
@end
