@interface BrandAttrMgr : MMUserService <IContactMgrExt, WCPayGetCollAssistMenuCgiDelegate, MMKernelExt, INewSyncExt, MMServiceProtocol, PBMessageObserverDelegate, IMsgExt, MMConfigMgrExt>
{
    NSMutableDictionary * _syncBufList; // +0x8
    BizAttrSyncCtrl * _syncCtrl; // +0x10
    WCPayGetCollAssistMenuCgi * _getCollAssistMenuCgi; // +0x18
    NSObject<OS_dispatch_queue> * _workerThread; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (BOOL)shouldUseNewAttrCGIToUpdate:(id)arg1;
- (BOOL)getBrandInfoByNewAttrCGI:(id)arg1;
- (BOOL)getBrandInfoByNewAttrCGI:(id)arg1 ignoreCheckInterval:(BOOL)arg2;
- (void)onGetContactByNewAttrCGI:(id)arg1;
- (BOOL)fetchProfileFirstPkg:(id)arg1 bizSessionID:(unsigned int)arg2 scene:(unsigned int)arg3 userInfo:(id)arg4 searchClickId:(id)arg5 pageMode:(unsigned int)arg6 bizFromScene:(int)arg7 referer:(id)arg8 interactiveBiz:(id)arg9 isMpManagementScene:(BOOL)arg10;
- (BOOL)fetchProfileNextPkg:(id)arg1 bizSessionID:(unsigned int)arg2 scene:(unsigned int)arg3 action:(int)arg4 offset:(id)arg5 userInfo:(id)arg6 searchClickId:(id)arg7 pageMode:(unsigned int)arg8 bizFromScene:(int)arg9 referer:(id)arg10 interactiveBiz:(id)arg11 isMpManagementScene:(BOOL)arg12;
- (BOOL)_fetchBiz:(id)arg1 bizSessionID:(unsigned int)arg2 scene:(unsigned int)arg3 action:(int)arg4 offset:(id)arg5 pageSize:(unsigned int)arg6 userInfo:(id)arg7 searchClickId:(id)arg8 pageMode:(unsigned int)arg9 bizFromScene:(int)arg10 referer:(id)arg11 interactiveBiz:(id)arg12 isMpManagementScene:(BOOL)arg13;
- (void)onFetchBizProfile:(id)arg1;
- (void)requestModifiyUseUserInfoWithSceneType:(unsigned int)arg1 appid:(id)arg2 JSAPIName:(id)arg3 scopeName:(id)arg4 state:(unsigned int)arg5;
- (void)requestModifyProfileSettingWithBizName:(id)arg1 finderUserName:(id)arg2 setting:(id)arg3;
- (void)requestModifyProfileSettingWithBizName:(id)arg1 finderUserName:(id)arg2 setting:(id)arg3 shouldToast:(BOOL)arg4;
- (void)requestModifyLoveStatusWithBizName:(id)arg1 blockStatus:(unsigned int)arg2;
- (void)handleModBizUseUserInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSetProfileSettingResponse:(id)arg1;
- (void)handleBizLoveInteractionResponse:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onMMDynamicConfigUpdated;
- (unsigned long long)loadRequestIntervalFromDynamicConfig;
- (void)onDeleteContact:(id)arg1;
- (void)onNewSyncBatchModContacts:(id)arg1;
- (void)updateBrandContact:(id)arg1 withSyncBuf:(id)arg2;
- (void)deleteSyncBuf:(id)arg1;
- (void)deleteSyncBufferWithBrandUserNameList:(id)arg1;
- (void)tryLoadSyncBufList;
- (void)asyncQueue_saveBufCache;
- (void)loadBufCache;
- (void)tryLoadSyncCtrl;
- (void)saveCtrlInfo;
- (void)loadCtrlInfo;
- (void)updateCollAssistMenuFromSvr;
- (void)onGetCollAssistMenuCgiResponse:(id)arg1;
- (void)onAuthOK;
- (BOOL)trySetCurrentLanguageAsLastLanguage;
- (BOOL)isLanguageChanged;
- (id)getCollAssistMenuCgi;
- (void)setGetCollAssistMenuCgi:(id)arg1;
- (id)workerThread;
- (void)setWorkerThread:(id)arg1;
- (void).cxx_destruct;
@end
