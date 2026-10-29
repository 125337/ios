@interface Point2d : NSObject
{
    Point_<double> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (void *)nativeRef;
- (id)init;
- (id)initWithX:(double)arg1 y:(double)arg2;
- (id)initWithVals:(id)arg1;
- (void)update:(void *)arg1;
- (id)clone;
- (double)dot:(id)arg1;
- (void)set:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)inside:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
@end
