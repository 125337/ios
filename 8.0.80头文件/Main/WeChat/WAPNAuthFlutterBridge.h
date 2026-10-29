@interface WAPNAuthFlutterBridge : NSObject <WAPNAuthFlutterHandovering>
{
    WAPNAuthFlutterHostInfo * _activeHost; // +0x8
    NSMutableDictionary * _inFlightTasks; // +0x10
    NSMutableDictionary * _preparedOwners; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)hasActiveHost;
- (BOOL)canHandover;
- (BOOL)handoverWithAppId:(id)arg1 isRealtime:(BOOL)arg2 pagePath:(id)arg3 noQuotaToast:(BOOL)arg4 appName:(id)arg5 appIconUrl:(id)arg6 fromAgentRuntime:(BOOL)arg7 completion:(id /* block */)arg8;
- (void)registerHost:(id)arg1 token:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterHostWithToken:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareWithCardId:(id)arg1 taskJson:(id)arg2 completion:(id /* block */)arg3;
- (void)handlePrepareResult:(id)arg1 error:(id)arg2 cardId:(id)arg3 identity:(id)arg4 owner:(id)arg5;
- (void)cancelInFlightTaskWithCardId:(id)arg1 reason:(id)arg2;
- (void)releaseWithCardId:(id)arg1;
- (void)detachChannel:(id)arg1;
- (void)cancelSessionWithCardId:(id)arg1;
- (void)invokeReleaseWithHost:(id)arg1 cardId:(id)arg2 inGroup:(id)arg3;
- (id)activeHost;
- (void)setActiveHost:(id)arg1;
- (id)inFlightTasks;
- (void)setInFlightTasks:(id)arg1;
- (id)preparedOwners;
- (void)setPreparedOwners:(id)arg1;
- (void).cxx_destruct;
@end
