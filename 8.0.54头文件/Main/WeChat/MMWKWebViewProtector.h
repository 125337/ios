@interface MMWKWebViewProtector : NSObject
{
    NSMutableArray * _webViewRecrodList; // +0x8
    long long _websiteDataStoreOperatingCount; // +0x10
    NSMutableSet * _websiteDataStoreHoldWebViewSet; // +0x18
}
+ (void)addEachWebViewOnInitedFromMainThread:(id)arg1;
+ (void)websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 modifiedSince:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 forDataRecords:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)websiteDataStore:(id)arg1 safeFromMainThreadFetchDataRecordsOfTypes:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)sharedInstance;
+ (BOOL)isOpenProtection;
+ (BOOL)isProtectIOS13CrashIfWebViewDeallocOnWKWebsiteDataStoreOperateData;
- (void)__addEachWebViewOnInitedFromMainThread:(id)arg1;
- (void)onWebViewDealloc;
- (id)webViewListFromWebViewRecordList:(id)arg1;
- (BOOL)omitDeallocedWebViewInRecordList:(id)arg1;
- (void)__websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 modifiedSince:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)__websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 forDataRecords:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)__websiteDataStore:(id)arg1 safeFromMainThreadFetchDataRecordsOfTypes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)onWebsiteDataStoreOperateBegin;
- (void)onWebsiteDataStoreOperateEnd;
- (BOOL)isWebsiteDataStoreOperating;
- (void)holdWebViewsOnWebsiteDataStoreOperating:(id)arg1;
- (void)removeHeldWebViewForWebsiteDataStoreOperating;
- (id)webViewRecrodList;
- (void)setWebViewRecrodList:(id)arg1;
- (long long)websiteDataStoreOperatingCount;
- (void)setWebsiteDataStoreOperatingCount:(long long)arg1;
- (id)websiteDataStoreHoldWebViewSet;
- (void)setWebsiteDataStoreHoldWebViewSet:(id)arg1;
- (void).cxx_destruct;
@end

