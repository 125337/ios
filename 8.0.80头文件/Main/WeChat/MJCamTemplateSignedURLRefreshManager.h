@interface MJCamTemplateSignedURLRefreshManager : NSObject <OMJSignedURLRefreshBridgeServiceDelegate>
{
    shared_ptr<ilink::NetworkManager> _networkManager; // +0x8
    OMJSignedURLRefreshBridgeService * _signedURLRefreshBridgeService; // +0x18
    NSMutableDictionary * _activeTaskTokensByID; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)resetForAccountChange;
- (void)signedURLRefreshBridgeService:(id)arg1 requestRefreshedURLsForTaskID:(unsigned int)arg2 expiredURLs:(id)arg3;
- (void)signedURLRefreshBridgeService:(id)arg1 requestRefreshedURLsForTaskID:(unsigned int)arg2 callbackToken:(unsigned long long)arg3 expiredURLs:(id)arg4;
- (void)requestRefreshedURLsForTaskID:(unsigned int)arg1 callbackToken:(unsigned long long)arg2 expiredURLs:(id)arg3;
- (void)signedURLRefreshBridgeService:(id)arg1 cancelTaskID:(unsigned int)arg2;
- (void)signedURLRefreshBridgeService:(id)arg1 cancelTaskID:(unsigned int)arg2 callbackToken:(unsigned long long)arg3;
- (void)handleResponseBytes:(const void *)arg1 errorCode:(int)arg2 taskID:(unsigned int)arg3 callbackToken:(unsigned long long)arg4 expectedURLCount:(unsigned long long)arg5;
- (BOOL)ensureNetworkManager;
- (BOOL)addActiveTaskID:(unsigned int)arg1 callbackToken:(unsigned long long)arg2;
- (BOOL)removeActiveTaskID:(unsigned int)arg1;
- (BOOL)removeActiveTaskID:(unsigned int)arg1 callbackToken:(unsigned long long)arg2;
- (void)notifySuccessForTaskID:(unsigned int)arg1 callbackToken:(unsigned long long)arg2 refreshedURLs:(id)arg3;
- (void)notifyFailureForTaskID:(unsigned int)arg1 callbackToken:(unsigned long long)arg2 code:(long long)arg3 description:(id)arg4;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (BOOL)containsOnlyNonemptyStrings:(id)arg1;
- (BOOL)containsOnlyValidHTTPURLs:(id)arg1;
- (id)signedURLRefreshBridgeService;
- (void)setSignedURLRefreshBridgeService:(id)arg1;
- (id)activeTaskTokensByID;
- (void)setActiveTaskTokensByID:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
