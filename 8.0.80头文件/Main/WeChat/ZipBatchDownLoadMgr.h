@interface ZipBatchDownLoadMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _fileKeyToPathMap; // +0x8
    NSMutableDictionary * _fileKeyToInfoMap; // +0x10
    NSMutableDictionary * _fileKeyToCompletionMap; // +0x18
}
+ (id)filekeyWithFileId:(id)arg1 isFav:(BOOL)arg2;
+ (id)convertRespToDict:(id)arg1;
- (id)init;
- (BOOL)operateSaveWithFileId:(id)arg1 operation:(long long)arg2 isFav:(BOOL)arg3;
- (void)startBacthSave:(id)arg1 withAppid:(id)arg2 withAppUuId:(unsigned int)arg3 isFav:(BOOL)arg4 targetPath:(id)arg5 downloadResultCallBack:(id /* block */)arg6 localSaveResultCallBack:(id /* block */)arg7 failCallBack:(id /* block */)arg8 successCallBack:(id /* block */)arg9 progressCallBack:(id /* block */)arg10;
- (void)processDownloadSave:(id)arg1 targetPath:(id)arg2 downloadResultCallBack:(id /* block */)arg3 progress:(id /* block */)arg4 successHandler:(id /* block */)arg5 failHandler:(id /* block */)arg6;
- (void)startCdnDownloadWithFileInfo:(id)arg1 path:(id)arg2 progress:(id /* block */)arg3 complete:(id /* block */)arg4;
- (void)processImageFromLocal:(id)arg1 completion:(id /* block */)arg2;
- (void)processVideoFromLocal:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAllDownloadsAndCleanup;
- (void)sendProgressCallBack:(id)arg1 complete:(BOOL)arg2 callBlock:(id /* block */)arg3;
- (void)processLocalIDSave:(id)arg1 targetPath:(id)arg2 appid:(id)arg3 appUuid:(unsigned int)arg4 localSaveResultCallBack:(id /* block */)arg5 complete:(id /* block */)arg6;
- (void)localIDFileAddToRealPath:(id)arg1 targetPath:(id)arg2 name:(id)arg3 fileType:(id)arg4 appId:(id)arg5 appUUID:(unsigned int)arg6 completion:(id /* block */)arg7;
- (id)buildUniqueFilePathInDir:(id)arg1 fileName:(id)arg2;
- (id)CopyFileFromOriginPath:(id)arg1 targetPath:(id)arg2;
- (id)fileKeyToPathMap;
- (void)setFileKeyToPathMap:(id)arg1;
- (id)fileKeyToInfoMap;
- (void)setFileKeyToInfoMap:(id)arg1;
- (id)fileKeyToCompletionMap;
- (void)setFileKeyToCompletionMap:(id)arg1;
- (void).cxx_destruct;
@end
