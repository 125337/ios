@interface OpenApiMgr : MMUserService <MMTipsViewControllerDelegate, IPreEnterWechatLogicExt, MMServiceProtocol, IMsgExt, WCActionSheetDelegate, WCPayOpenApiExt, SendAppMsgHandleDelegate, OnGotAppMsgHandleDelegate>
{
    SendAppMsgHandler * m_oSendAppMsgHandler; // +0x8
    SendAppMsgHandlerV2 * m_oSendAppMsgHandlerV2; // +0x10
    OnGotAppMsgHandler * m_oOnGotAppMsgHandler; // +0x18
    SendAppMsgToWCHandler * m_oSendAppMsgToWCHandler; // +0x20
    SendAppMsgToFavoritesHandler * m_oSendAppMsgToFavoritesHandler; // +0x28
    SendAppMsgToStateHandler * m_oSendAppMsgToStateHandler; // +0x30
    WeChatPayHandler * m_oWeChatPayHandler; // +0x38
    WeChatHBHandler * m_oWeChatHBHandler; // +0x40
    NewAuthHandler * m_oNewAuthHandler; // +0x48
    AppJumpLogicHelper * m_oAppJumpHandler; // +0x50
    OpenProfileHandler * m_oOpenProfileHandler; // +0x58
    JumpToBizWebviewHandler * m_oJumpBizWebHandler; // +0x60
    SMSAddCardHandler * m_oSMSAddCardHandler; // +0x68
    AppAddCardHandler * m_oAppAddCardHandler; // +0x70
    OpenTempSessionHandler * m_oOpenTempSessionHandler; // +0x78
    OpenWebviewHandler * m_oOpenWebviewHandler; // +0x80
    OpenTypeWebViewHandler * m_oOpenTypeWebViewHandler; // +0x88
    OpenRankListHandler * m_oOpenRankListHandler; // +0x90
    BaseOpenSDKHandler * m_oBaseOpenSDKHandler; // +0x98
    ChooseCardHandler * m_oChooseCardHandler; // +0xa0
    ChooseInvoiceHandler * m_oChooseInvoiceHandler; // +0xa8
    OpenMiniProgramHandler * m_oOpenMiniProgramHandler; // +0xb0
    WeChatOfflinePayHandler * m_oOfflinePayHandler; // +0xb8
    OpenBusinessWebViewHandler * m_oOpenBusinessWebviewHandler; // +0xc0
    OpenBusinessViewHandler * m_oOpenBusinessViewHandler; // +0xc8
    AppRefreshTokenErrorHandler * m_oRefreshTokenErrorHandler; // +0xd0
    WeAppTransferAPIHandler * m_oWeAppTransferAPIHandler; // +0xd8
    OpenFinderShareVideoHandler * m_oFinderHandler; // +0xe0
    OpenFinderProfileHandler * m_oFinderProfileHandler; // +0xe8
    OpenFinderLiveHandler * m_oFinderLiveHandler; // +0xf0
    OpenFinderFeedHandler * m_oFinderFeedHandler; // +0xf8
    OpenCustomerServiceHandler * m_oWWKFHandler; // +0x100
    OpenFinderEventHandler * m_oFinderOpenEventHandler; // +0x108
    FinderChannelStartLiveHandler * m_oFinderChannelStartLiveHandler; // +0x110
    OpenFinderBindHandler * m_oFinderAuthorBindHandler; // +0x118
    NSMutableDictionary * m_paraDic; // +0x120
    BOOL m_uiIsInternalDownload; // +0x128
    NSURL * m_jumpUrlScheme; // +0x130
    NSURL * m_alternateAppStoreUrlScheme; // +0x138
    id /* block */ m_urlSchemeJumpBlock; // +0x140
    unsigned long long m_showType; // +0x148
    BOOL m_bIsShowToastWhenLaunchFail; // +0x150
    NSString * _launchFromAppID; // +0x158
    NSString * _launchFromLinkUrl; // +0x160
    MemoryMappedKV * _openApiCacheMMKV; // +0x168
    MMFullScreenShadeViewController * _readPasteBoardNotiveVC; // +0x170
    WCTDatabase * _db; // +0x178
    WCTTable * _tableLaunchAppInfo; // +0x180
}
- (void)onInitAction;
- (id)dbPath;
- (void)openAlertDB;
- (void)closeAlertDB;
- (void)deleteAlertDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (BOOL)insertNoAlertScheme:(id)arg1;
- (BOOL)checkIfNoNeedAlertWithScheme:(id)arg1;
- (BOOL)checkAppInInfoPlistWithScheme:(id)arg1;
- (id)init;
- (BOOL)jumpByAppIdInMessage:(id)arg1 chatRoom:(BOOL)arg2;
- (BOOL)jumpByAppIdInTimeline:(id)arg1;
- (BOOL)isCanJumpWithAppId:(id)arg1;
- (BOOL)isShowTimeLineJumpLink:(id)arg1;
- (BOOL)isShowTimelineSource:(id)arg1;
- (BOOL)isShowAppMessageBottom:(id)arg1;
- (id)getAppIdByFunctionType:(long long)arg1;
- (void)showLaunchAppAlertWithAppId:(id)arg1 confirmHandler:(id /* block */)arg2 cancelHandler:(id /* block */)arg3;
- (void)showLaunchAppAlertWithSchemeUrl:(id)arg1 confirmHandler:(id /* block */)arg2 cancelHandler:(id /* block */)arg3;
- (BOOL)alertLaunchApp:(id)arg1 appName:(id)arg2 withContext:(id)arg3;
- (BOOL)alertOpenURL:(id)arg1;
- (BOOL)alertOpenURL:(id)arg1 schemeComplete:(id /* block */)arg2;
- (BOOL)alertOpenURL:(id)arg1 appName:(id)arg2 schemeComplete:(id /* block */)arg3;
- (BOOL)alertOpenAppID:(id)arg1 alternateAppStoreURL:(id)arg2 appMessage:(id)arg3 appSupportParseUrlParamsType:(unsigned int)arg4 schemeComplete:(id /* block */)arg5;
- (BOOL)setCopyBoardWithContext:(id)arg1;
- (void)confirmJumpOutWeChatWithContext:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)resetSchemeVariable;
- (void)onClickEmptyBackgroundViewToHideTips:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)handleConfirmJumpOutWeChat:(BOOL)arg1 isCancelClick:(BOOL)arg2 neverNoticeAgain:(BOOL)arg3 tagNum:(unsigned long long)arg4 logShowType:(unsigned long long)arg5 logClickType:(unsigned long long)arg6 context:(id)arg7;
- (void)jumpOutWechatWithoutComfirmWithContext:(id)arg1;
- (BOOL)checkSupportCommand:(unsigned int)arg1;
- (void)doShareApiWithApiData:(id)arg1;
- (void)doShareApi:(id)arg1 bundleID:(id)arg2 fromSysCopy:(BOOL)arg3 parameter:(id)arg4;
- (void)cancelAllApi;
- (BOOL)launch3rdApp:(id)arg1 withParameter:(id)arg2 showType:(unsigned long long)arg3 withContext:(id)arg4 extraQueryDict:(id)arg5;
- (void)launch3rdApp:(id)arg1 extraQueryDict:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reportLaunchReqFromAppID:(id)arg1 linkUrl:(id)arg2;
- (BOOL)sendReqLaunchApp:(id)arg1 withMediaInternalMessage:(id)arg2 context:(id)arg3 appSupportParseUrlParamsType:(unsigned int)arg4 schemeComplete:(id /* block */)arg5;
- (BOOL)sendReqLaunchApp:(id)arg1 withMediaInternalMessage:(id)arg2 context:(id)arg3 appSupportParseUrlParamsType:(unsigned int)arg4 disableOpenId:(BOOL)arg5 schemeComplete:(id /* block */)arg6;
- (BOOL)sendReqShowMessage:(id)arg1 withMediaInternalMessage:(id)arg2 appSupportParseUrlParamsType:(unsigned int)arg3 schemeComplete:(id /* block */)arg4;
- (void)sendReq:(id)arg1 conversationAccount:(id)arg2 toApp:(id)arg3 appSupportParseUrlParamsType:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
- (void)sendResp:(id)arg1 toApp:(id)arg2 appSupportParseUrlParamsType:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)sendResp:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3 appSupportParseUrlParamsType:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
- (void)sendResp:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3 allowDegrade2Scheme:(BOOL)arg4 appSupportParseUrlParamsType:(unsigned int)arg5 completionHandler:(id /* block */)arg6;
- (BOOL)packRespToAppData:(id)arg1 appID:(id)arg2 appSupportParseUrlParamsType:(unsigned int)arg3 outputQueryDic:(id *)arg4;
- (void)launch3rdAppWithOpenURL:(id)arg1 appID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reportLaunchApp:(id)arg1 url:(id)arg2 isUniversalLink:(BOOL)arg3 success:(BOOL)arg4;
- (void)sendReqShowMessage:(id)arg1 toApp:(id)arg2 appSupportParseUrlParamsType:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)cancelSendAppMsgHandler;
- (void)cancelOnGotAppMsgHandler;
- (void)cancelSendAppMsgToWCHandler;
- (void)cancelSendAppMsgToFavorites;
- (void)cancelWechatPay;
- (void)cancelWechatHB;
- (void)cancelNewAuth;
- (void)cancelOpenProfile;
- (void)cancelJumpToBizWebview;
- (void)cancelSMSAddCard;
- (void)cancelAppAddCard;
- (void)cancelChooseCard;
- (void)cancelChooseInvoice;
- (void)cancelOpenTempSession;
- (void)cancelSendAppMsgToState;
- (void)cancelOpenWebview;
- (void)cancelOpenMiniProgram;
- (void)cancelOpenBusinessView;
- (void)cancelWeAppTransferAPI;
- (void)cancelOpenTypeWebview;
- (void)cancelOpenSDKHandler;
- (void)cancelOpenRankList;
- (void)cancelOpenOfflinePay;
- (void)cancelOpenCustomerService;
- (void)cancelFinderAuthorBindHandler;
- (void)setIsInternalDownload:(BOOL)arg1;
- (BOOL)isInternalDownload;
- (void)jumpToInstallUrl:(id)arg1 jumpCallBack:(id /* block */)arg2;
- (void)jumpToInstallUrl:(id)arg1 isInternalDownload:(BOOL)arg2 showAlertOnDownload:(BOOL)arg3 context:(id)arg4 currentViewController:(id)arg5 jumpCallBack:(id /* block */)arg6;
- (void)jumpToInstallUrl:(id)arg1 isInternalDownload:(BOOL)arg2 showAlertOnDownload:(BOOL)arg3 context:(id)arg4 skAdItem:(id)arg5 currentViewController:(id)arg6 jumpCallBack:(id /* block */)arg7;
- (void)jumpToWebStoreWithProductId:(id)arg1 skAdItem:(id)arg2 url:(id)arg3 viewController:(id)arg4;
- (void)OnPreAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)doWCPayOpenApi:(id)arg1;
- (id)getPayRespExtraUrlWithResp:(id)arg1;
- (id)getWXQRCodePayRespExtraUrlWithResp:(id)arg1;
- (void)sendWCPayResp:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3;
- (void)sendWXQRCodePayResp:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3;
- (void)sendWCPayRespWithToken:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3 contextID:(id)arg4;
- (void)doWCPayJointPayOpenApi:(id)arg1;
- (id)getJointPayRespExtraUrlWithResp:(id)arg1;
- (void)sendWCJointPayResp:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3;
- (void)sendWCJointPayRespWithToken:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3 contextID:(id)arg4;
- (void)doWCPayWapWithPayInfo:(id)arg1 bundleID:(id)arg2;
- (void)doWCHBOpenApi:(id)arg1;
- (void)sendWCHBResp:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3;
- (void)doOAuthOpenApi:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)doAppAddCard:(id)arg1;
- (void)sendWCAddCardResp:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3 errCode:(int)arg4;
- (void)doChooseCard:(id)arg1;
- (void)sendWCChooseCardResp:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3 errCode:(int)arg4;
- (void)doChooseInvoice:(id)arg1;
- (void)sendWCChooseInvoiceResp:(id)arg1 toApp:(id)arg2 universalLink:(id)arg3 errCode:(int)arg4;
- (void)doOpenTempSessionWithAppId:(id)arg1;
- (void)sendOpenTempSessionRespToApp:(id)arg1 universalLink:(id)arg2 errCode:(int)arg3 notifyStr:(id)arg4;
- (void)showReadPasteBoardNoticeVCWithConfig:(id)arg1;
- (void)tryHideReadPasteBoardNoticeVC;
- (void)doOpenWebviewWithAppId:(id)arg1;
- (void)sendOpenWebViewRespToApp:(id)arg1 universalLink:(id)arg2 errCode:(int)arg3;
- (void)doOpenTypeWebviewWithAppId:(id)arg1;
- (void)sendOpenTypeWebViewRespToApp:(id)arg1 universalLink:(id)arg2 type:(long long)arg3 errCode:(int)arg4;
- (void)doOpenBusinessWebviewWithAppId:(id)arg1;
- (void)sendOpenBusinessWebViewRespToApp:(id)arg1 universalLink:(id)arg2 businessType:(unsigned int)arg3 errCode:(int)arg4;
- (void)sendLaunchWxaRedirectingPageResp:(id)arg1 appID:(id)arg2 universalLink:(id)arg3;
- (void)doOpenMiniProgram:(id)arg1;
- (void)doWxaRedirectingPage:(id)arg1;
- (BOOL)doOpenBusinessView:(id)arg1;
- (void)doHandleScanResult:(id)arg1;
- (void)doOpenRankListWithAppId:(id)arg1;
- (void)sendOpenRandListRespToApp:(id)arg1 universalLink:(id)arg2 errCode:(int)arg3 errStr:(id)arg4;
- (void)doCreateChatRoom:(id)arg1;
- (void)doJoinChatRoom:(id)arg1;
- (void)doOpenWCPayOfflineView:(id)arg1;
- (void)sendOfflinePayRespToApp:(id)arg1 universalLink:(id)arg2 errCode:(int)arg3 errStr:(id)arg4;
- (void)doOpenProfileApi:(id)arg1;
- (void)doJumpToBizWebview:(id)arg1;
- (void)doSMSAddCardApi:(id)arg1;
- (void)doOpenRefreshTokenFailResp:(id)arg1;
- (void)doShareFinderVideo:(id)arg1;
- (void)doOpenFinderProfile:(id)arg1;
- (void)doOpenFinderLive:(id)arg1;
- (void)doOpenFinderFeed:(id)arg1;
- (void)doOpenFinderEvent:(id)arg1;
- (void)doOpenCustomerService:(id)arg1;
- (void)doBindFinderContact:(id)arg1;
- (void)doStartChannelLive:(id)arg1;
- (void)sendStartChannelLiveRespToApp:(id)arg1 universalLink:(id)arg2 resp:(id)arg3;
- (void)doQRCodePay:(id)arg1;
- (void)OnStayAtWechatWithSendAppMsgHandle;
- (void)OnEndWithOnGotAppMsgHandle:(id)arg1;
- (void)onMMConfigUpdated;
- (void)readConfig;
- (BOOL)isUseSendAppMsgHandlerV2;
- (BOOL)isNeedShowReadPasteBoardToast;
- (void)tryShowReadPasteBoardToastWithAppId:(id)arg1;
- (float)showReadPasteBoardToastDuration;
- (id)openApiCacheMMKV;
- (void)setOpenApiCacheMMKV:(id)arg1;
- (id)readPasteBoardNotiveVC;
- (void)setReadPasteBoardNotiveVC:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableLaunchAppInfo;
- (void)setTableLaunchAppInfo:(id)arg1;
- (void).cxx_destruct;
@end

