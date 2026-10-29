@interface EcsOpenBaseRouter : NSObject <IEcsOpenRouter>
{
    NSString * _name; // +0x8
    id <EcsCoreEcsOpenHandler_Ur> _urObject; // +0x10
}
+ (id)createWithName:(id)arg1;
- (id)init;
- (BOOL)canHandle:(id)arg1 context:(id)arg2;
- (void)handlePreload:(id)arg1 context:(id)arg2 preloadConfig:(id)arg3 callback:(id)arg4;
- (void)handleOpen:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (id)name;
- (void)setName:(id)arg1;
- (id)urObject;
- (void)setUrObject:(id)arg1;
- (void).cxx_destruct;
@end
