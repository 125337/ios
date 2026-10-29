@interface EmoticonStoreMgr : MMUserService <StoreEmotionExchangeEmotionPackCgiDelegate, EmoticonStoreWeCoinPurchaseLogicDelegate, EmoticonListUpdateLogicDelegate, EmoticonStorePackDownloadLogicDelegate, MMServiceProtocol, PBMessageObserverDelegate, IAPExt, ICdnComMgrExt, IMMLanguageMgrExt>
{
    NSMutableSet * m_requestDetailForPids; // +0x8
    NSMutableDictionary * m_getListEventIdDic; // +0x10
    EmoticonStoreSession * m_session; // +0x18
    NSMutableDictionary * m_skProducts; // +0x20
    NSMutableDictionary * _getDetailCgiDic; // +0x28
    NSMutableDictionary * _m_waitForExchangePackItemDic; // +0x30
    NSOperationQueue * _m_installPackageQueue; // +0x38
    EmoticonListUpdateLogic * _emoticonListUpdateLogic; // +0x40
    NSMutableDictionary * _IAPPurchaseDic; // +0x48
    NSMutableDictionary * _weCoinPurchaseDic; // +0x50
    NSMutableDictionary * _emoticonDownloadDic; // +0x58
    EmoticonStoreMainTabExptSetting * _mainTabExptSetting; // +0x60
    NSString * _mainTabExptConfig; // +0x68
    EmoticonStoreSecondTabExptSetting * _secondTabExptSetting; // +0x70
    NSString * _secondTabExptConfig; // +0x78
    NSMutableDictionary * _downloadingStoreItemCache; // +0x80
}
+ (unsigned int)getIdKeyIdEmoticon;
+ (unsigned int)getIdKeyDownloadFailed;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)emoticonListUpdateLogic;
- (unsigned long long)beginStoreSession:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (id)beginStoreSessionWithItem:(id)arg1;
- (void)endStoreSession:(unsigned int)arg1;
- (BOOL)GetEmotionListFromStore:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (id)mergeSessionForItemList:(id)arg1;
- (void)tryUpdateDetailFromServerWithProductID:(id)arg1 Scence:(unsigned int)arg2 isLimited:(BOOL)arg3;
- (void)callStoreItemUpdateExt:(id)arg1;
- (void)callStoreItemGetDetailFailedFor:(id)arg1;
- (void)processUpdatedItem:(id)arg1;
- (void)updateItemInSession:(id)arg1;
- (void)updateItemInSession:(id)arg1 isFromDetail:(BOOL)arg2;
- (unsigned long long)buyEmoticonItem:(id)arg1;
- (id)getWeCoinPurchaseLogicForItem:(id)arg1;
- (void)onRestoreSuccessForProduct:(id)arg1;
- (void)onRestoreFail;
- (BOOL)reDownloadAndInstallEmoticonItem:(id)arg1 isAutomatic:(BOOL)arg2;
- (BOOL)cancelDownloadAndInstallEmoticonItem:(id)arg1;
- (void)tryInstallEmoticonPackage:(id)arg1;
- (id)getStoreAdvertismentForSession:(unsigned int)arg1;
- (BOOL)updateTailForSessionScence:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (id)updateItemDetailWithProductID:(id)arg1 Scence:(unsigned int)arg2 ShouldLimitFrequency:(BOOL)arg3;
- (void)startBoughtListSession;
- (void)updateBoughtListTailFromServer;
- (id)findEmoticonItemByProductID:(id)arg1;
- (void)notifyDownloadErrorWithItem:(id)arg1;
- (id)rootPathForStoreListCache;
- (id)pathForStoreListCacheWithReqType:(unsigned int)arg1;
- (id)getStoreListCacheWithReqType:(unsigned int)arg1;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned int)arg3;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned int)arg3 withTopNum:(unsigned int)arg4;
- (void)setStoreListCacheWithCache:(id)arg1 withReqType:(unsigned int)arg2;
- (void)saveStoreItemCacheForDownload:(id)arg1;
- (void)onLanguageChange;
- (void)saveEmoticonExpt:(id)arg1 reqType:(unsigned int)arg2;
- (void)saveMainTabExptSetting:(id)arg1;
- (id)mainTabExptSetting;
- (void)saveSecondTabExptSetting:(id)arg1;
- (id)secondTabExptSetting;
- (BOOL)getBoughtListFromServer;
- (void)onPurchaseFailedForItem:(id)arg1;
- (void)onPurchaseSuccessForItem:(id)arg1 paidBefore:(BOOL)arg2;
- (void)tryStartDownloadItem:(id)arg1 WithScene:(int)arg2 isAutomatic:(BOOL)arg3;
- (void)onWeCoinShowFirstBuyTipForItem:(id)arg1;
- (void)onWeCoinPurchasePrepareStartedForItem:(id)arg1;
- (void)onWeCoinPreparePurchaseFailedForItem:(id)arg1;
- (void)onWeCoinConsumeFailedForItem:(id)arg1;
- (void)onWeCoinPurchaseSuccessForItem:(id)arg1 paidBefore:(BOOL)arg2;
- (void)onWeCoinDepositFailedWhenPurchasing:(id)arg1;
- (void)onWeCoinPurchaseCanceledForItem:(id)arg1;
- (void)onWeCoinPurchaseStartedForItem:(id)arg1;
- (void)onWeCoinPurchasePrepareFinishedForItem:(id)arg1;
- (void)onEmoticonExchangeSuccessForItem:(id)arg1;
- (void)onEmoticonExchangeFailForItem:(id)arg1 isNetworkError:(BOOL)arg2;
- (void)onCdnDownloadStartFailedForItem:(id)arg1;
- (void)onCdnDownloadFailForItem:(id)arg1;
- (void)onCdnDownloadSuccessForItem:(id)arg1;
- (id)forceUpdateForListUpdateWithItemList:(id)arg1;
- (void)onGetExptConfig:(id)arg1 reqType:(unsigned int)arg2;
- (id)m_skProducts;
- (void)setM_skProducts:(id)arg1;
- (id)m_session;
- (void)setM_session:(id)arg1;
- (id)getDetailCgiDic;
- (void)setGetDetailCgiDic:(id)arg1;
- (id)m_waitForExchangePackItemDic;
- (void)setM_waitForExchangePackItemDic:(id)arg1;
- (id)m_installPackageQueue;
- (void)setM_installPackageQueue:(id)arg1;
- (void)setEmoticonListUpdateLogic:(id)arg1;
- (id)IAPPurchaseDic;
- (void)setIAPPurchaseDic:(id)arg1;
- (id)weCoinPurchaseDic;
- (void)setWeCoinPurchaseDic:(id)arg1;
- (id)emoticonDownloadDic;
- (void)setEmoticonDownloadDic:(id)arg1;
- (void)setMainTabExptSetting:(id)arg1;
- (id)mainTabExptConfig;
- (void)setMainTabExptConfig:(id)arg1;
- (void)setSecondTabExptSetting:(id)arg1;
- (id)secondTabExptConfig;
- (void)setSecondTabExptConfig:(id)arg1;
- (id)downloadingStoreItemCache;
- (void)setDownloadingStoreItemCache:(id)arg1;
- (void).cxx_destruct;
@end

