@interface MJComposingCreationReeditResourceRefreshAdapter : NSObject
+ (id)refreshQueue;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (BOOL)isRegularFileAtPath:(id)arg1;
+ (id)installedTemplateDirectoryWithTemplateID:(id)arg1 version:(unsigned long long)arg2 cachesDirectory:(id)arg3;
+ (id)snapshotInstalledTemplateWithTemplateID:(id)arg1 version:(unsigned long long)arg2 cachesDirectory:(id)arg3 error:(id *)arg4;
+ (BOOL)removeTemplateWithResourceManager:(id)arg1 templateID:(id)arg2 version:(unsigned long long)arg3 cachesDirectory:(id)arg4 phase:(id)arg5;
+ (void)completeOnMainThread:(id /* block */)arg1 error:(id)arg2;
+ (void)completeRefreshOnMainThread:(id /* block */)arg1 transaction:(id)arg2 error:(id)arg3;
+ (void)loadTemplateWithResourceManager:(id)arg1 templateID:(id)arg2 version:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (void)restoreTemplateWithResourceManager:(id)arg1 templateID:(id)arg2 version:(unsigned long long)arg3 lastGoodZipPath:(id)arg4 completion:(id /* block */)arg5;
+ (void)rollbackTemplateReplacementWithResourceManager:(id)arg1 registeredTemplateID:(id)arg2 updatedTemplateID:(id)arg3 version:(unsigned long long)arg4 lastGoodZipPath:(id)arg5 completion:(id /* block */)arg6;
+ (void)rollbackRefreshWithResourceManager:(id)arg1 registeredTemplateID:(id)arg2 updatedTemplateID:(id)arg3 version:(unsigned long long)arg4 lastGoodZipPath:(id)arg5 completion:(id /* block */)arg6;
+ (void)refreshTemplateWithTemplateID:(id)arg1 version:(unsigned long long)arg2 zipPath:(id)arg3 completion:(id /* block */)arg4;
+ (void)replaceTemplateWithRegisteredTemplateID:(id)arg1 updatedTemplateID:(id)arg2 version:(unsigned long long)arg3 zipPath:(id)arg4 completion:(id /* block */)arg5;
@end
