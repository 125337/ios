@interface WCPayLogicMgr : MMUserService <MMTipsViewControllerDelegate, ILinkEventExt, MMWebViewDelegate, WCPayTransferMsgCheckCgiDelegate, WCPaySingleDownloadLogicExt, MMResourceMgrExt, MMImageLoaderObserver, WCPayWalletChangeExt, WCRedEnvelopesGetFullCoverInfoCgiDelegate, MMKernelExt, MMServiceProtocol, WCPayNetworkHelperDelegate, MMPackageDownloadMgrExt, IMsgExt, IAutoVerifySMSExt, INewABTestMgrExt>
{
    WCPayLocalCachedData * m_oWCPayLocalCachedData; // +0x8
    WCPayNetworkHelper * m_oWCPayNetworkHelper; // +0x10
    unsigned int m_uWCPayLogicQuitCount; // +0x18
    WCPayAuthenticationPay * m_oWCPayAuthenticationPay; // +0x20
    WCPayAuthenticationPayVerifySMSStruct * m_oWCPayAuthenticationPayVerifySMSStruct; // +0x28
    WCPayBindInfo * m_oWCPayBindInfo; // +0x30
    WCPayBindInfoSMS * m_oWCPayBindInfoSMS; // +0x38
    WCPayBindCardInfo * m_owcPayUnbindCardInfo; // +0x40
    WCPayResetPasswordInfo * m_oWCPayResetPasswordInfo; // +0x48
    WCPayAvalibleBankCardBinInfo * m_oWCPayAvalibleBankCardBinInfo; // +0x50
    NSString * m_orderListExtBuffer; // +0x58
    NSString * m_bizOrderListExtBuffer; // +0x60
    NSDictionary * m_dicCFTNeedPayRequestInfo; // +0x68
    NSString * m_oOldPassword; // +0x70
    NSString * m_oNewPassword; // +0x78
    NSDictionary * m_bufferAvailableCard; // +0x80
    NSDate * m_oGetDate; // +0x88
    NSDate * m_oGetBankLogoDate; // +0x90
    NSMutableArray * m_aReceivedStatusChangedOrderList; // +0x98
    NSMutableArray * m_aOrderList; // +0xa0
    unsigned int m_uiOrderListSum; // +0xa8
    unsigned int m_uiLimit; // +0xac
    BOOL m_bGetTenpaySecureCtrlSalt; // +0xb0
    BOOL m_needRetryDownloadPackageList; // +0xb1
    TenpayCertificate * m_oTenpayCertificate; // +0xb8
    double m_lastTimestampWhenCodeIsNil; // +0xc0
    NSString * m_oTenpayCertificateToken; // +0xc8
    NSDate * m_ndOfflinePayTokenValidDate; // +0xd0
    BOOL m_bIsOfflinePayInPos; // +0xd8
    NSString * m_nsOfflinePayOrderIdInPos; // +0xe0
    BOOL m_bIsCurrentOfflinePayMsgFromPull; // +0xe8
    unsigned long long getTokenScene; // +0xf0
    BOOL m_hasLoadCreditCardViewDic; // +0xf8
    NSMutableDictionary * m_dicCreditCardHadView; // +0x100
    unsigned int m_lastQueryCreditPayTime; // +0x108
    NSString * m_nsCurrentScene; // +0x110
    NSMutableArray * m_handledMsgSvrIds; // +0x118
    NSMutableDictionary * m_sceneBuffer; // +0x120
    BOOL isGetBankResourcesPending; // +0x128
    unsigned int m_uiRealnameReportScene; // +0x12c
    NSMutableDictionary * m_redEnvelopesPromotionCacheDict; // +0x130
    CContact * m_currentSessionContact; // +0x138
    NSDate * startResTime; // +0x140
    BOOL _isFromViewLicense; // +0x148
    BOOL _isOfflineViewAppear; // +0x149
    BOOL _isBackground; // +0x14a
    BOOL _isClickOfflinePayRefreshBtn; // +0x14b
    BOOL _bIsUserCreateOfflinePay; // +0x14c
    BOOL _bIsSettingV2AuthCodePayment; // +0x14d
    unsigned int _acceptLicenseScene; // +0x150
    unsigned int _alertViewScene; // +0x154
    unsigned int _authCodeType; // +0x158
    NSString * _m_nsJsApiReqKey; // +0x160
    NSString * _m_nsLogString_14954; // +0x168
    NSString * _m_lastBankOrPhoneAlreadyShow; // +0x170
    id /* block */ _licenseAcceptCallback; // +0x178
    id /* block */ _licenseDenyCallback; // +0x180
    id /* block */ _licenseStartLoadingCallback; // +0x188
    id /* block */ _licenseStopLoadingCallback; // +0x190
    MMTipsViewController * _payLicenseAlertView; // +0x198
    NSDictionary * _licenseData; // +0x1a0
    id /* block */ _realnameGuideAcceptCallback; // +0x1a8
    id /* block */ _realnameGuideDenyCallback; // +0x1b0
    MMTipsViewController * _realnameGuideAlertView; // +0x1b8
    WCRedEnvelopesSendControlLogic * _downloadPagLogic; // +0x1c0
    NSMutableSet * _c2cMessagePlayPagSet; // +0x1c8
    WalletRequestInfo * _m_walletRequestInfo; // +0x1d0
    id /* block */ _mobileInfoCompletion; // +0x1d8
    TenpayCertificate * _m_digitalCertControl; // +0x1e0
    WxSmCertUtil * _smDigitalCertControl; // +0x1e8
    double _targetBrightness; // +0x1f0
    WCPayRealNameTipsViewController * _realnameTipsVC; // +0x1f8
    NSMutableArray * _transferMsgCheckTaskQueue; // +0x200
    NSString * _offlinePayCertNo; // +0x208
    NSString * _groupPaySessionId; // +0x210
    NSMutableDictionary * _showResourceDownloadDict; // +0x218
    NSCache * _miscellaneousCache; // +0x220
    WCPayApplePayAuthorizationLogic * _applePayAuthorizationLogic; // +0x228
}
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (void)safeSaveLocalData;
- (void)GetWCPayBusinessRequest:(id)arg1 WXInnerUseDic:(id)arg2 CMDID:(unsigned int)arg3 OutputType:(unsigned int)arg4;
- (void)GetWCPayBusinessRequest:(id)arg1 WXInnerUseDic:(id)arg2 CMDID:(unsigned int)arg3 OutputType:(unsigned int)arg4 routeInfo:(unsigned char)arg5;
- (void)GetWCPayBusinessRequest:(id)arg1 WXInnerUseDic:(id)arg2 CMDID:(unsigned int)arg3 OutputType:(unsigned int)arg4 retryCount:(unsigned int)arg5 routeInfo:(unsigned char)arg6;
- (void)GetWCPayBusinessRequest:(id)arg1 WXInnerUseDic:(id)arg2 CMDID:(unsigned int)arg3 OutputType:(unsigned int)arg4 retryCount:(unsigned int)arg5;
- (void)UpdateTenpaySecureCtrlSalt;
- (void)onResHasNewWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResBeginDownloadWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)scanPassportResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)GetA8KeyResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)m_reportUUID;
- (void)setM_reportUUID:(id)arg1;
- (void)resetUniqueSessionId;
- (void)reportMainWalletScene:(unsigned int)arg1 functionTypeId:(unsigned int)arg2;
- (void)reportBankCardListScene:(unsigned int)arg1 bankCardType:(id)arg2;
- (void)reportRightBarButtonScene:(unsigned int)arg1 payControlData:(id)arg2;
- (void)insideCallBackOnCheckTransferMoneyStatusResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnConfirmTransferMoneyResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnRefuseTransferMoneyResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnRetrySendTransferMessageResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnGetTransferUserNameResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnGetFixedAmountQRCodeResponse:(id)arg1 OnRequest:(id)arg2;
- (void)CheckTransferMoneyStatus:(id)arg1;
- (void)ConfirmTransferMoney:(id)arg1;
- (void)RefuseTransferMoney:(id)arg1;
- (void)RetrySendTransferMessage:(id)arg1;
- (id)GetTransferedUserList;
- (void)SetTransferedUser:(id)arg1;
- (void)DeleteTransferUser:(id)arg1;
- (void)GetTransferUserName:(id)arg1 payChannel:(long long)arg2 extendInfo:(id)arg3 qrcodeSenderUsername:(id)arg4;
- (void)GetFixedAmountQRCode:(id)arg1;
- (void)CancelTransferQRPay:(id)arg1 ReceiverUserName:(id)arg2;
- (void)CancelBizQRPay:(id)arg1 ReceiverUserName:(id)arg2 ReceiverTicket:(id)arg3 ReceiverOpenId:(id)arg4;
- (void)insideCallBackOnSendC2CSecureMessageResponse:(id)arg1 OnRequest:(id)arg2;
- (BOOL)SendC2CMessageForSecure:(id)arg1 TemplateID:(id)arg2 SenderTitle:(id)arg3 ReceiverTitle:(id)arg4 Description:(id)arg5 SenderDesc:(id)arg6 ReceiverDesc:(id)arg7 JumpUrl:(id)arg8 SceneID:(unsigned int)arg9;
- (void)insideCallBackModifyWCPayPassword:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackResetWCPayPasswordVerifyCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackResetWCPayPasswordVerifySMS:(id)arg1 OnRequest:(id)arg2;
- (void)ModifyWCPayPassword:(id)arg1 NewWCPayPassword:(id)arg2 RepeatWCPayPassword:(id)arg3;
- (void)ResetWCPayPasswordVerifyCard:(id)arg1;
- (void)ResetWCPayPasswordVerifySMS:(id)arg1 RetKey:(id)arg2;
- (void)SetWCPayPasswordInReset:(id)arg1 RepeatPassword:(id)arg2 PayKey:(id)arg3 VerifySMS:(id)arg4 isOverseasBankCard:(BOOL)arg5;
- (void)checkAndShowRealnameLicense:(unsigned int)arg1 acceptCallback:(id /* block */)arg2 denyCallback:(id /* block */)arg3 startLoadingCallback:(id /* block */)arg4 stopLoadingCallback:(id /* block */)arg5;
- (BOOL)getAcceptRealnameLicense;
- (void)setAcceptRealnameLicense:(BOOL)arg1;
- (void)showLicenseAlertView:(id)arg1;
- (void)handleRealNameInfo:(id)arg1;
- (void)handleRealNameInfo:(id)arg1 reportDelegate:(id)arg2;
- (void)handleRealNameInfo:(id)arg1 reportDelegate:(id)arg2 acceptCallback:(id /* block */)arg3 denyCallback:(id /* block */)arg4;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)realNameTipsVCDidCancel:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)OnRealnameVerifyCancel:(id)arg1;
- (void)OnRealNameVeirfySuccess:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)checkShowRealnameGuideInfo:(id)arg1 acceptCallback:(id /* block */)arg2 denyCallback:(id /* block */)arg3;
- (BOOL)isLicenseQueryDelay;
- (void)setIsLicenseQueryDelay:(long long)arg1;
- (void)checkHongbaoOpenLicense:(id)arg1 acceptCallback:(id /* block */)arg2 denyCallback:(id /* block */)arg3;
- (id)m_realNameUUID;
- (void)setM_realNameUUID:(id)arg1;
- (id)getRealnameSessionId;
- (unsigned int)getRealnameReportScene;
- (void)setRealnameReportScene:(unsigned int)arg1;
- (void)parseShowInfo:(id)arg1 from:(id)arg2;
- (void)insideCallBackAuthenticationPay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackAuthenticationPayVerifySMS:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackSetWCPayPasswordInPay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnAuthenticationPayVerifyBind:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetOrderDetailInfoAfterPaidError:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackPayQueryOrderAfterPaidError:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackAuthenticationResetBalanceTelPay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackAuthenticationResetBalanceTelPayVerifySMS:(id)arg1 OnRequest:(id)arg2;
- (void)AuthenticationPay:(id)arg1;
- (void)AuthenticationPay:(id)arg1 CMDID:(unsigned int)arg2;
- (void)AuthenticationPayVerifySMS:(id)arg1;
- (void)SetWCPayPasswordInPay:(id)arg1;
- (void)PayOrderQuery:(id)arg1;
- (void)AuthenticationPayVerifyBind:(id)arg1;
- (void)PaySubscribeServiceApp:(id)arg1;
- (void)PaySubscribeServiceAppWithPaySubscribeRequest:(id)arg1;
- (void)GetWCPayQuitQRPay:(id)arg1 UUID:(id)arg2;
- (void)AuthenticationResetBalanceTelPay:(id)arg1;
- (void)AuthenticationResetBalancePayVerifySMS:(id)arg1;
- (void)insideCallBackWCPayGenPrepayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGenPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetAppAuthUrlErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetAppAuthUrlResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackGetA8KeyLogicResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackOnGetBalanceSaveResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnGetBalanceFetchResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetA8KeyLogicErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPaySubmitMallPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPaySubmitMallPrepayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackCheckWCPayJsApiResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackCheckWCPayJsApiErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackGetTransferPrepayResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnVerifyPayPwdResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnVerifyPayPwdVerifyCodeResponse:(id)arg1 OnRequest:(id)arg2;
- (void)GetAppAuthVerifyRequest:(id)arg1;
- (void)GetGenPaypreRequest:(id)arg1;
- (void)GetCheckWCPayAuthorityRequest:(id)arg1;
- (void)GetCheckPayPwdByToken:(id)arg1;
- (void)GetCheckPayPwdVerifyCodeByToken:(id)arg1;
- (void)GetMallPaypreRequest:(id)arg1;
- (void)GetA8Key:(id)arg1;
- (void)GetSavePrepayRequest:(unsigned long long)arg1 BindCardInfo:(id)arg2;
- (void)GetFetchPrepayRequest:(unsigned long long)arg1 BindCardInfo:(id)arg2 FetchAll:(BOOL)arg3;
- (void)GetTransferPrepayRequest:(id)arg1;
- (void)insideCallBackCreateOfflinePay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackCloseOfflinePay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackQueryOfflinePayUserInfo:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackChangeOfflineLimit:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackUnfreezeOfflinePay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetOfflinePayToken:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnWCPayConfirmOfflinePayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackOnWCPayConfirmOfflinePayResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBarCodeFromQRCode:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOfflineUserBindQuery:(id)arg1 OnRequest:(id)arg2;
- (BOOL)IsOfflinePayShowedNew;
- (void)ShowedOfflinePayNew;
- (BOOL)IsCreateOfflinePay;
- (id)getFreezeOfflinePayInfo;
- (void)CreateOfflinePay:(id)arg1;
- (void)CloseOfflinePay;
- (void)ClearOfflinePay;
- (void)ChangeOfflinePayLimitFee:(id)arg1;
- (void)UnfreezeOfflinePay:(id)arg1;
- (void)CleanTokenForCurrentUser;
- (id)getDeviceIDStr;
- (void)UpdateOfflinePayTokenFromScene:(unsigned long long)arg1;
- (void)UpdateOfflinePayTokenFromSceneIgnoreKinda:(unsigned long long)arg1;
- (void)updateOfflinePayTokenFromHoneyPay;
- (void)UpdateOfflinePayTokenFromEnablePage;
- (void)_updateOfflinePayToken:(id)arg1;
- (id)GetWCPayOfflonePayQRCode:(id)arg1 MainCardBindSerial:(id)arg2;
- (id)GetWCPayOfflonePayQRCode:(id)arg1 MainCardBindSerial:(id)arg2 Balance:(BOOL)arg3;
- (void)ConfirmOfflinePayRequest:(id)arg1 routeInfo:(unsigned char)arg2;
- (void)GetBarCodeFromQRCode:(id)arg1;
- (void)reportRemainNum:(long long)arg1 entryScene:(unsigned int)arg2 isSnapshot:(BOOL)arg3 statDic:(id)arg4 isUserViewDigit:(BOOL)arg5 currentCardInfo:(id)arg6;
- (void)SendOfflinePayUserBindqueryRequestWithEntryScene:(long long)arg1 extraInfo:(id)arg2;
- (void)SendOfflinePayUserBindqueryRequestWithEntryScene:(long long)arg1 extraInfo:(id)arg2 useCache:(BOOL)arg3;
- (void)ScheduleUpdateTokenWhenShitHappened;
- (void)updateTokenAfterSeconds:(double)arg1 withUserInfo:(id)arg2;
- (id)getCertIdIfExist;
- (id)getOfflinePayDeviceId;
- (id)getOfflinePayCertSign:(id)arg1 message:(id)arg2;
- (id)getOfflinePayCodeVer;
- (id)GetWCPayOfflinePayCodeStringWithBindSerial:(id)arg1 entryScene:(unsigned int)arg2 statDic:(id)arg3;
- (BOOL)couldGetOfflinePayCodeWithBindSerial:(id)arg1;
- (id)getCardListInfoWithBindSerial:(id)arg1;
- (unsigned long long)remainOfflineTokenCount;
- (id)currentCardInfoShouldUseFromData:(id)arg1;
- (BOOL)updateOfflinePayTokenIfNeed;
- (BOOL)updateOfflinePayTokenIfNeedWithUserInfo:(id)arg1;
- (void)savePreferCard:(id)arg1;
- (void)saveCardId:(id)arg1;
- (void)saveTokenInfoFromDictionary:(id)arg1;
- (id)getCardIdList;
- (unsigned long long)getPrefix;
- (void)SetOfflinePayLastSelctedBankCard:(id)arg1 bankType:(id)arg2;
- (id)GetOfflinepayLastSelectedBankCard;
- (id)GetOfflinepayLastSelectedBankType;
- (void)reportOfflineShowCode:(unsigned int)arg1 isSnapshot:(BOOL)arg2 statDic:(id)arg3 currenCardInfo:(id)arg4;
- (void)reportOfflineShowCode:(unsigned int)arg1 isSnapshot:(BOOL)arg2 statDic:(id)arg3 currenCardInfo:(id)arg4 isUserViewDigit:(BOOL)arg5;
- (void)SetOfflinePayOrderIdStateInLocalStorage:(id)arg1 withState:(int)arg2;
- (int)FindOfflinePayOrderIdInLocalStorage:(id)arg1;
- (int)GetOfflinePayOrderIdStateInLocalStorage:(id)arg1;
- (void)SetOfflinePayAllOrderIdToFinalStateInLocalStorage;
- (unsigned long long)GetOfflinePayTransIdNumInLocalStorage;
- (void)LogOfflinePayOrderIdStateInLocalStorage;
- (void)SetOfflinePayOfflineGetMsgAckKey:(id)arg1;
- (id)GetOfflinePayOfflineGetMsgAckKey;
- (void)SetOfflinePayOfflineGetMsgPollTime:(int)arg1;
- (int)GetOfflinePayOfflineGetMsgPollTime;
- (void)SetOfflinePayOfflineGetMsgRequestStartTimestamp;
- (double)GetOfflinePayOfflineGetMsgRequestStartTimestamp;
- (double)GetOfflinePayOfflineGetMsgNextRequestDelayTime;
- (void)SetOfflinePayPosStatus:(BOOL)arg1;
- (void)SetOfflinePayPosStatusWithoutReport:(BOOL)arg1;
- (BOOL)GetOfflinePayPosStatus;
- (void)SetOfflinePayOrderIdInPos:(id)arg1;
- (id)GetOfflinePayOrderIdInPos;
- (double)GetOfflinePayInPosTimeoutInterval;
- (void)SetOfflinePayInPosTimeoutInterval:(double)arg1;
- (void)SetOfflinePayOfflineGetMsgReqKey:(id)arg1;
- (id)GetOfflinePayOfflineGetMsgReqKey;
- (void)SetOfflinePayOfflineGetMsgTransId:(id)arg1;
- (id)GetOfflinePayOfflineGetMsgTransId;
- (void)SetOfflinePayOfflineGetMsgPayMsgType:(int)arg1;
- (int)GetOfflinePayOfflineGetMsgPayMsgType;
- (void)SetCurrentOfflinePayMsgFromPull:(BOOL)arg1;
- (BOOL)GetCurrentOfflinePayMsgFromPull;
- (BOOL)GetOfflinePayGetMsgIsEnabledInABTest;
- (id)genSm4CBCKey;
- (id)getOfflineCodeVer;
- (BOOL)setOfflineCodeVer:(id)arg1;
- (BOOL)setDeviceIDStr:(id)arg1;
- (BOOL)setCertIdStr:(id)arg1;
- (BOOL)isOfflinePayCertExists:(id)arg1;
- (id)getTokenPin;
- (BOOL)setTokenPin:(id)arg1;
- (id)getCftCertSign:(id)arg1 message:(id)arg2;
- (void)cleanCftToken:(id)arg1;
- (BOOL)deleteCftCert:(id)arg1;
- (void)removeCertid;
- (id)getCftToken:(id)arg1;
- (long long)getRemainCftTokenNum:(id)arg1;
- (BOOL)setCftTokenCode:(id)arg1 certId:(id)arg2;
- (void)setLastTokenUpdateTime:(long long)arg1;
- (long long)getLastTokenUpdateTime;
- (long long)getRegetTokenNum;
- (long long)getTokenUpdateInterval;
- (void)setRegetTokenNum:(long long)arg1;
- (void)setTokenUpdateInterval:(long long)arg1;
- (void)setOfflinePayHasSuccess;
- (BOOL)isOfflinePayHasSuccess;
- (id)getCftCSR:(id)arg1;
- (BOOL)importCftCert:(id)arg1;
- (id)cftCertDecrypt:(id)arg1 message:(id)arg2;
- (BOOL)isOfflineAuthCodeV2ABTestOpen;
- (BOOL)isUsingOfflineAuthCodeV2;
- (void)updateOfflineAuthCodeV2Flag:(BOOL)arg1;
- (void)checkIfNeedRequestUserBindqueryOrUpdateTokenWhenCardUnbind:(id)arg1;
- (void)silentSendSetPaymentRequestWithBindSerial:(id)arg1 bankType:(id)arg2 defaultCardState:(unsigned int)arg3;
- (void)handleFreezeBalanceMsg:(id)arg1;
- (void)HandleWCPayOrderListStatusUpdate:(id)arg1;
- (void)handleWCPayOfflinePayRealNameMsg:(id)arg1;
- (void)handleWCPayOfflinePayNotifyMsg:(id)arg1;
- (void)handlePaySuccessMsg:(id)arg1;
- (id)parseFinderInfoViewXml:(XmlReaderNode_t *)arg1;
- (id)parseLeadTailViewXml:(XmlReaderNode_t *)arg1;
- (id)readChildText:(const char *)arg1 inNode:(XmlReaderNode_t *)arg2;
- (id)getDateTimeStringFromTimeStamp:(double)arg1;
- (void)handleWCPayOfflinePaySuccessMsg:(id)arg1;
- (void)handleWCPayOfflinePayConfirmMsg:(id)arg1;
- (void)handleWCPayFreshPayCardListMsg:(id)arg1;
- (void)handleWCPayOfflinePayRefreshTokenMsg:(id)arg1;
- (void)handleWCPayFreezeOfflinePayMsg:(id)arg1;
- (void)handleWCPayOrderNotifyMsg:(id)arg1;
- (void)handleWCPayFacingReceiveMoneyMsg:(id)arg1 msgType:(int)arg2;
- (void)handleWCPayMakeHBSuccessMsg:(id)arg1;
- (BOOL)shouldReplaceCoverInfoDetail:(id)arg1;
- (void)hanldeReplaceWCPayInfoNode:(id)arg1;
- (void)handleWCPayMakeTransferMoneySuccessMsg:(id)arg1;
- (void)handleWCPayLaunchAAMsgUpdate:(id)arg1;
- (void)handleWCPayAAPaySuccessMsg:(id)arg1;
- (void)handleWCPayAA24HourUnPayNotifyMsg:(id)arg1;
- (void)handleWCPayDelayTransferPay:(id)arg1;
- (void)handleWCPayCardRedDot:(id)arg1;
- (void)handleWCPayOfflinePayReqkeyConfirm:(id)arg1;
- (void)handleWCPayOfflinePayUserPaying:(id)arg1;
- (void)handleWCPayLQTRedDotMessage:(id)arg1;
- (void)handleWCPayNewLQTRedDotMessage:(id)arg1;
- (void)handleReceiveOrPayRedDotMsg:(id)arg1;
- (void)handleExclusiveRedEnvelopesTimeout:(id)arg1;
- (void)handleHKOfflineXmlMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3 IsPull:(BOOL)arg4;
- (void)handleWCPayThirdC2CXMLMessage:(id)arg1;
- (void)addDataSysMessage:(id)arg1 chatName:(id)arg2;
- (void)handleUpdateSpeechPosMsg:(id)arg1;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 extraInfo:(id)arg3 filePath:(id)arg4 totalLength:(unsigned long long)arg5;
- (void)handleTranfserExpireAlertMsg:(id)arg1;
- (void)handleOverseaRedEnvelopeMsg:(id)arg1;
- (void)handleOverseaFacingReceiveMoneyMsg:(id)arg1;
- (void)handleWCPayTransferOverTime:(id)arg1;
- (BOOL)isTransferReturnMessage:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)handleDeleteLedgerRecord:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)isNeedHandleDeleteLedgerRecord:(id)arg1;
- (void)handleDeleteLedgerRecordByUser:(id)arg1;
- (void)deleteLedgerRecord:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)preDownloadEmoticonResource:(id)arg1;
- (BOOL)isRedPacketStaticResourceExist:(id)arg1;
- (void)preDownloadHbShowResource:(id)arg1;
- (void)preDownloadHbAudioData:(id)arg1;
- (void)handleTransferReturnMessage:(id)arg1;
- (void)handleYearHB:(id)arg1;
- (void)handleWCPayBalanceDetail:(id)arg1;
- (BOOL)IsExistHBMsgRecord:(id)arg1;
- (void)AddNewHBMsgRecord:(id)arg1;
- (BOOL)IsExistTransferMsgRecord:(id)arg1;
- (void)AddNewTransferMsgRecord:(id)arg1;
- (BOOL)IsExistGroupPayLaunchMsgRecord:(id)arg1;
- (void)addNewGroupPayLaunchMsgRecord:(id)arg1;
- (BOOL)IsExistGroupPayPaySuccessMsgRecord:(id)arg1;
- (void)addNewGroupPayPaySuccessMsgRecord:(id)arg1;
- (void)updateBankCardRedDotLastUpdateTime;
- (void)updateBankCardListNewBannerLastUpdateTime;
- (BOOL)checkIsBankCardRedDotOverTime;
- (BOOL)checkIsBankCardListNewBannerOverTime;
- (id)walletRedDotWording;
- (void)setWalletRedDotWording:(id)arg1;
- (BOOL)showWalletRedDot;
- (void)setShowWalletRedDot:(BOOL)arg1;
- (BOOL)showBankCardRedDot;
- (void)setShowBankCardRedDot:(BOOL)arg1;
- (id)newBankCardSerials;
- (void)setNewBankCardSerial:(id)arg1;
- (void)removeNewBankCardSerial:(id)arg1;
- (void)removeAllNewBankCardSerial;
- (BOOL)checkShouldHandleId:(long long)arg1;
- (void)handleEnableWalletMsg:(id)arg1;
- (void)handleSetWalletTypeMsg:(id)arg1;
- (BOOL)IsExistSynthesizeSpeechRecord:(id)arg1;
- (void)AddSynthesizeSpeechRecord:(id)arg1;
- (void)startTransferMsgCheckWithTask:(id)arg1;
- (void)fireTransferMsgCheckQueue;
- (void)realStartTransferMsgCheckWithRequest:(id)arg1;
- (void)removeTransferMsgCheckTaskByTransferId:(id)arg1;
- (void)addTransferMsgCheckTask:(id)arg1;
- (id)transferMsgCheckTaskQueueMMKV;
- (void)saveTransferMsgCheckTaskQueue;
- (id)getTransferMsgCheckTaskByRequest:(id)arg1;
- (void)onWCPayTransferMsgCheckCgiResponseOK:(id)arg1 cgi:(id)arg2;
- (void)onWCPayTransferMsgCheckCgiResponseError:(id)arg1 cgi:(id)arg2;
- (void)removeTransferMsgCheckTask:(id)arg1;
- (id)getLqtWalletReddotWording;
- (BOOL)lqtNeedShowWalletReddot;
- (void)setLqtNeedShowWalletReddot:(BOOL)arg1;
- (BOOL)lqtNeedShowBalanceReddot;
- (void)setLqtNeesShowBalanceReddot:(BOOL)arg1;
- (BOOL)lqtNeedShowEnteranceReddot;
- (void)setLqtNeedShowEnteranceReddot:(BOOL)arg1;
- (BOOL)lqbNeedShowEnteranceReddot;
- (void)setLqbNeedShowEnteranceReddot:(BOOL)arg1;
- (void)genGroupPayReportSessionId;
- (id)getGroupPayReportSessionId;
- (void)insideCallBackQueryWXCreditCardInfo:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackQueryWXCreditCardDetail:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackQueryWXCreditCardQuestion:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackCommitWXCreditCardAnswer:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackAuthenticationCreditPayIdentifier:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackVerifyCreditPayPassword:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackVerifyCreditPaySmsVerifyCode:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackVerifyCreditPayAndCreateCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackUnbindCreditPay:(id)arg1 OnRequest:(id)arg2;
- (void)QueryWXCreditCardInfo:(id)arg1 bankType:(id)arg2 goToBank:(BOOL)arg3 forceQuery:(BOOL)arg4;
- (void)QueryWXCreditQuestion:(id)arg1;
- (void)CommitWXCreditAnswer:(id)arg1 questionAry:(id)arg2;
- (void)AuthenticationCreditPayIdentifier:(id)arg1 idNum:(id)arg2 sessionKey:(id)arg3 retry:(BOOL)arg4 bankType:(id)arg5;
- (void)UnBindCreditPay:(id)arg1 SerialNo:(id)arg2 passwd:(id)arg3;
- (BOOL)IsCreditCardShowedNew:(unsigned int)arg1;
- (void)ShowedCreditCardNew:(unsigned int)arg1;
- (void)setCreditCardView:(id)arg1;
- (BOOL)hadCreditCardView:(id)arg1;
- (void)loadCreditCardHadViewDic;
- (void)saveCreditCardHadViewDic;
- (void)insideCallBackGetPayCardListAndUsrVerifiedInfo:(id)arg1 OnRequest:(id)arg2 NewInfo:(BOOL)arg3;
- (void)insideCallBackGetCardBin:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetAvailableBank:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetCardBinAndAvailableBank:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackUnBindCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackSetMainBankCardResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackSetMainBankCardErrorResponse:(id)arg1 Request:(id)arg2;
- (void)callBackBufferGetPayCardListAndUsrVerifiedInfo:(id)arg1;
- (void)GetPayCardListAndUsrVerifiedInfo:(BOOL)arg1 ToMainServiceSearch:(BOOL)arg2 UsedMemoryCacheCard:(BOOL)arg3;
- (void)GetPayCardListAndUsrVerifiedInfo:(BOOL)arg1 ToMainServiceSearch:(BOOL)arg2;
- (void)GetPayCardListAndUsrVerifiedInfo:(BOOL)arg1 ToMainServiceSearch:(BOOL)arg2 UsedMemoryCacheCard:(BOOL)arg3 UsedLocalCacheCard:(BOOL)arg4;
- (void)GetPayCardListAndUsrVerifiedInfo:(BOOL)arg1 ToMainServiceSearch:(BOOL)arg2 UsedMemoryCacheCard:(BOOL)arg3 UsedLocalCacheCard:(BOOL)arg4 Scene:(int)arg5;
- (void)addParametersForTouchID:(id)arg1;
- (void)addParametersForBalance:(id)arg1;
- (void)GetCardBinAndAvailableBank:(id)arg1 scene:(long long)arg2;
- (void)GetCardBinAndAvailableBank:(id)arg1 scene:(long long)arg2 fromRealname:(BOOL)arg3;
- (void)GetCardBinAndAvailableBank:(id)arg1 scene:(long long)arg2 fromRealname:(BOOL)arg3 sessionId:(id)arg4;
- (void)GetCardBinAndAvailableBankWithoutOrderID:(id)arg1 scene:(long long)arg2;
- (void)UnBindCard:(id)arg1 WCPayPassword:(id)arg2;
- (void)UnBindCard:(id)arg1 WCPayPassword:(id)arg2 unbindScene:(int)arg3;
- (void)GetAvailableBank;
- (void)SetMainBankCard:(id)arg1;
- (id)GetMainBankCard;
- (id)GetLastBankCard;
- (id)GetLastBankCard:(int)arg1;
- (BOOL)IsShowedBalanceDescription;
- (void)SetShowedBalanceDescription:(BOOL)arg1;
- (BOOL)IsShowedFaceToFaceTransferViewTips;
- (void)SetShowedFaceToFaceTransferViewTips:(BOOL)arg1;
- (BOOL)IsShowedFaceToFaceReceiveMoneyTips;
- (void)SetShowedFaceToFaceReceiveMoneyTips:(BOOL)arg1;
- (BOOL)IsShowedHKFaceToFaceReceiveMoneyTips;
- (void)SetShowedHKFaceToFaceReceiveMoneyTips:(BOOL)arg1;
- (BOOL)IsShowedRedCodeForWXBorrowMoneyItem:(id)arg1 WithRedCodeIndex:(unsigned int)arg2;
- (void)SetShowedRedCodeForWXBorrowMoneyItem:(id)arg1 WithRedCodeIndex:(unsigned int)arg2;
- (unsigned int)getLocalBadgetIndex;
- (void)setLocalBadgetIndex:(unsigned int)arg1;
- (BOOL)isVisitActivity:(unsigned int)arg1;
- (void)setVisitActivity:(unsigned int)arg1;
- (void)RealnameAuthen:(id)arg1;
- (void)RealnameAuthen:(id)arg1 idCard:(id)arg2;
- (void)QueryUserWallet;
- (void)SetUserWallet:(id)arg1;
- (void)insideCallBackQueryUserWallet:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackSetUserWallet:(id)arg1 OnRequest:(id)arg2;
- (BOOL)IsShowedChangeWalletTips;
- (void)SetShowedChangeWalletTips:(BOOL)arg1;
- (id)getLocalCardDetailBaseUrl;
- (void)setLocalCardDetailBaseUrl:(id)arg1;
- (BOOL)updateBalanceWithInfo:(id)arg1 partical:(BOOL)arg2;
- (void)updateWalletBalance:(unsigned long long)arg1;
- (id)getLocalBalanceInfo;
- (BOOL)IsShowedBalanceFirstTips;
- (void)SetIsShowedBalanceFirstTips:(BOOL)arg1;
- (void)GetBanPayMobileInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)insideCallBackGetBanPayMobileInfoResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackTenpayImportBindQuery:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackBindCardVerifyCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackBindCardVerifyCardSMS:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackSetWCPayPasswordInBind:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackSetWCPayPasswordInReset:(id)arg1 OnRequest:(id)arg2;
- (void)GetTenpayImportBindQuery:(id)arg1;
- (void)BindCardVerifyCard:(id)arg1 UserInfo:(id)arg2 Retry:(BOOL)arg3;
- (void)BindCardVerifyCard:(id)arg1 UserInfo:(id)arg2;
- (void)BindCardVerifySMS:(id)arg1 UserInfo:(id)arg2;
- (void)SetWCPayPasswordInBind:(id)arg1 RepeatPassword:(id)arg2 PayKey:(id)arg3 VerifySMS:(id)arg4 UserInfo:(id)arg5 isOverseasBankCard:(BOOL)arg6 BindCard:(BOOL)arg7 isOnlyVerify:(BOOL)arg8 data:(id)arg9 sessionId:(id)arg10 realnameReq:(id)arg11;
- (void)insideCallBackRealnameAuthen:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackRealnameReg:(id)arg1 OnRequest:(id)arg2;
- (void)EnterBindCardProcess:(int)arg1;
- (void)SetIsInBindCardProcess:(BOOL)arg1;
- (void)SetBindCardScene:(int)arg1;
- (void)SetBindCardUUID:(id)arg1;
- (BOOL)GetIsInBindCardProcess;
- (int)GetBindCardScene;
- (id)GetBindCardUUID;
- (void)ClearBindCardContext;
- (id)GetAllOrderCanPayBank:(id)arg1;
- (void)insideCallBackGetOrderDetailInfoAndBindQueryNew:(id)arg1 OnRequest:(id)arg2;
- (void)saveCashierSwitchInfo:(id)arg1;
- (void)insideCallBackGetWebPayOrderDetailInfoAndBindQueryNew:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetOrderDetailInfo:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetHistoryOrderDetailInfo:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackWCBizIapOrderDetailResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCBizIapOrderDetailErrorResponse:(id)arg1 Request:(id)arg2;
- (void)clearOrderListCache;
- (void)GetOrderDetailInfoAndBindQueryNew:(id)arg1 ProductsID:(id)arg2 UsedBalance:(int)arg3 Scene:(int)arg4;
- (void)GetOrderDetailInfoAndBindQueryNew:(id)arg1 ProductsID:(id)arg2 UsedBalance:(int)arg3 Scene:(int)arg4 payScene:(long long)arg5 payChannel:(int)arg6;
- (void)GetWebPayOrderDetailInfoAndBindQueryNew:(id)arg1;
- (void)GetHistoryOrderDetailInfo:(id)arg1 PayType:(int)arg2;
- (void)AddStatusChangedOrderDetail:(id)arg1;
- (id)GetStatusChangedOrderList;
- (unsigned int)GetStatusChangedOrderListCount;
- (void)reportVoiceOverUsing;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (id)init;
- (id)getRedEnvelopesPromotionCacheResponseByPayMsgId:(id)arg1;
- (void)setRedEnvelopesPromotionCacheResponse:(id)arg1 byId:(id)arg2;
- (void)doReportScreenShotPageCgi:(id)arg1 byTransId:(id)arg2 byErrorCode:(long long)arg3;
- (BOOL)needCloseReportScreenShotPage;
- (void)initLocalCachedData;
- (void)enterForeground;
- (void)clearData;
- (void)dealloc;
- (void)startGetFullCoverInfoDetail:(id)arg1;
- (void)onGetFullCoverInfoCgiResp:(id)arg1 messageWrap:(id)arg2;
- (void)startDownloadWCPayImageWithURL:(id)arg1 md5:(id)arg2;
- (id)c2cMessagePlayPagSet;
- (void)setPagHasPlay:(id)arg1;
- (BOOL)isPagHasPlay:(id)arg1;
- (void)clearPlayPagSet;
- (void)saveCurrentContact:(id)arg1;
- (id)getCurrentContact;
- (void)clearCurrentContact;
- (id)getMemoryCacheObjectWithKey:(id)arg1;
- (void)setMemoryCacheObject:(id)arg1 withKey:(id)arg2;
- (void)reloadOfflineCertObjWhenSwitchWallet;
- (void)onWCPayWalletChange;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)cleanOverTimeNewBizExtMsgs;
- (void)insideCallBackVerifyPayPassword:(id)arg1 OnRequest:(id)arg2;
- (void)setBrightness:(double)arg1;
- (void)updateBrightness;
- (BOOL)needToShowRedDotForTransfer;
- (void)removeRedDotForTransferNowAndForever;
- (BOOL)isNeedShowRedCodeInMoreView;
- (void)getHtml5WalletUrl;
- (id)readCacheWalletUrl;
- (void)saveCacheWalletUrl:(id)arg1;
- (void)insideCallBackGetHtml5WalletUrl:(id)arg1 request:(id)arg2;
- (void)OnWCPayGetAppAuthUrlResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayGetAppAuthUrlErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayGenPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayGenPrepayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPaySubmitMallPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPaySubmitMallPrepayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnGetA8KeyLogicResponse:(id)arg1 Request:(id)arg2;
- (void)OnGetA8KeyLogicErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCBizIapOrderDetailResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCBizIapOrderDetailErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayQuitQRScanPayResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayQuitQRScanPayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPaySubscribeServiceAppResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPaySubscribeServiceAppErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnCheckWCPayJsApiResponse:(id)arg1 Request:(id)arg2;
- (void)OnCheckWCPayJsApiErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayConfirmOfflinePayResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayConfirmOfflinePayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnSetMainBankCardResponse:(id)arg1 Request:(id)arg2;
- (void)OnSetMainBankCardErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnGetBanPayMobileInfoResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToTenpayCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToTenpayCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToTenpayCommonResponse:(id)arg1 Request:(id)arg2;
- (void)setCFTNeedPayRequestExtraInfo:(id)arg1;
- (id)getCFTNeedPayRequestExtraInfo;
- (void)setCurrentSceneValue:(id)arg1;
- (void)VerifyPayPassword:(id)arg1 Scene:(unsigned int)arg2;
- (id)GetServerCurrentTimestamp;
- (void)GetTenpaySecureCtrlSalt;
- (void)StartWCPay;
- (void)QuitWCPay;
- (void)GetBankResources:(id)arg1;
- (id)getBanners;
- (void)setBanners:(id)arg1;
- (double)getLBSTipsLastShowTime;
- (void)setLBSTipsLastShowTime:(double)arg1;
- (BOOL)getIsShowOfflinePayTips;
- (void)setIsShowOfflinePayTips:(BOOL)arg1;
- (id)getBalanceDetailRealnameGuideTitle;
- (void)setBalanceDetailRealnameGuideTitle:(id)arg1;
- (id)getWalletBalanceTitle;
- (void)setWalletBalanceTitle:(id)arg1;
- (void)onPackageListUpdated:(id)arg1;
- (void)OnHandleOpenAutoVerifySMS:(id)arg1;
- (void)showABTestRedDot;
- (void)checkIsReceiveOrPayRedDotOverTime;
- (id)getApplePayAuthorizationLogic;
- (void)holdApplePayAuthorizationLogic:(id)arg1;
- (void)clearApplePayAuthorizationLogic;
- (id)m_nsJsApiReqKey;
- (void)setM_nsJsApiReqKey:(id)arg1;
- (id)m_nsLogString_14954;
- (void)setM_nsLogString_14954:(id)arg1;
- (id)m_lastBankOrPhoneAlreadyShow;
- (void)setM_lastBankOrPhoneAlreadyShow:(id)arg1;
- (id /* block */)licenseAcceptCallback;
- (void)setLicenseAcceptCallback:(id /* block */)arg1;
- (id /* block */)licenseDenyCallback;
- (void)setLicenseDenyCallback:(id /* block */)arg1;
- (id /* block */)licenseStartLoadingCallback;
- (void)setLicenseStartLoadingCallback:(id /* block */)arg1;
- (id /* block */)licenseStopLoadingCallback;
- (void)setLicenseStopLoadingCallback:(id /* block */)arg1;
- (id)payLicenseAlertView;
- (void)setPayLicenseAlertView:(id)arg1;
- (id)licenseData;
- (void)setLicenseData:(id)arg1;
- (unsigned int)acceptLicenseScene;
- (void)setAcceptLicenseScene:(unsigned int)arg1;
- (BOOL)isFromViewLicense;
- (void)setIsFromViewLicense:(BOOL)arg1;
- (unsigned int)alertViewScene;
- (void)setAlertViewScene:(unsigned int)arg1;
- (id /* block */)realnameGuideAcceptCallback;
- (void)setRealnameGuideAcceptCallback:(id /* block */)arg1;
- (id /* block */)realnameGuideDenyCallback;
- (void)setRealnameGuideDenyCallback:(id /* block */)arg1;
- (id)realnameGuideAlertView;
- (void)setRealnameGuideAlertView:(id)arg1;
- (id)downloadPagLogic;
- (void)setDownloadPagLogic:(id)arg1;
- (void)setC2cMessagePlayPagSet:(id)arg1;
- (id)m_walletRequestInfo;
- (void)setM_walletRequestInfo:(id)arg1;
- (id /* block */)mobileInfoCompletion;
- (void)setMobileInfoCompletion:(id /* block */)arg1;
- (id)m_digitalCertControl;
- (void)setM_digitalCertControl:(id)arg1;
- (id)smDigitalCertControl;
- (void)setSmDigitalCertControl:(id)arg1;
- (BOOL)isOfflineViewAppear;
- (void)setIsOfflineViewAppear:(BOOL)arg1;
- (BOOL)isBackground;
- (void)setIsBackground:(BOOL)arg1;
- (BOOL)isClickOfflinePayRefreshBtn;
- (void)setIsClickOfflinePayRefreshBtn:(BOOL)arg1;
- (double)targetBrightness;
- (void)setTargetBrightness:(double)arg1;
- (id)realnameTipsVC;
- (void)setRealnameTipsVC:(id)arg1;
- (id)transferMsgCheckTaskQueue;
- (void)setTransferMsgCheckTaskQueue:(id)arg1;
- (BOOL)bIsUserCreateOfflinePay;
- (void)setBIsUserCreateOfflinePay:(BOOL)arg1;
- (id)offlinePayCertNo;
- (void)setOfflinePayCertNo:(id)arg1;
- (unsigned int)authCodeType;
- (void)setAuthCodeType:(unsigned int)arg1;
- (BOOL)bIsSettingV2AuthCodePayment;
- (void)setBIsSettingV2AuthCodePayment:(BOOL)arg1;
- (id)groupPaySessionId;
- (void)setGroupPaySessionId:(id)arg1;
- (id)showResourceDownloadDict;
- (void)setShowResourceDownloadDict:(id)arg1;
- (id)miscellaneousCache;
- (void)setMiscellaneousCache:(id)arg1;
- (id)applePayAuthorizationLogic;
- (void)setApplePayAuthorizationLogic:(id)arg1;
- (void).cxx_destruct;
@end

