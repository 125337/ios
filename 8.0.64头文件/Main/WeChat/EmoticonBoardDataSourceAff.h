@interface EmoticonBoardDataSourceAff : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonBoardDataSourceAffCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonBoardDataSourceAffDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonBoardDataSourceAffDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getEmoticonBoardDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getEmoticonBoardDataAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)isStorePackageDownloadedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)isStorePackageDownloadedAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getEmoticonListWithPageWrapAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getEmoticonListWithPageWrapAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)isCustomEmoticonRecoverCompletedAsync:(id /* block */)arg1;
- (void)isCustomEmoticonRecoverCompletedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)isCameraEmoticonRecoverCompletedAsync:(id /* block */)arg1;
- (void)isCameraEmoticonRecoverCompletedAsync:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isCustomEmoticonRecoverActive;
- (BOOL)isCameraEmoticonRecoverActive;
- (void)trySyncCustomEmoticonAnotherPart;
- (void)trySyncCameraEmoticonAnotherPart;
- (void)downloadPackageHighPrivilege:(id)arg1;
- (void)getEmoticonPackCoverLocalImgAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getEmoticonPackCoverLocalImgAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getEmoticonThumbImgAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getEmoticonThumbImgAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getEmoticonFilePathAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getEmoticonFilePathAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getEmoticonDescAsync:(id)arg1 md5:(id)arg2 completion:(id /* block */)arg3;
- (void)getEmoticonDescAsync:(id)arg1 md5:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
