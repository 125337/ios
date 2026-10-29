@interface WASkillManager : MMUserService <WASkillDownloadTaskDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _activeCgiEvents; // +0x8
    NSMutableDictionary * _pendingCompletions; // +0x10
    NSMutableDictionary * _pendingInjectCallbacks; // +0x18
    NSMutableDictionary * _activeDownloadTasks; // +0x20
    NSMutableDictionary * _downloadCompletions; // +0x28
    NSCountedSet * _activeDownloadAppIds; // +0x30
    NSLock * _activeDownloadAppIdsLock; // +0x38
    NSObject<OS_dispatch_queue> * _cgiQueue; // +0x40
    NSObject<OS_dispatch_queue> * _injectQueue; // +0x48
    NSObject<OS_dispatch_queue> * _downloadQueue; // +0x50
}
- (id)init;
- (void)fetchSkillInfoForAppId:(id)arg1 appVersion:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)sendGetWxaSkillInfoCgiForAppId:(id)arg1 appVersion:(unsigned int)arg2;
- (void)handleCgiResponse:(id)arg1 forAppId:(id)arg2 appVersion:(unsigned int)arg3;
- (void)flushCallbacksForAppId:(id)arg1 withSkillVersion:(unsigned long long)arg2;
- (void)startDownloadIfNeeded:(id)arg1 completion:(id /* block */)arg2;
- (void)onSkillDownloadFinish:(id)arg1 errorType:(long long)arg2 error:(id)arg3;
- (void)finishDownloadAndFanout:(id)arg1 url:(id)arg2 downloadOk:(BOOL)arg3 saveOk:(BOOL)arg4 errorType:(long long)arg5;
- (void)fanoutInjectFailure:(id)arg1 code:(long long)arg2 errMsg:(id)arg3;
- (void)clearInjectedForAppId:(id)arg1;
- (void)injectSkillForAppId:(id)arg1 appVersion:(unsigned int)arg2 completion:(id /* block */)arg3;
- (BOOL)hasActiveDownloadForAppId:(id)arg1;
- (void)addActiveDownloadAppId:(id)arg1;
- (void)removeActiveDownloadAppId:(id)arg1;
- (void)doInjectJSFiles:(id)arg1 completion:(id /* block */)arg2;
- (void)injectFilesRecursive:(id)arg1 index:(unsigned long long)arg2 appTask:(id)arg3 appId:(id)arg4 completion:(id /* block */)arg5;
- (id)activeCgiEvents;
- (void)setActiveCgiEvents:(id)arg1;
- (id)pendingCompletions;
- (void)setPendingCompletions:(id)arg1;
- (id)pendingInjectCallbacks;
- (void)setPendingInjectCallbacks:(id)arg1;
- (id)activeDownloadTasks;
- (void)setActiveDownloadTasks:(id)arg1;
- (id)downloadCompletions;
- (void)setDownloadCompletions:(id)arg1;
- (id)activeDownloadAppIds;
- (void)setActiveDownloadAppIds:(id)arg1;
- (id)activeDownloadAppIdsLock;
- (void)setActiveDownloadAppIdsLock:(id)arg1;
- (id)cgiQueue;
- (void)setCgiQueue:(id)arg1;
- (id)injectQueue;
- (void)setInjectQueue:(id)arg1;
- (id)downloadQueue;
- (void)setDownloadQueue:(id)arg1;
- (void).cxx_destruct;
@end
