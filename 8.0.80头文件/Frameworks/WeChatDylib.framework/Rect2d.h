@interface Rect2d : NSObject
{
    Rect_<double> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (void *)nativeRef;
- (id)initWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
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
