@interface EmoticonPackageStateMgr : MMUserService <MMServiceProtocol, EmoticonStoreMgrExt, EmoticonStoreItemExt, IEmoticonPackageMgrExt>
{
    NSMutableDictionary * m_dicState; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (unsigned long long)buyEmoticonItem:(id)arg1;
- (void)downloadHardCodePackage:(id)arg1;
- (void)downloadEmoticonItem:(id)arg1 isAutomatic:(BOOL)arg2;
- (void)cancelDownloadItem:(id)arg1;
- (float)getDownloadProgress:(id)arg1;
- (void)addOrReplaceItem:(id)arg1 withState:(long long)arg2;
- (long long)getStateByItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)OnBuyEmoticonItemStarted:(id)arg1;
- (void)OnBuyItemFirstBuyTipShow:(id)arg1;
- (void)OnBuyItemPrepareStarted:(id)arg1;
- (void)OnBuyEmoticonItemPrepareFinished:(id)arg1;
- (void)OnBuyEmoticonItemSuccess:(id)arg1 paidBefore:(BOOL)arg2;
- (void)OnBuyEmoticonItemFailed:(id)arg1;
- (void)OnBuyEmoticonItemCanceled:(id)arg1;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)OnEmoticonStoreItemDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnEmoticonStoreItemDownloadFinished:(id)arg1;
- (void)OnEmoticonStoreItemDownloadFailed:(id)arg1;
- (void)resetState:(id)arg1;
- (void)OnEmoticonStoreItemGetProductFinished:(id)arg1;
- (void)OnEmoticonStoreItemInstallStarted:(id)arg1;
- (void)OnEmoticonStoreItemInstallFinished:(id)arg1;
- (void)OnEmoticonStoreItemInstallFailed:(id)arg1;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(BOOL)arg2;
- (id)m_dicState;
- (void)setM_dicState:(id)arg1;
- (void).cxx_destruct;
@end
