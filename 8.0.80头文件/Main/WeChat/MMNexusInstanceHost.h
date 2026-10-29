@interface MMNexusInstanceHost : NSObject
{
    BOOL _isReady; // +0x8
    BOOL _didEagerInject; // +0x9
    MMNexusInstance * _instance; // +0x10
    MMNexusStore * _store; // +0x18
    MMNexusPageMetadata * _metadata; // +0x20
    MMWebViewController * _webVC; // +0x28
    MMNexusResourceBinaryStore * _binaryStore; // +0x30
    NSDictionary * _pendingInitialData; // +0x38
    NSSet * _eventWhitelist; // +0x40
    id /* block */ _dismissBlock; // +0x48
    MMPageSheetAdapter * _sheetAdapter; // +0x50
    double _currentSheetHeightPx; // +0x58
}
+ (id)hostForWebViewController:(id)arg1;
+ (void)reportNexusError:(int)arg1 errorMsg:(id)arg2 pageId:(id)arg3 instanceId:(id)arg4 extraTags:(id)arg5;
+ (id)_iidHostTable;
+ (id)hostForInstanceId:(id)arg1;
- (id)initWithInstance:(id)arg1 store:(id)arg2 metadata:(id)arg3 config:(id)arg4 webVC:(id)arg5;
- (void)rebindWebVC:(id)arg1;
- (void)_mergeInitialData:(id)arg1;
- (void)markReady;
- (void)injectInitialDataEagerly;
- (BOOL)handleDispatchEvent:(id)arg1 data:(id)arg2 callbackId:(id)arg3;
- (BOOL)_handleSystemEvent:(id)arg1 data:(id)arg2 callbackId:(id)arg3;
- (BOOL)_handleResize:(id)arg1 callbackId:(id)arg2;
- (id)handleGetData:(id)arg1;
- (BOOL)handleSetStorage:(id)arg1 forKey:(id)arg2;
- (id)handleGetStorageForKey:(id)arg1;
- (void)handleCloseFromJS;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dealloc;
- (void)broadcastLifecycle:(id)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (BOOL)isReady;
- (void)setIsReady:(BOOL)arg1;
- (id)binaryStore;
- (void)setBinaryStore:(id)arg1;
- (BOOL)didEagerInject;
- (void)setDidEagerInject:(BOOL)arg1;
- (id)pendingInitialData;
- (void)setPendingInitialData:(id)arg1;
- (id)eventWhitelist;
- (void)setEventWhitelist:(id)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)sheetAdapter;
- (void)setSheetAdapter:(id)arg1;
- (double)currentSheetHeightPx;
- (void)setCurrentSheetHeightPx:(double)arg1;
- (void).cxx_destruct;
@end
