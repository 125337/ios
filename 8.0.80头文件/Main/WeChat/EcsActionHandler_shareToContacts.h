@interface EcsActionHandler_shareToContacts : EcsActionHandler_Base
+ (id)jsonStringFromObject:(id)arg1;
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (id)genWAExtraData;
@end
