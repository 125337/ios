@interface Double3 : NSObject
{
    Vec<double, 3> native; // +0x8
    Vec<double, 3> _nativeRef; // +0x20
}
+ (id)fromNative:(void *)arg1;
- (double)v0;
- (void)setV0:(double)arg1;
- (double)v1;
- (void)setV1:(double)arg1;
- (double)v2;
- (void)setV2:(double)arg1;
- (id)init;
- (id)initWithV0:(double)arg1 v1:(double)arg2 v2:(double)arg3;
- (id)initWithVals:(id)arg1;
- (void)set:(id)arg1;
- (id)get;
- (BOOL)isEqual:(id)arg1;
- (void *)nativeRef;
- (id).cxx_construct;
@end
