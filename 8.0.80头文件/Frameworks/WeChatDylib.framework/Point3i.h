@interface Point3i : NSObject
{
    Point3_<int> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
- (int)x;
- (void)setX:(int)arg1;
- (int)y;
- (void)setY:(int)arg1;
- (int)z;
- (void)setZ:(int)arg1;
- (void *)nativeRef;
- (id)init;
- (id)initWithX:(int)arg1 y:(int)arg2 z:(int)arg3;
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
