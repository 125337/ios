@interface PlatformRect : NSObject
{
    double _left; // +0x8
    double _top; // +0x10
    double _width; // +0x18
    double _height; // +0x20
}
+ (id)makeWithLeft:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (double)left;
- (void)setLeft:(double)arg1;
- (double)top;
- (void)setTop:(double)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
@end
