@interface WCRedEnvelopesSendControlLogic : WCRedEnvelopesControlLogic <MMWebViewDelegate, MMTipsViewControllerDelegate, WCRedEnvelopesSelectSkinViewControllerDelegate, WCRedEnvelopesExpiredSkinViewControllerDelegate, WCRedEnvelopesGetShowResourcesCgiDelegate, WCRedEnvelopesConfirmShowResourcesCgiDelegate, WCPayPayMoneyLogicDelegate, WCRedEnvelopesReportCgiDelegate, WCRedEnvelopesDeleteResourceCgiDelegate, WCRedEnvelopesCheckAndUseTimeLimitPromoCgiDelegate, MMUseCaseCallback, WCPaySelectChatroomMemberViewControllerDelegate, WCPaySingleDownloadLogicExt, GetCoverSetRedDotInfoCgiDelegate, WCRedEnvelopesGetFullCoverInfoCgiDelegate, GetDefaultRedPacketSkinCgiDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesWelcomePageViewControllerDelegate, WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCActionSheetDelegate, IWCPayControlLogicExt, WCRedEnvelopesMadeHBSuccessViewDelegate, ContactsCreateChatRoomLogicDelegate>
{
    WCPayPayMoneyLogic * m_payMoneyLogic; // +0x38
    WCPayControlData * oPayData; // +0x40
    int m_scene; // +0x48
    unsigned long long m_enMadeRedEnvelopesType; // +0x50
    WCRedEnvelopesMadeHBSuccessView * m_oWCRedEnvelopesMadeHBSuccessView; // +0x58
    ContactsCreateChatRoomLogic * createChatRoomLogic; // +0x60
    BOOL _isUserConfirmJump; // +0x68
    BOOL _isNeedReturnToSession; // +0x69
    BOOL _isRetryOperationWhenPrepay; // +0x6a
    BOOL _bIsFromLoadingMoreInvalidData; // +0x6b
    BOOL _bIsFromWebScene; // +0x6c
    id <WCRedEnvelopesSendControlLogicDelegate> _m_delegate; // +0x70
    NSString * _curAlertRightUrl; // +0x78
    WCRedEnvelopesConfirmShowResourcesCgi * _confirmShowResourcesCgi; // +0x80
    WCRedEnvelopesDeleteResourceCgi * _deleteShowResourceCgi; // +0x88
    WCRedEnvelopesReportCgi * _reportWxhbCgi; // +0x90
    HbEnvelopSource * _selectedConfirmHbResource; // +0x98
    NSMutableArray * _downloadHbSourceQueue; // +0xa0
    NSDictionary * _lastReqKeyStruck; // +0xa8
    WCPayJumpRemindControlLogic * _jumpRemindLogic; // +0xb0
    long long _lastUnpayReason; // +0xb8
    NSString * _uniqueId; // +0xc0
    WCRedEnvelopesGreetingControlLogic * _m_sendGreetingHBLogic; // +0xc8
    NSString * _reportSessionId; // +0xd0
    NSString * _baiNianEntryName; // +0xd8
    GetDefaultRedpacketResponse * _defaultRedpacketCacheResponse; // +0xe0
    MemoryMappedKV * _skinNewLogicMMKV; // +0xe8
}
- (id)getData;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 Scene:(int)arg2 RedEnvelopesType:(unsigned long long)arg3;
- (id)userInfoCachePath;
- (BOOL)shouldRequestGetDefaultSkinCgi;
- (int)requestGetDefaultSkinScene;
- (void)QueryRedEnvelopesUserInfo:(id)arg1;
- (void)QueryRedEnvelopesUserInfoNoCache:(id)arg1;
- (void)GenRedEnvelopesPayRequest:(id)arg1;
- (unsigned long long)getRoomContactMemCount;
- (void)startLogic;
- (void)startGetDefualtRedPacketSkinCgi:(BOOL)arg1 scene:(int)arg2;
- (void)startGetDefualtRedPacketSkinCgi:(BOOL)arg1;
- (BOOL)checkLocalCacheIsExipredAndRefresh;
- (void)onGetDefaultRedPacketSkinCgiResponse:(id)arg1 isUseCache:(BOOL)arg2;
- (void)onGetDefaultRedPacketSkinCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)getQueryRedEnvelopesRequestDict;
- (BOOL)isRedskinUseNewLogic;
- (id)getRedSkinNewLogicMMKV;
- (void)saveRedskinIsUseNewLogic:(BOOL)arg1;
- (void)refreshViewController;
- (id)convertHbEnvelopSourceNewIntoHbEnvelopSource:(id)arg1;
- (id)getCurrentMakeRedViewController;
- (void)internalStartLogicWithSimpleSessionScene;
- (void)internalStartLoigcWithGroupSessionScene:(id)arg1;
- (void)toGroupRedEnvelopes;
- (BOOL)shouldShowWeiShiEntry:(id)arg1;
- (BOOL)shouldShowLiveStreamEntry:(id)arg1;
- (id)weiShiConfig;
- (id)weiShiWordingConfig;
- (id)titleForWeiShi;
- (id)descForWeiShi;
- (id)schemeForWeishi;
- (BOOL)disableShareForWeishiUrl;
- (id)urlForWeishi;
- (id)appstoreForWeishi;
- (long long)maxCountForWeishiUrl;
- (id)maxCountStoreKeyForWeishiUrl;
- (BOOL)shouldShowHongBaoAbtestEntry;
- (void)stopLogic;
- (void)OnWCRedEnvelopesWelcomePageViewControllerBack;
- (void)OnWCRedEnvelopesWelcomePageViewControllerMyRedEnvelopesList;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkAndGoWeishi;
- (void)OnWCRedEnvelopesWelcomePageViewControllerSelectRadmonRedEnvelopes;
- (void)OnWCRedEnvelopesWelcomePageViewControllerSelectNormalRedEnvelopes;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)OnMakeWCRedEnvelopesButtonClick:(id)arg1;
- (void)GenLiveStreamRedEnvelopesPayRequest:(id)arg1;
- (void)OnClickNotReceivedButton;
- (void)OnClickViewHBHistory;
- (BOOL)canShowExclusiveHbModeEntry;
- (void)onClickSelectMemberView;
- (void)gotoSelectSessionViewController;
- (void)onPayMoneyLogicDidStop;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnGotoRootViewController;
- (void)showSetPwdTipsView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnConfirmCreateChatRoomAndSendMessageSelectSessionViewController;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)GotoNotReceivedListLogic;
- (void)OnSelectMutilContactsButton;
- (void)OnCreateRoom:(id)arg1;
- (void)OnWCRedEnvelopesSendSuccessViewAnimationDidStop;
- (void)WCRedEnvelopesMadeHBSuccessViewBack;
- (void)WCRedEnvelopesMadeHBSuccessViewSendHB;
- (BOOL)gotoViewController:(id)arg1;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 isCahceInfo:(BOOL)arg2 Error:(id)arg3;
- (void)startGetSkinCoverRedDotInfoCgi;
- (void)onGetCoverSetRedDotInfoCgiResponse:(id)arg1;
- (void)handleCoverReddotInfo:(id)arg1;
- (void)saveLocalRedDotInfoAndRefreshPage:(id)arg1;
- (void)preDownloadHbShowResourceFromCoverInfoDetail:(id)arg1;
- (void)preDownloadHbShowResource:(id)arg1;
- (void)startDownloadDynmiacPagWithUrl:(id)arg1 info:(id)arg2;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 extraInfo:(id)arg3 filePath:(id)arg4 totalLength:(unsigned long long)arg5;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)handleShouldRelpaceCoverInfoDetail;
- (void)startGetFullCoverInfoDetail:(id)arg1;
- (void)onGetFullCoverInfoCgiResp:(id)arg1 messageWrap:(id)arg2;
- (void)OnContinueGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnGenH5RedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)onGetH5PayNativeCashierResult:(BOOL)arg1;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)OnJumpedToReceiveList;
- (void)setScene:(int)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)prepayAlertViewConfirmClick;
- (void)openSkinPlazaLiteApp;
- (void)liteAppCreateStore:(id)arg1;
- (void)onSkinPlazaLiteAppClickLeftButton;
- (void)OnClickSelectSkin;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)arg1 type:(unsigned int)arg2;
- (void)handleSourceListTypeInvalidResponse:(id)arg1;
- (void)appendShowSourceResp:(id)arg1;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCRedEnvelopesSelectSkinViewControllerCheckAndUseDone;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCRedEnvelopesSelectSkinViewControllerConfirm:(id)arg1;
- (void)onWCRedEnvelopesCheckAndUseTimeLimitPromoCgiResponseOK:(id)arg1;
- (void)oWCRedEnvelopesCheckAndUseTimeLimitPromoCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCRedEnvelopesSelectSkinViewControllerBack;
- (void)OnWCRedEnvelopesSelectSkinViewControllerDelete:(id)arg1;
- (void)OnWCRedEnvelopesExpiredSkinViewControllerDelete:(id)arg1;
- (void)onWCRedEnvelopesDeleteResourceCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesDeleteResourceCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)call:(id)arg1;
- (void)callReportWxhbCgi:(int)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerNeedRefresh;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)reportWithAction:(unsigned long long)arg1 sessionId:(id)arg2;
- (id)getViewControllerTitle;
- (void)onSelectMemberViewControllerBack;
- (id)getChatroomContact;
- (id)getSameNicknameTips;
- (void)onSelectedContact:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerClickExpiredEntry;
- (void)OnWCRedEnvelopesExpireSkinGetNextPage:(id)arg1;
- (void)OnWCRedEnvelopesExpiredSkinViewControllerBack;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)curAlertRightUrl;
- (void)setCurAlertRightUrl:(id)arg1;
- (id)confirmShowResourcesCgi;
- (void)setConfirmShowResourcesCgi:(id)arg1;
- (id)deleteShowResourceCgi;
- (void)setDeleteShowResourceCgi:(id)arg1;
- (id)reportWxhbCgi;
- (void)setReportWxhbCgi:(id)arg1;
- (id)selectedConfirmHbResource;
- (void)setSelectedConfirmHbResource:(id)arg1;
- (id)downloadHbSourceQueue;
- (void)setDownloadHbSourceQueue:(id)arg1;
- (id)lastReqKeyStruck;
- (void)setLastReqKeyStruck:(id)arg1;
- (id)jumpRemindLogic;
- (void)setJumpRemindLogic:(id)arg1;
- (BOOL)isUserConfirmJump;
- (void)setIsUserConfirmJump:(BOOL)arg1;
- (long long)lastUnpayReason;
- (void)setLastUnpayReason:(long long)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (BOOL)isNeedReturnToSession;
- (void)setIsNeedReturnToSession:(BOOL)arg1;
- (id)m_sendGreetingHBLogic;
- (void)setM_sendGreetingHBLogic:(id)arg1;
- (BOOL)isRetryOperationWhenPrepay;
- (void)setIsRetryOperationWhenPrepay:(BOOL)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)baiNianEntryName;
- (void)setBaiNianEntryName:(id)arg1;
- (BOOL)bIsFromLoadingMoreInvalidData;
- (void)setBIsFromLoadingMoreInvalidData:(BOOL)arg1;
- (BOOL)bIsFromWebScene;
- (void)setBIsFromWebScene:(BOOL)arg1;
- (id)defaultRedpacketCacheResponse;
- (void)setDefaultRedpacketCacheResponse:(id)arg1;
- (id)skinNewLogicMMKV;
- (void)setSkinNewLogicMMKV:(id)arg1;
- (void).cxx_destruct;
@end

