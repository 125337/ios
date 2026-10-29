@interface Size2f : NSObject
{
    Size_<float> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
+ (id)width:(float)arg1 height:(float)arg2;
- (float)width;
- (void)setWidth:(float)arg1;
- (float)height;
- (void)setHeight:(float)arg1;
- (void *)nativeRef;
- (id)init;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
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
