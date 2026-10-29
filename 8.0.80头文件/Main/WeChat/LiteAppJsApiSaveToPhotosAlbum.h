@interface LiteAppJsApiSaveToPhotosAlbum : LiteAppJsApi <MMLiteAppDownloadMgrDelegate>
{
    NSMutableDictionary * _result; // +0x20
    NSDictionary * _tailInfo; // +0x28
    BOOL _useLocalId; // +0x30
    BOOL _isLivePhotoMode; // +0x31
    NSString * _livePhotoAppId; // +0x38
    NSString * _livePhotoCoverPath; // +0x40
    NSString * _livePhotoVideoPath; // +0x48
    BOOL _livePhotoCoverPending; // +0x50
    BOOL _livePhotoVideoPending; // +0x51
    BOOL _livePhotoTerminated; // +0x52
    NSString * _livePhotoCompatVideoPath; // +0x58
    NSString * _livePhotoCompatCoverPath; // +0x60
    MMLiteAppDownloadMgr * _downloadMgr; // +0x68
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)getFileDataFromCDN:(id)arg1 filePath:(id)arg2;
- (void)getFileDataFromLocal:(id)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)_onSaveImageFinishedWithSuccess:(BOOL)arg1 placeHolder:(id)arg2 error:(id)arg3;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (void)addTailInfo:(id)arg1;
- (void)_enterLivePhotoMode:(id)arg1 param:(id)arg2;
- (id)_resolveCoverLocalPathForFilePath:(id)arg1 localId:(id)arg2 appId:(id)arg3;
- (void)_kickLivePhotoCdnDownload:(id)arg1 resourceName:(id)arg2 appId:(id)arg3;
- (void)_onLivePhotoDownloadComplete:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (void)_tryComposeLivePhotoIfReady;
- (id)_avCompatPathForOriginalPath:(id)arg1 defaultExt:(id)arg2 outCompatPathRef:(id *)arg3;
- (void)_cleanupAVCompatFiles;
- (void)_onLivePhotoMMAlbumServiceFail:(id)arg1 reportDic:(id)arg2;
- (void)_onLivePhotoSavedSuccess:(id)arg1;
- (void)_livePhotoFailWithCode:(id)arg1 reason:(id)arg2;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (void).cxx_destruct;
@end
