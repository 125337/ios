@interface Int4 : NSObject
{
    Vec<int, 4> native; // +0x8
    Vec<int, 4> _nativeRef; // +0x18
}
+ (id)fromNative:(void *)arg1;
- (int)v0;
- (void)setV0:(int)arg1;
- (int)v1;
- (void)setV1:(int)arg1;
- (int)v2;
- (void)setV2:(int)arg1;
- (int)v3;
- (void)setV3:(int)arg1;
- (id)init;
- (id)initWithV0:(int)arg1 v1:(int)arg2 v2:(int)arg3 v3:(int)arg4;
- (id)initWithVals:(id)arg1;
- (void)set:(id)arg1;
- (id)get;
- (BOOL)isEqual:(id)arg1;
- (void *)nativeRef;
- (id).cxx_construct;
@end
