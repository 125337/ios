@interface OMJMaterialManager : NSObject
{
    SharedPtr<XMJMaterialManager> _backingMaterialManager; // +0x8
}
- (long long)mj_requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (long long)mj_requestMaterialPackWithScene:(unsigned long long)arg1 extraParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)mj_loadMaterial:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (long long)mj_loadMaterial:(id)arg1 version:(long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)mj_waitLoadingLocalMaterialWithCompletionHandler:(id /* block */)arg1;
- (id)initWithBackingMaterialManager:(const void *)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 extraParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelMaterialPackTask:(long long)arg1;
- (BOOL)isMaterialLoaded:(id)arg1;
- (BOOL)isMaterialLoaded:(id)arg1 version:(long long)arg2;
- (long long)loadMaterial:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (long long)loadMaterial:(id)arg1 version:(long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (void)cancelAll;
- (void)waitLoadingLocalMaterialWithCompletionHandler:(id /* block */)arg1;
- (BOOL)registerLocalStickerMaterialWithMaterialID:(id)arg1 version:(long long)arg2 zipFilePath:(id)arg3 error:(id *)arg4;
- (BOOL)isLocalMaterialLoaded:(id)arg1;
- (BOOL)isLocalMaterialLoaded:(id)arg1 version:(long long)arg2;
- (id)getColorStyleMaterialInfosOfMaterial:(id)arg1;
- (id)getMaterialInfoWithMaterialID:(id)arg1;
- (BOOL)importResourceFromLocalFileAtPath:(id)arg1 resourceID:(id)arg2;
- (SharedPtr<XMJMaterialManager>)backingMaterialManager;
- (void)setBackingMaterialManager:(SharedPtr<XMJMaterialManager>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
