@interface QBWebViewHelper : NSObject
+ (void)initialize;
+ (BOOL)isQQNetChangedON;
+ (void)checkUpdate;
+ (void)checkWupRequestWhenGUIDIsReady;
+ (void)excuteWupRequestIfNecessary;
+ (void)doInSubThread:(id /* block */)arg1;
+ (void)asyncInitModules;
+ (id)serviceDic;
+ (void)updateWhiteLists;
+ (void)updatePreferences;
+ (void)checkApnAndGUID;
+ (void)doEnterBackground:(id)arg1;
+ (void)willEnterForeground:(id)arg1;
+ (void)startProxyWithWorker:(Class)arg1;
+ (void)startProxyWithWorkerWithInitialize:(Class)arg1 initialize:(BOOL)arg2;
+ (void)checkInitialize;
+ (id)getVersion;
+ (BOOL)isQBWebViewRequest:(id)arg1;
+ (id)processCachedResponse:(id)arg1 forRequest:(id)arg2;
+ (void)downloadProzyInfoWithCompletion:(id /* block */)arg1;
+ (void)setCustomUA:(id)arg1;
+ (void)URLCacheDidFetchCacheResponse:(id)arg1 forRequest:(id)arg2;
+ (void)clearCookiesCompletionHandler:(id /* block */)arg1;
+ (void)clearCachesCompletionHandler:(id /* block */)arg1;
+ (void)cleanAndDlWK:(id /* block */)arg1;
@end

