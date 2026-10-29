@interface FlutterRect : NSObject
{
    double _x; // +0x8
    double _y; // +0x10
    double _width; // +0x18
    double _height; // +0x20
}
+ (id)makeWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
@end

