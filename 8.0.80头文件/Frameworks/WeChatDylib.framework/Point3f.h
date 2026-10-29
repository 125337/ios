@interface Point3f : NSObject
{
    Point3_<float> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
- (float)x;
- (void)setX:(float)arg1;
- (float)y;
- (void)setY:(float)arg1;
- (float)z;
- (void)setZ:(float)arg1;
- (void *)nativeRef;
- (id)init;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (id)initWithPoint:(id)arg1;
- (id)initWithVals:(id)arg1;
- (void)update:(void *)arg1;
- (void)set:(id)arg1;
- (id)clone;
- (double)dot:(id)arg1;
- (id)cross:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
@end
