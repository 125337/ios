@interface UDRFeatureService : MMUserService <MMServiceProtocol, IUdrResourceFeature>
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)batchCheck:(id)arg1 nameMap:(id)arg2 qos:(int)arg3 paramMap:(id)arg4;
- (void)check:(id)arg1 nameList:(id)arg2 qos:(int)arg3 paramMap:(id)arg4;
- (void)specifiedCheck:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 extInfo:(id)arg4;
- (void)registerProject:(id)arg1 className:(id)arg2;
- (id)getPostDir:(id)arg1;
- (id)getAbsolutePath:(id)arg1;
- (id)decodeVirtualPath:(id)arg1;
- (void)clearAll;
- (id)getResource:(id)arg1 name:(id)arg2;
- (id)getResourceList:(id)arg1;
- (id)getResourceDecrypt:(id)arg1 name:(id)arg2;
@end
