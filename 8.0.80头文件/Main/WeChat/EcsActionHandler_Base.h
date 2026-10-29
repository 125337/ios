@interface EcsActionHandler_Base : NSObject
{
    int _jsEnv; // +0x8
    id <EcsActionHandlerDelegate> _jsEventHandler; // +0x10
}
- (void)dealloc;
- (id)initWithJsEventHandler:(id)arg1;
- (void)handleAction:(id)arg1;
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (id)jsEventHandler;
- (void)setJsEventHandler:(id)arg1;
- (int)jsEnv;
- (void)setJsEnv:(int)arg1;
- (void).cxx_destruct;
@end
