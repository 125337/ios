@interface Size2d : NSObject
{
    Size_<double> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
+ (id)width:(double)arg1 height:(double)arg2;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (void *)nativeRef;
- (id)init;
- (id)initWithWidth:(double)arg1 height:(double)arg2;
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
