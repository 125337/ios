@interface WebViewA8KeyLogicImpl : MMObject <IJumpEmoticonDetailCgiDelegate, PBMessageObserverDelegate>
{
    unsigned int _firstGetA8KeyOpCode; // +0x8
    NSString * _firstGetA8KeyAppId; // +0x10
    NSString * _firstGetA8KeyScope; // +0x18
    NSString * _firstGetA8KeyState; // +0x20
    unsigned int _getA8KeyScene; // +0x28
    timeval _getA8KeyStartTime; // +0x30
    NSString * _bundleId; // +0x40
    NSString * _getA8KeyUsrname; // +0x48
    unsigned int _getA8KeyEventId; // +0x50
    unsigned int _getA8KeyReason; // +0x54
    NSMutableDictionary * _dicUrlPermission; // +0x58
    NSMutableDictionary * _dicShareUrlForMainUrl; // +0x60
    NSMutableDictionary * _dicMenuInfoTitle; // +0x68
    WebviewAskAuthorizationLogic * _authorizationLogic; // +0x70
    BOOL _alwaysAllowJumpUrl; // +0x78
    NSMutableSet * _disableGetA8KeyUrlList; // +0x80
    id <WebViewA8KeyLogicDelegate> _delegate; // +0x88
    NSURL * _currentUrl; // +0x90
    BOOL m_hasSetFontPermission; // +0x98
    unsigned int m_fontScale; // +0x9c
    UIView<YYWebViewInterface> * _webView; // +0xa0
    NSString * _payWalletFunctionID; // +0xa8
    NSMutableDictionary * _dictUrlWebComInfo; // +0xb0
    vector<mars::smc::STIDKeyInfo, std::allocator<mars::smc::STIDKeyInfo>> _pIDKeyList; // +0xb8
    NSString * _currentShareUrl; // +0xd0
    NSMutableDictionary * _dictUrl2PushStateShareUrl; // +0xd8
    BOOL _banIframeGetA8key; // +0xe0
    unsigned int _firstGetA8KeyOpcode; // +0xe4
    unsigned int m_RequestID; // +0xe8
    unsigned int _uiPayWalletRegion; // +0xec
    unsigned int _contentType; // +0xf0
    unsigned int _appMsgInnerType; // +0xf4
    JumpEmoticonDetailCgi * m_jumpEmoticonDetailCgi; // +0xf8
    NSString * _refererUrl; // +0x100
    NSMutableDictionary * _originalUrl2OfflineA8KeyData; // +0x108
    SKBuiltinBuffer_t * _a8keyCookie; // +0x110
    NSString * _firstGetA8KeyRespUrl; // +0x118
    NSString * _msgUserName; // +0x120
    NSString * _msgId; // +0x128
    NSString * _getA8keySceneNoteTmplUsername; // +0x130
    NSString * _getA8keySceneNoteTmplId; // +0x138
    NSString * _firstGetA8KeyReqUrl; // +0x140
}
- (id)init;
- (void)dealloc;
- (void)getA8Key:(id)arg1 Reason:(int)arg2;
- (void)getA8Key:(id)arg1 Reason:(int)arg2 context:(id)arg3;
- (BOOL)isGettingA8Key;
- (BOOL)isAsynGetA8KeyAndNeedInjectWxjs;
- (void)updateGetA8KeySceneBySourceType:(long long)arg1;
- (void)checkApiAuthorization:(id)arg1;
- (id)getRequestingOrCurrentUrl;
- (id)GetMainDocumentURL;
- (id)getPermissionForUrl:(id)arg1;
- (id)__tryGetPermissionForUrl:(id)arg1;
- (void)setPermission:(id)arg1 ForUrl:(id)arg2;
- (void)setShareUrl:(id)arg1 forMain:(id)arg2;
- (id)getShareUrlForMain:(id)arg1;
- (void)changeCurrentShareUrlForMainUrl:(id)arg1;
- (id)getShareUrl;
- (id)GetDefaultPermisson;
- (unsigned long long)getDeepLinkBitSet;
- (unsigned int)getPermissionBitSet;
- (unsigned int)getPermissionBitSet2;
- (unsigned int)getPermissionBitSet3;
- (unsigned int)getGeneralBitSet;
- (unsigned int)getGeneralBitSetForUrl:(id)arg1;
- (BOOL)hasUrlPermission:(id)arg1;
- (id)getUrlPermission:(id)arg1;
- (BOOL)isDisableGetA8KeyForUrl:(id)arg1;
- (void)setUrlPermission:(id)arg1 GeneralCtrl:(id)arg2 DeepLink:(id)arg3 forURL:(id)arg4;
- (id)getMenuInfoTitle;
- (id)a8keyWebComArrForUrl:(id)arg1;
- (void)goToURL:(id)arg1 withCustomerCookies:(id)arg2;
- (void)handleOnGetA8KeyOK:(id)arg1 reason:(int)arg2 req:(id)arg3 context:(id)arg4;
- (BOOL)handleVerifyPrefetchAction:(id)arg1 req:(id)arg2;
- (void)keepA8KeyResult:(id)arg1 reqUrl:(id)arg2 context:(id)arg3;
- (void)handleGetA8KeyResp:(id)arg1 EventID:(unsigned int)arg2;
- (void)reportGetA8KeyRequest:(id)arg1;
- (void)reportGetA8KeyForceRedirect;
- (void)reportGetA8KeyFailForReason:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onJumpEmoticonDetailCgiOkWithPackageId:(id)arg1;
- (void)onJumpEmoticonDetailCgiFailed:(id)arg1;
- (id)getUrlWithoutFragment:(id)arg1;
- (void)setWebComInfoData:(id)arg1 forUrl:(id)arg2;
- (unsigned int)firstGetA8KeyOpcode;
- (void)setFirstGetA8KeyOpcode:(unsigned int)arg1;
- (id)firstGetA8KeyAppId;
- (void)setFirstGetA8KeyAppId:(id)arg1;
- (id)firstGetA8KeyScope;
- (void)setFirstGetA8KeyScope:(id)arg1;
- (id)firstGetA8KeyState;
- (void)setFirstGetA8KeyState:(id)arg1;
- (unsigned int)getA8KeyScene;
- (void)setGetA8KeyScene:(unsigned int)arg1;
- (unsigned int)getA8KeyReason;
- (id)bundleId;
- (void)setBundleId:(id)arg1;
- (id)getA8KeyUsrname;
- (void)setGetA8KeyUsrname:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (BOOL)alwaysAllowJumpUrl;
- (BOOL)m_hasSetFontPermission;
- (unsigned int)m_fontScale;
- (id)m_jumpEmoticonDetailCgi;
- (void)setM_jumpEmoticonDetailCgi:(id)arg1;
- (unsigned int)m_RequestID;
- (void)setM_RequestID:(unsigned int)arg1;
- (id)m_payWalletFunctionID;
- (void)setM_payWalletFunctionID:(id)arg1;
- (unsigned int)m_uiPayWalletRegion;
- (void)setM_uiPayWalletRegion:(unsigned int)arg1;
- (id)refererUrl;
- (void)setRefererUrl:(id)arg1;
- (id)originalUrl2OfflineA8KeyData;
- (void)setOriginalUrl2OfflineA8KeyData:(id)arg1;
- (id)a8keyCookie;
- (void)setA8keyCookie:(id)arg1;
- (BOOL)banIframeGetA8key;
- (void)setBanIframeGetA8key:(BOOL)arg1;
- (id)firstGetA8KeyRespUrl;
- (void)setFirstGetA8KeyRespUrl:(id)arg1;
- (id)msgUserName;
- (void)setMsgUserName:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (unsigned int)contentType;
- (void)setContentType:(unsigned int)arg1;
- (unsigned int)appMsgInnerType;
- (void)setAppMsgInnerType:(unsigned int)arg1;
- (id)getA8keySceneNoteTmplUsername;
- (void)setGetA8keySceneNoteTmplUsername:(id)arg1;
- (id)getA8keySceneNoteTmplId;
- (void)setGetA8keySceneNoteTmplId:(id)arg1;
- (id)firstGetA8KeyReqUrl;
- (void)setFirstGetA8KeyReqUrl:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

