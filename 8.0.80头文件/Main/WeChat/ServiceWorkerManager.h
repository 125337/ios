@interface ServiceWorkerManager : MMUserService <IWSSearchUtilExtension, MMLiteAppStoreExt, MMServiceProtocol>
{
    BOOL _shouldCancelTask; // +0x8
    BOOL _shouldPendingCoolStartCreateStoreEvent; // +0x9
    BOOL _storeExtRegistered; // +0xa
    NSString * _currLiteAppId; // +0x10
    unsigned long long _releaseGeneration; // +0x18
    unsigned long long _createStoreGeneration; // +0x20
    NSMutableDictionary * _searchQuitParamsMap; // +0x28
    double _lastSearchQuitDispatchTimestamp; // +0x30
    NSMapTable * _storeEventForwarderMap; // +0x38
    NSMutableDictionary * _pendingStoreSetDataMap; // +0x40
}
+ (BOOL)isTopOnSearchResultPage;
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)checkshouldPendingCoolStartCreateStoreEvent;
- (void)onServiceTerminate;
- (BOOL)enableServiceWorker;
- (void)checkCreateStore;
- (BOOL)createStoreFromActiveTemplateForAppId:(id)arg1 aliveSeconds:(int)arg2;
- (void)releaseStore;
- (void)notifyLifecycleStateChange:(BOOL)arg1;
- (void)notifyBottomTabSwitch:(id)arg1;
- (void)notifySearchEntryExpose:(id)arg1;
- (void)notifySearchEntryClick:(id)arg1;
- (void)notifyOpenWebSearch:(id)arg1;
- (void)setSearchQuitParams:(id)arg1 data:(id)arg2 webViewKey:(unsigned long long)arg3;
- (void)notifySearchQuit:(id)arg1;
- (void)notifySearchQuit:(id)arg1 webViewKey:(unsigned long long)arg2;
- (void)publishGlobalEventToAll:(id)arg1 params:(id)arg2;
- (void)onTemplateApplyed:(unsigned long long)arg1;
- (int)subscribeStore:(id)arg1 pointers:(id)arg2 webViewController:(id)arg3;
- (int)unsubscribeStore:(id)arg1 pointers:(id)arg2;
- (BOOL)ensureStoreAlive:(id)arg1 aliveSeconds:(int)arg2 didCreate:(BOOL *)arg3;
- (BOOL)isStoreAlive:(id)arg1;
- (void)releaseStoreByAppId:(id)arg1;
- (void)cleanupStaleForwarders;
- (void)bindStoreEventForwarderForAppId:(id)arg1 webViewController:(id)arg2;
- (void)unbindStoreEventForwarderForAppId:(id)arg1;
- (void)flushPendingStoreSetDataForAppId:(id)arg1 webViewController:(id)arg2;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (id)currLiteAppId;
- (void)setCurrLiteAppId:(id)arg1;
- (BOOL)shouldCancelTask;
- (void)setShouldCancelTask:(BOOL)arg1;
- (BOOL)shouldPendingCoolStartCreateStoreEvent;
- (void)setShouldPendingCoolStartCreateStoreEvent:(BOOL)arg1;
- (unsigned long long)releaseGeneration;
- (void)setReleaseGeneration:(unsigned long long)arg1;
- (unsigned long long)createStoreGeneration;
- (void)setCreateStoreGeneration:(unsigned long long)arg1;
- (id)searchQuitParamsMap;
- (void)setSearchQuitParamsMap:(id)arg1;
- (double)lastSearchQuitDispatchTimestamp;
- (void)setLastSearchQuitDispatchTimestamp:(double)arg1;
- (id)storeEventForwarderMap;
- (void)setStoreEventForwarderMap:(id)arg1;
- (BOOL)storeExtRegistered;
- (void)setStoreExtRegistered:(BOOL)arg1;
- (id)pendingStoreSetDataMap;
- (void)setPendingStoreSetDataMap:(id)arg1;
- (void).cxx_destruct;
@end
