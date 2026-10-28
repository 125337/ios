@interface KindaModule : NSObject
{
    NSMapTable * viewModuleMap; // +0x8
    NSMapTable * nativeModuleMap; // +0x10
}
- (id)init;
- (void)configureModule;
- (void)onAppCreate;
- (void)registerView:(id)arg1 _class:(Class)arg2;
- (void)registerNativeModule:(id)arg1 _class:(Class)arg2;
- (void)initModuleInner;
- (void).cxx_destruct;
@end
