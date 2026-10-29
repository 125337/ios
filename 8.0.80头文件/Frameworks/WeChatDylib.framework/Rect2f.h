@interface Rect2f : NSObject
{
    Rect_<float> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
- (float)x;
- (void)setX:(float)arg1;
- (float)y;
- (void)setY:(float)arg1;
- (float)width;
- (void)setWidth:(float)arg1;
- (float)height;
- (void)setHeight:(float)arg1;
- (void *)nativeRef;
- (id)initWithX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (id)init;
- (id)initWithPoint:(id)arg1 point:(id)arg2;
- (id)initWithPoint:(id)arg1 size:(id)arg2;
- (id)initWithVals:(id)arg1;
- (id)clone;
- (id)tl;
- (id)br;
- (id)size;
- (double)area;
- (BOOL)empty;
- (BOOL)contains:(id)arg1;
- (void)set:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
@end
