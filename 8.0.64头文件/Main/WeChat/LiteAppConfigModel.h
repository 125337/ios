@interface LiteAppConfigModel : NSObject
{
    BOOL _globalUpdate; // +0x8
    LiteAppConfigStoreModel * _store; // +0x10
    LiteAppConfigShareModel * _share; // +0x18
    LiteAppConfigSystemPermissionModel * _systemPermission; // +0x20
    LiteAppConfigAllowedJsApiModel * _jsapi; // +0x28
    NSArray * _triggerActions; // +0x30
}
- (id)init;
- (id)store;
- (void)setStore:(id)arg1;
- (id)share;
- (void)setShare:(id)arg1;
- (id)systemPermission;
- (void)setSystemPermission:(id)arg1;
- (id)jsapi;
- (void)setJsapi:(id)arg1;
- (id)triggerActions;
- (void)setTriggerActions:(id)arg1;
- (BOOL)globalUpdate;
- (void)setGlobalUpdate:(BOOL)arg1;
- (void).cxx_destruct;
@end
