@interface LiteAppConfigMgr : NSObject
+ (id)sharedInstance;
- (id)init;
- (void)mergeConfig:(id)arg1;
- (void)mergeGlobalConfig;
- (id)getConfigModel:(id)arg1;
- (id)getAllConfigModel;
- (id)getEngineConfigModel;
- (id)mergeDictionaries:(id)arg1 dict2:(id)arg2;
- (id)mergeConfigJson:(id)arg1;
@end
