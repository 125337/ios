@interface Float6 : NSObject
{
    Vec<float, 6> native; // +0x8
    Vec<float, 6> _nativeRef; // +0x20
}
+ (id)fromNative:(void *)arg1;
- (float)v0;
- (void)setV0:(float)arg1;
- (float)v1;
- (void)setV1:(float)arg1;
- (float)v2;
- (void)setV2:(float)arg1;
- (float)v3;
- (void)setV3:(float)arg1;
- (float)v4;
- (void)setV4:(float)arg1;
- (float)v5;
- (void)setV5:(float)arg1;
- (id)init;
- (id)initWithV0:(float)arg1 v1:(float)arg2 v2:(float)arg3 v3:(float)arg4 v4:(float)arg5 v5:(float)arg6;
- (id)initWithVals:(id)arg1;
- (void)set:(id)arg1;
- (id)get;
- (BOOL)isEqual:(id)arg1;
- (void *)nativeRef;
- (id).cxx_construct;
@end
