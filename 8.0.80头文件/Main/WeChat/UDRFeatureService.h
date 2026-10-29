@interface UDRFeatureService : MMRootService <MMServiceProtocol, IUdrResourceFeature>
+ (id)sharedInstance;
- (void)onServiceInit;
- (void)dealloc;
- (void)batchCheck:(id)arg1;
- (void)check:(id)arg1;
- (void)specifiedCheck:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 extInfo:(id)arg4;
- (void)registerProject:(id)arg1 className:(id)arg2;
- (id)decodeVirtualPath:(id)arg1;
- (void)clearAll;
- (id)getResource:(id)arg1 name:(id)arg2;
- (id)getResourceList:(id)arg1;
- (id)getResourceDecrypt:(id)arg1 name:(id)arg2;
- (unsigned long long)preCleanGetUDRSize;
- (void)deepCleanUDRResource;
@end
