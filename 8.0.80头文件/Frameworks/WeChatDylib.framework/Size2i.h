@interface Size2i : NSObject
{
    Size_<int> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
+ (id)width:(int)arg1 height:(int)arg2;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (void *)nativeRef;
- (id)init;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithPoint:(id)arg1;
- (id)initWithVals:(id)arg1;
- (double)area;
- (BOOL)empty;
- (void)set:(id)arg1;
- (id)clone;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
@end
