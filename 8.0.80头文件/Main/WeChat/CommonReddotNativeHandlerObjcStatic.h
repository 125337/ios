@interface CommonReddotNativeHandlerObjcStatic : NSObject
+ (void)onReddotSyncResponse:(unsigned int)arg1 scene:(unsigned int)arg2 finderCommonReddotSyncResponse:(id)arg3;
+ (void)getFinderTipsShowInfo:(id)arg1 callback:(id /* block */)arg2;
+ (void)disposeReddot:(id)arg1 callback:(id /* block */)arg2;
+ (void)getReddotCtrlInfo:(id)arg1 callback:(id /* block */)arg2;
+ (id)generateSyncClientInfo:(unsigned int)arg1;
+ (void)generateShowInfoReportJson:(id)arg1 callback:(id /* block */)arg2;
+ (id)generateClientAIInfo:(unsigned int)arg1;
+ (id)generateEntranceExposeContent:(unsigned int)arg1;
+ (id)generateSyncClientStatus:(unsigned int)arg1;
+ (BOOL)canSendSyncRequest:(unsigned int)arg1 request:(id)arg2;
+ (void)asyncGenerateEntranceExposeContent:(unsigned int)arg1 callback:(id /* block */)arg2;
+ (void)asyncGenerateSyncClientInfo:(unsigned int)arg1 callback:(id /* block */)arg2;
+ (void)asyncGenerateClientAIInfo:(unsigned int)arg1 callback:(id /* block */)arg2;
+ (void)asyncGenerateClientSyncStatus:(unsigned int)arg1 callback:(id /* block */)arg2;
+ (id)generateClientSyncStatus:(unsigned int)arg1;
+ (id)generateSyncCustomClientInfo:(unsigned int)arg1;
+ (void)asyncGenerateSyncCustomClientInfo:(unsigned int)arg1 callback:(id /* block */)arg2;
+ (void)updateShowInfoTreeReddotCount:(id)arg1;
+ (void)getReddotExposeInfosWithCallback:(id /* block */)arg1;
+ (void)triggerNativeAction:(unsigned int)arg1 request:(id)arg2 callback:(id /* block */)arg3;
@end
