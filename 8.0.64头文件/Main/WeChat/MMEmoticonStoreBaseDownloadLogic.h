@interface MMEmoticonStoreBaseDownloadLogic : NSObject <IEmoticonPackageStateMgrExt, IEmoticonPackageMgrExt, EmoticonStoreItemExt, MMEmoticonStoreDownloadObserver, MMEmoticonStoreDownloadUIHelper>
{
    BOOL _isReleaseBuild; // +0x8
    int _downloadStatus; // +0xc
    EmoticonStoreItem * _storeItem; // +0x10
}
- (id)init;
- (void)updateStoreItem:(id)arg1;
- (void)setDownloadStatus:(int)arg1;
- (void)onDownloadStatusChangeTo:(int)arg1;
- (void)onDownloadProgress:(float)arg1;
- (void)realDoBuyItem;
- (void)onState:(long long)arg1;
- (void)checkEmoticonBuyRet:(unsigned long long)arg1;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(BOOL)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(long long)arg2;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnBuyItemFirstBuyTipShow:(id)arg1;
- (void)OnBuyItemPrepareStarted:(id)arg1;
- (void)OnBuyItemPrepareFinished:(id)arg1;
- (void)OnBuyItemStarted:(id)arg1;
- (void)OnBuyItemSuccess:(id)arg1 paidBefore:(BOOL)arg2;
- (void)OnBuyItemFailed:(id)arg1;
- (void)OnBuyItemCancel:(id)arg1;
- (id)curViewController;
- (void)startLoading;
- (void)stopLoading;
- (void)stopLoadingOKWithWoring:(id)arg1;
- (void)stopLoadingIfNeededForPid:(id)arg1;
- (void)stopLoadingOKIfNeededForPid:(id)arg1 withWording:(id)arg2;
- (void)showAlertWith:(id)arg1;
- (id)storeItem;
- (void)setStoreItem:(id)arg1;
- (int)downloadStatus;
- (BOOL)isReleaseBuild;
- (void)setIsReleaseBuild:(BOOL)arg1;
- (void).cxx_destruct;
@end
