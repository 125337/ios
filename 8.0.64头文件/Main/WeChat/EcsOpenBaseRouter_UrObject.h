@interface EcsOpenBaseRouter_UrObject : NSObject <EcsCoreEcsOpenHandler_Ur>
{
    id <IEcsOpenRouter> _delegate; // +0x8
}
+ (id)create:(id)arg1;
- (id)name;
- (BOOL)canHandle:(id)arg1 context:(id)arg2;
- (void)handlePreload:(id)arg1 context:(id)arg2 preloadConfig:(id)arg3 callback:(id /* block */)arg4;
- (void)handleOpen:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
