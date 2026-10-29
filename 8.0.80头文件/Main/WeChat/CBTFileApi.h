@interface CBTFileApi : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTFileApiCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTFileApiDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTFileApiDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getMbCachePathAsync:(id /* block */)arg1;
- (void)getMbCachePathAsync:(id)arg1 completion:(id /* block */)arg2;
- (id)getCoopFileCachePath;
- (id)getMultiChatPreviewCachePath;
- (id)getAsstFileCachePathByFileId:(id)arg1 fileAesKey:(id)arg2 msgSvrId:(long long)arg3 fileExt:(id)arg4;
- (void)checkReceivedFileAsync:(id)arg1 aesKey:(id)arg2 appType:(int)arg3 fileType:(int)arg4 fileName:(id)arg5 fileSize:(unsigned long long)arg6 md5:(id)arg7 completion:(id /* block */)arg8;
- (void)checkReceivedFileAsync:(id)arg1 aesKey:(id)arg2 appType:(int)arg3 fileType:(int)arg4 fileName:(id)arg5 fileSize:(unsigned long long)arg6 md5:(id)arg7 on:(id)arg8 completion:(id /* block */)arg9;
- (void)copyFileAsync:(id)arg1 srcFileType:(int)arg2 dstFileType:(int)arg3 sourceAppType:(int)arg4 rawSize:(unsigned long long)arg5 rawFileMd5:(id)arg6 completion:(id /* block */)arg7;
- (void)copyFileAsync:(id)arg1 srcFileType:(int)arg2 dstFileType:(int)arg3 sourceAppType:(int)arg4 rawSize:(unsigned long long)arg5 rawFileMd5:(id)arg6 on:(id)arg7 completion:(id /* block */)arg8;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
