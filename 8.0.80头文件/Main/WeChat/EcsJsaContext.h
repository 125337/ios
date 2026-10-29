@interface EcsJsaContext : NSObject
{
    id <EcsCoreEcsJsaContext_Ur> _urObject; // +0x8
    EcsJsaContextNativeInfo * _nativeInfo; // +0x10
}
+ (id)createWithEnv:(int)arg1 delegate:(id)arg2;
+ (id)createWithUrObject:(id)arg1;
- (id)initWithEnv:(int)arg1 delegate:(id)arg2;
- (id)initWithUrObject:(id)arg1;
- (int)jsEnv;
- (long long)taskId;
- (id)data;
- (id)nativeInfo;
- (id)delegate;
- (id)urObject;
- (void)setNativeInfo:(id)arg1;
- (void).cxx_destruct;
@end
