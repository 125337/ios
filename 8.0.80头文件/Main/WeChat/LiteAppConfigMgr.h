@interface LiteAppConfigMgr : NSObject
+ (id)sharedInstance;
- (id)init;
- (void)mergeConfig:(id)arg1;
- (void)mergeGlobalConfig;
- (id)getConfigModel:(id)arg1;
- (id)getAllConfigModel;
- (id)getEngineConfigModel;
- (void)mergeSamplingConfig:(id)arg1;
- (void)updateGlobalSamplingConfig:(id)arg1 oldConfig:(id)arg2;
- (id)getSamplingConfigJson:(id)arg1;
- (void)syncTriggerActions:(id)arg1 appId:(id)arg2;
- (id)mergeDictionaries:(id)arg1 dict2:(id)arg2;
- (id)mergeConfigJson:(id)arg1;
@end
