@interface FLTRect : NSObject
{
    double _left; // +0x8
    double _top; // +0x10
    double _right; // +0x18
    double _bottom; // +0x20
}
+ (id)makeWithLeft:(double)arg1 top:(double)arg2 right:(double)arg3 bottom:(double)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (double)left;
- (void)setLeft:(double)arg1;
- (double)top;
- (void)setTop:(double)arg1;
- (double)right;
- (void)setRight:(double)arg1;
- (double)bottom;
- (void)setBottom:(double)arg1;
@end

