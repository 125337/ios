@interface BizRect : NSObject
{
    NSNumber * _left; // +0x8
    NSNumber * _top; // +0x10
    NSNumber * _right; // +0x18
    NSNumber * _bottom; // +0x20
}
+ (id)makeWithLeft:(id)arg1 top:(id)arg2 right:(id)arg3 bottom:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)left;
- (void)setLeft:(id)arg1;
- (id)top;
- (void)setTop:(id)arg1;
- (id)right;
- (void)setRight:(id)arg1;
- (id)bottom;
- (void)setBottom:(id)arg1;
- (void).cxx_destruct;
@end
