@interface LiteAppWAProvideApiHelperManager : NSObject <WAProvideApiDelegate, WAAppTaskMgrExt>
{
    NSMutableDictionary * _helpers; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)registerWAAppTaskMgr;
- (void)unregisterWAAppTaskMgr;
- (id)getApiHelper:(id)arg1 viewController:(id)arg2 appUuid:(unsigned int)arg3;
- (void)releaseApiHelper:(id)arg1 appUuid:(unsigned int)arg2;
- (void)releaseAllApiHelper;
- (void)onApiEndResult:(id)arg1 Name:(id)arg2 Param:(id)arg3 CallbackId:(unsigned int)arg4;
- (void)onApiSendEvent:(id)arg1 Name:(id)arg2 Param:(id)arg3;
- (void)onAppTaskTerminate:(id)arg1;
- (id)helpers;
- (void)setHelpers:(id)arg1;
- (void).cxx_destruct;
@end
