@interface MJTemplateSession : NSObject
{
    long long _status; // +0x8
    NSString * _sessionKey; // +0x10
    OMJMaasCore * _maasCore; // +0x18
    unsigned long long _scene; // +0x20
    NSString * _currentTemplateId; // +0x28
    MJTemplateSessionExportOperation * _exportOperation; // +0x30
    id /* block */ _prepareCompletionHandler; // +0x38
    id /* block */ _destroyCompletionHandler; // +0x40
    MMContext * _mmContext; // +0x48
    MJTemplateSessionOperation * _currentOperation; // +0x50
    NSMutableArray * _pendingOperationQueue; // +0x58
}
- (id)init;
- (void)dealloc;
- (BOOL)bindMaasCore:(id)arg1;
- (BOOL)canStartUp;
- (BOOL)startUp:(id *)arg1;
- (BOOL)createMaasSession;
- (BOOL)isCleaningUp;
- (BOOL)canCleanUp;
- (void)cleanUpWithCompletionHandler:(id /* block */)arg1;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_didCompleteCleaningUpWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_tearDownMaasCoreWithCompletionHandler:(id /* block */)arg1;
- (void)_finishCleaningUp;
- (BOOL)canPrepareCreation;
- (BOOL)canStartPreviewOperation;
- (BOOL)_validateStatusForStartingPendingPreviewOperation;
- (void)_addPendingPreviewOperation:(id)arg1;
- (void)_currentOperationDidChangeStatus:(id)arg1;
- (BOOL)_canStartPendingPreviewOperation;
- (void)_startPendingPreviewOperationIfReady;
- (BOOL)canStartExportingCreation;
- (BOOL)_canStartExportingCreationInStatus:(long long)arg1;
- (void)_setExportOperation:(id)arg1;
- (void)_currentExportOperationDidChangeStatus:(id)arg1;
- (void)_startExportOperationIfReady;
- (id)updatePreloadConcurrencyLimit:(unsigned long long)arg1;
- (id)updatePreloadResourceSizeLimit:(unsigned long long)arg1;
- (id)preloadTemplatesByIds:(id)arg1;
- (id)preloadMusicsByIds:(id)arg1;
- (id)stopPreloading;
- (id)_fetchPreloaderWithError:(id *)arg1;
- (BOOL)canCheckTemplateInfo;
- (void)filterIntegralTemplateList:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_checkIntegralTemplateInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)checkCameraTemplateId:(id)arg1 templateVersion:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)reportScene;
- (id)description;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (id)maasCore;
- (void)setMaasCore:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)currentTemplateId;
- (void)setCurrentTemplateId:(id)arg1;
- (id)exportOperation;
- (void)setExportOperation:(id)arg1;
- (id /* block */)prepareCompletionHandler;
- (void)setPrepareCompletionHandler:(id /* block */)arg1;
- (id /* block */)destroyCompletionHandler;
- (void)setDestroyCompletionHandler:(id /* block */)arg1;
- (id)mmContext;
- (id)currentOperation;
- (void)setCurrentOperation:(id)arg1;
- (id)pendingOperationQueue;
- (void)setPendingOperationQueue:(id)arg1;
- (void).cxx_destruct;
@end
