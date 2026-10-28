@interface EmoticonLensMgr : MMUserService <EmoticonLensListCgiDelegate, EmoticonLensInfoBatchCgiDelegate, EmoticonLensIconDownloaderDelegate, ICdnComMgrExt, MMServiceProtocol>
{
    EmoticonLensLocalData * _localData; // +0x8
    EmoticonLensListCgi * _lensListCgi; // +0x10
    EmoticonLensInfoBatchCgi * _requestLensInfoCgi; // +0x18
    EmoticonLensIconDownloader * _iconDownloader; // +0x20
}
- (id)init;
- (id)getLocalLensList;
- (id)getRecentUsedList;
- (void)addToRecentUse:(id)arg1;
- (id)getIconForLens:(id)arg1;
- (void)setRecommendData:(id)arg1;
- (void)requestLensList;
- (BOOL)canLoadMore;
- (void)requestLensListNextPage;
- (void)requestLensInfoWithId:(id)arg1;
- (void)downloadLensIcon:(id)arg1;
- (void)tryUpdateHistoryRecords;
- (void)downloadLensPackage:(id)arg1;
- (id)getLensPackageFor:(id)arg1;
- (void)loadLocalData;
- (void)saveToLocal;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)onRequestLensListSuccessWithLens:(id)arg1 isFirstPage:(BOOL)arg2;
- (void)onRequestLensListFail;
- (void)onEmoticonLensInfoSuccess:(id)arg1 forLensId:(id)arg2 finish:(BOOL)arg3;
- (void)onEmoticonLensInfoInvalid:(id)arg1 errType:(long long)arg2;
- (void)onEmoticonLensInfoFail:(id)arg1;
- (void)onIconDownloaderSuccess:(id)arg1 filePath:(id)arg2;
- (void)onIconDownloaderFail:(id)arg1;
- (id)packagePathForLensId:(id)arg1;
- (id)packageZipPathForLensId:(id)arg1;
- (id)lensIconPathForLens:(id)arg1;
- (id)configDataFilePath;
- (id)emoticonInfoForLens:(id)arg1;
- (void)clearLensResource:(id)arg1;
- (id)requestLensInfoCgi;
- (id)lensListCgi;
- (id)localData;
- (void)setLocalData:(id)arg1;
- (void)setLensListCgi:(id)arg1;
- (void)setRequestLensInfoCgi:(id)arg1;
- (id)iconDownloader;
- (void)setIconDownloader:(id)arg1;
- (void).cxx_destruct;
@end
