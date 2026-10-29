@interface Rect2i : NSObject
{
    Rect_<int> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
- (int)x;
- (void)setX:(int)arg1;
- (int)y;
- (void)setY:(int)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (void *)nativeRef;
- (id)initWithX:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4;
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
