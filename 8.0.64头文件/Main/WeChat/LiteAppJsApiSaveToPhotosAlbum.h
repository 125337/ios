@interface LiteAppJsApiSaveToPhotosAlbum : LiteAppJsApi <MMLiteAppDownloadMgrDelegate>
{
    NSMutableDictionary * _result; // +0x20
    NSDictionary * _tailInfo; // +0x28
    BOOL _useLocalId; // +0x30
    MMLiteAppDownloadMgr * _downloadMgr; // +0x38
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)getFileDataFromCDN:(id)arg1 filePath:(id)arg2;
- (void)getFileDataFromLocal:(id)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)_onSaveImageFinishedWithSuccess:(BOOL)arg1 placeHolder:(id)arg2 error:(id)arg3;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (void)addTailInfo:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (void).cxx_destruct;
@end
