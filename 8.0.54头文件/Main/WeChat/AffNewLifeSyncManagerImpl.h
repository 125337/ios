@interface AffNewLifeSyncManagerImpl : NSObject <AffSyncCppToNativeManagerBase>
- (id)debugInfo:(id)arg1;
- (id)debugSwitchInfo:(id)arg1;
- (void)handleCmd:(int)arg1 cmd:(id)arg2 syncScene:(int)arg3 handleFinderSync:(BOOL)arg4;
- (BOOL)enableSync:(int)arg1 syncScene:(int)arg2;
- (id)getConfigSyncKeyPathList:(int)arg1;
- (id)getNewLifeRequestSyncResult;
- (id)getWebSearchRequestSyncConfig;
- (BOOL)isShowLookOneLookEntry;
- (BOOL)isShowWebSearchEntry;
- (id)mergeSyncKey:(id)arg1 newKey:(id)arg2;
- (id)getLiteAppVersionInfo;
@end

