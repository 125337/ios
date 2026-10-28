@interface WCFinderWordingIconConfigGroup : NSObject
{
    NSDictionary * _localDefaultConfigs; // +0x8
    id /* block */ _serverConfigSetter; // +0x10
    WCFinderGlobalWordingIconConfig * _globalConfig; // +0x18
    id /* block */ _globalConfigSetter; // +0x20
    NSMutableDictionary * _serverFieldSetterMap; // +0x28
}
+ (id)generatorGroupConfig;
- (void)doSomethingMagicLogic;
- (id)localDefaultConfigs;
- (void)setLocalDefaultConfigs:(id)arg1;
- (id /* block */)serverConfigSetter;
- (void)setServerConfigSetter:(id /* block */)arg1;
- (id)globalConfig;
- (void)setGlobalConfig:(id)arg1;
- (id /* block */)globalConfigSetter;
- (void)setGlobalConfigSetter:(id /* block */)arg1;
- (id)serverFieldSetterMap;
- (void)setServerFieldSetterMap:(id)arg1;
- (void).cxx_destruct;
@end
