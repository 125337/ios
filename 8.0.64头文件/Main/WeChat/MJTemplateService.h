@interface MJTemplateService : MMUserService <MMServiceProtocol>
{
    MMLRUCache * _templateCacheFromSvr; // +0x8
    MMLRUCache * _templateCacheFromSDK; // +0x10
    MMLRUCache * _templateListOfSceneCacheFromSvr; // +0x18
    NSString * _currentCameraTemplatePreloadTaskId; // +0x20
    NSURLSessionDownloadTask * _currentTemplateDownloadTask; // +0x28
    NSMutableArray * _taskQueue; // +0x30
    NSMutableArray * _highPriorityTaskQueue; // +0x38
}
+ (id)localPathWithUrl:(id)arg1;
+ (id)_cachePreviewFilePathFromUrlStr:(id)arg1;
- (void)getTemplateResourceWithScene:(unsigned long long)arg1 successful:(id /* block */)arg2 failed:(id /* block */)arg3;
- (void)startDownloadMaterialResource:(id)arg1 successful:(id /* block */)arg2;
- (void)downloadPreviewAnimForCache:(id)arg1 completion:(id /* block */)arg2;
- (void)preloadCameraTemplateResourceIfNeeded:(id)arg1;
- (void)preloadCameraTemplateResourceIfNeeded:(id)arg1 isHighPriority:(BOOL)arg2;
- (void)_startPreloadTemplateResouceWithTemplateInfo:(id)arg1 isHighPriority:(BOOL)arg2;
- (void)_safeAddTask:(id)arg1 inQueue:(id)arg2;
- (void)removeTask:(id)arg1;
- (void)checkQueue;
- (BOOL)checkHasPreloadTemplateResourceWithTemplateItem:(id)arg1;
- (BOOL)checkHasPreloadTemplateResourceWithTemplateInfo:(id)arg1;
- (BOOL)checkTemplateResourceHasResignToMaasSDK:(id)arg1;
- (void)registerTemplateResourceToMaasSDKWithTemplateInfo:(id)arg1 localPath:(id)arg2;
- (void)cancelAllTemplateResourceDownloadTask;
- (void)resumeAllTemplateResourceDownloadTask;
- (void)finderMediaVideoDownloadQueueChange;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)fetchTemplateListWithPreviousPageBuffer:(id)arg1 options:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)fetchTemplateInfoWithID:(id)arg1 type:(unsigned long long)arg2 scene:(unsigned long long)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)fetchTemplateInfoWithID:(id)arg1 type:(unsigned long long)arg2 scene:(unsigned long long)arg3 notUseCache:(BOOL)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
- (void)fetchTemplateInfoWithShortURL:(id)arg1 type:(unsigned long long)arg2 scene:(unsigned long long)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)getCameraVideoTemplateListWithPagebuf:(id)arg1 scene:(unsigned long long)arg2 finderUserName:(id)arg3 successfulBlock:(id /* block */)arg4 failedBlock:(id /* block */)arg5;
- (void)getCameraVideoTemplateListWithPagebuf:(id)arg1 scene:(unsigned long long)arg2 finderUserName:(id)arg3 preFetchType:(unsigned long long)arg4 optionalParams:(id)arg5 successfulBlock:(id /* block */)arg6 failedBlock:(id /* block */)arg7;
- (void)getImageTemplateListWithPagebuf:(id)arg1 scene:(unsigned long long)arg2 finderUserName:(id)arg3 preFetchType:(unsigned long long)arg4 successfulBlock:(id /* block */)arg5 failedBlock:(id /* block */)arg6;
- (id)getCachedCameraVideoTemplateList;
- (BOOL)getCachedShouldLandOnEmptyTemplate;
- (void)getFavTemplateListWithPageBuf:(id)arg1 preFetchType:(unsigned long long)arg2 finderUserName:(id)arg3 successfulBlock:(id /* block */)arg4 failedBlock:(id /* block */)arg5;
- (id)templateKeyWithTemplateId:(id)arg1 type:(unsigned long long)arg2;
- (id)templateCachedFromSvrForTemplateId:(id)arg1 type:(unsigned long long)arg2;
- (void)updateTemplateFromSvrCached:(id)arg1 withTemplateId:(id)arg2 type:(unsigned long long)arg3;
- (id)templateCachedFromSDKForTemplateId:(id)arg1;
- (void)updateTemplateFromSDKCached:(id)arg1 withTemplateId:(id)arg2;
- (id)availableTemplateSvrDataCacheOfScene:(unsigned long long)arg1;
- (void)updateTemplateListSvrDataCacheWithTemplateList:(id)arg1 categoryList:(id)arg2 pageBuffer:(id)arg3 validityTerm:(unsigned int)arg4 forScene:(unsigned long long)arg5;
- (id)templateCacheFromSvr;
- (id)templateCacheFromSDK;
- (id)templateListOfSceneCacheFromSvr;
- (id)taskQueue;
- (id)highPriorityTaskQueue;
- (void)requestILinkAuthorizationWithSuccessBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)setTemplateCacheFromSvr:(id)arg1;
- (void)setTemplateCacheFromSDK:(id)arg1;
- (void)setTemplateListOfSceneCacheFromSvr:(id)arg1;
- (id)currentCameraTemplatePreloadTaskId;
- (void)setCurrentCameraTemplatePreloadTaskId:(id)arg1;
- (id)currentTemplateDownloadTask;
- (void)setCurrentTemplateDownloadTask:(id)arg1;
- (void)setTaskQueue:(id)arg1;
- (void)setHighPriorityTaskQueue:(id)arg1;
- (void).cxx_destruct;
@end
