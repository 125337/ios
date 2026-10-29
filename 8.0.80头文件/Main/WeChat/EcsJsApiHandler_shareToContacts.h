@interface EcsJsApiHandler_shareToContacts : EcsBaseAsyncJsApiHandler
+ (id)jsonStringFromObject:(id)arg1;
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handle:(id)arg1 params:(id)arg2 callback:(id)arg3;
- (id)genWAExtraData:(id)arg1;
@end
