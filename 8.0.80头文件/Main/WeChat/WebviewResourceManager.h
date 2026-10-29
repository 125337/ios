@interface WebviewResourceManager : MMUserService <MMServiceProtocol, WebResourceCDNUploadHelperDelegate, WebResourceCDNDownloadHelperDelegate>
{
    NSRecursiveLock * _lock; // +0x8
    NSMutableArray * _resItemArray; // +0x10
    WebResourceCDNUploadHelper * _cdnUploadHelper; // +0x18
    WebResourceCDNDownloadHelper * _cdnDownloadHelper; // +0x20
    NSMutableDictionary * _recordPMSDic; // +0x28
    BOOL _isEnableWebHostShow; // +0x30
    unsigned int _webHostRuleVersion; // +0x34
    NSMutableSet * _weixinHostSet; // +0x38
    NSMutableDictionary * _tencentHostDic; // +0x40
    NSMutableSet * _weixinHostRegSet; // +0x48
    NSMutableDictionary * _tencentHostRegDic; // +0x50
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getUserWebResourceRootDir;
- (BOOL)loadResItemArray;
- (void)saveResItemArray;
- (BOOL)loadRecordPermissionDic;
- (void)saveRecordPermissionDic;
- (id)getLocalResourceId;
- (id)getLocalResourceIdByPath:(id)arg1;
- (id)getLocalPathByResourceId:(id)arg1;
- (id)getLocalPathByResourceId:(id)arg1 ext:(id)arg2;
- (id)getLocalVideoPathByResourceId:(id)arg1;
- (id)getLocalCustomFilePath:(id)arg1 originPath:(id)arg2;
- (void)stopAllNetworkTask;
- (void)addLocalImages:(id)arg1;
- (void)addLocalImageResources:(id)arg1;
- (id)addImage:(id)arg1;
- (id)addMediaData:(id)arg1 mediaType:(id)arg2;
- (id)addMediaFile:(id)arg1 mediaType:(id)arg2 ext:(id)arg3;
- (void)addLocalImagesWithOriginalSize:(id)arg1;
- (void)addLocalImagesWithOriginalSize:(id)arg1 originalIndexes:(id)arg2;
- (void)addLocalImagesWithOriginalSize:(id)arg1 originImageConfig:(id)arg2;
- (void)addItemToResArray:(id)arg1;
- (void)removeImageWithLocalId:(id)arg1;
- (void)asyncNotifyResourceDownloadFinish:(id)arg1;
- (BOOL)downloadImage:(id)arg1 AppId:(id)arg2;
- (void)addRecordResource:(id)arg1;
- (BOOL)uploadVoice:(id)arg1;
- (BOOL)downloadVoice:(id)arg1 AppId:(id)arg2;
- (BOOL)addVideoResource:(id)arg1;
- (BOOL)addMiniGameVideoItemResourceByCopyFile:(id)arg1;
- (BOOL)uploadVideo:(id)arg1;
- (void)saveLocalImageFinished:(id)arg1;
- (void)saveLocalImageFinished:(id)arg1 originalIndexes:(id)arg2;
- (void)addCustomResItem:(id)arg1;
- (BOOL)addCustomFileResource:(id)arg1;
- (BOOL)addCustomFileResource:(id)arg1 isCopy:(BOOL)arg2;
- (id)getResItemByLocalId:(id)arg1;
- (BOOL)uploadLocalImage:(id)arg1;
- (BOOL)uploadLocalResItem:(id)arg1;
- (BOOL)isEnableWebHostShow;
- (id)getWebHostRule:(id)arg1;
- (id)matchWebHostRule:(id)arg1;
- (void)onItemUploadCDNFinished:(int)arg1 Item:(id)arg2;
- (void)onItemUploadProgress:(int)arg1 Item:(id)arg2;
- (void)onItemUploadCDNFinishedWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)onItemUploadProgressWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)onItemCDNDownloadFinished:(int)arg1 Item:(id)arg2;
- (void)onItemDownloadProgress:(int)arg1 Item:(id)arg2;
- (void)onCallBackCheckSuccessAsync:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4;
- (void)onCallBackSuccessAsync:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4;
- (void)onCallBackFailAsync:(int)arg1 errCode:(int)arg2 projectId:(id)arg3 name:(id)arg4 version:(int)arg5 scene:(int)arg6;
- (void)updateWebHostRule;
- (id)calcHostReg:(id)arg1;
- (void)setIsEnableWebHostShow:(BOOL)arg1;
- (unsigned int)webHostRuleVersion;
- (void)setWebHostRuleVersion:(unsigned int)arg1;
- (id)weixinHostSet;
- (void)setWeixinHostSet:(id)arg1;
- (id)tencentHostDic;
- (void)setTencentHostDic:(id)arg1;
- (id)weixinHostRegSet;
- (void)setWeixinHostRegSet:(id)arg1;
- (id)tencentHostRegDic;
- (void)setTencentHostRegDic:(id)arg1;
- (void).cxx_destruct;
@end
