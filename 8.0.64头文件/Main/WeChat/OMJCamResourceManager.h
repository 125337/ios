@interface OMJCamResourceManager : NSObject
{
    SharedPtr<XMJCamResourceManager> _backingResourceManager; // +0x8
}
+ (BOOL)registerLocalTemplateWithTemplateID:(id)arg1 version:(unsigned long long)arg2 filePath:(id)arg3 environmentCachesDirectory:(id)arg4 error:(id *)arg5;
+ (BOOL)isLocalTemplateExistsWithTemplateID:(id)arg1 version:(unsigned long long)arg2 environmentCachesDirectory:(id)arg3;
- (id)initWithBackingResourceManager:(const void *)arg1;
- (BOOL)isBuiltinCommonResourcesLoaded;
- (int)loadBuiltinCommonResourcesWithCompletionHandler:(id /* block */)arg1;
- (int)loadTemplateWithTemplateID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (int)loadTemplateWithTemplateID:(id)arg1 loadPriority:(long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelLoadWithTaskID:(int)arg1;
- (void)cancelAll;
- (BOOL)isTemplateLoadedWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (id)getTemplateInfoWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (BOOL)removeTemplateWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)loadMaterial:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (int)loadMusicWithMusicID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (int)loadMusicWithMusicID:(id)arg1 progressHandler:(id /* block */)arg2 musicCompletionHandler:(id /* block */)arg3;
- (void)cancelLoadMusicWithTaskID:(int)arg1;
- (BOOL)isMusicLoadedWithID:(id)arg1;
- (void)registerLocalMusicWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (id)musicFilePathWithID:(id)arg1;
- (void)selectAndLoadMusicWithMusicIDs:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)selectAndLoadMusicWithMusicIDs:(id)arg1 progressHandler:(id /* block */)arg2 musicCompletionHandler:(id /* block */)arg3;
- (void)cancelSelectAndLoadMusic;
- (SharedPtr<XMJCamResourceManager>)backingResourceManager;
- (void)setBackingResourceManager:(SharedPtr<XMJCamResourceManager>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
