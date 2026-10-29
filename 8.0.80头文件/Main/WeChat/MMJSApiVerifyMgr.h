@interface MMJSApiVerifyMgr : NSObject <PBMessageObserverDelegate>
{
    NSMutableDictionary * _dictUrl2JSApiPermissions; // +0x8
    NSMutableDictionary * _dictApiName2Index; // +0x10
    id <MMJSApiVerifyMgrDelegate> _mgrDelegate; // +0x18
    NSMutableDictionary * _dictRealTimeVerify; // +0x20
    NSMutableDictionary * _dictOfflineVerify; // +0x28
    NSMutableDictionary * _dictApiAuthInfo; // +0x30
    NSMutableArray * _jsAuthQueue; // +0x38
    BOOL _isHandlingJSAuth; // +0x40
    NSMutableDictionary * _dictAuthFuncBlock; // +0x48
    NSString * _alertTile; // +0x50
    JSAPIAuthWrap * _makingAuthWrap; // +0x58
    NSMutableDictionary * _dictVerifyOverhead; // +0x60
    NSArray * _groupAuthInfoList; // +0x68
    NSMutableDictionary * _dictHidedMenuitemByPage; // +0x70
    NSMutableDictionary * _dictScopeAuthInfo; // +0x78
    NSMutableDictionary * _dictUrl2AppId; // +0x80
    NSMutableDictionary * _dictUrl2BrandIconUrl; // +0x88
    NSMutableDictionary * _dictUrl2VerifyInfoList; // +0x90
    NSMutableDictionary * _dictUrl2DomainPathList; // +0x98
    NSMutableDictionary * _dicPageStateChangeUrl; // +0xa0
    unsigned long long _preverifyScene; // +0xa8
    long long _entryScene; // +0xb0
    NSString * _miniProgramAppid; // +0xb8
}
- (id)init;
- (void)dealloc;
- (void)setPageStateChangeUrl:(id)arg1 baseUrl:(id)arg2;
- (id)getPageStateChangeBaseUrlForUrl:(id)arg1;
- (void)saveJSApiPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSApiPermissions:(id)arg1 url:(id)arg2 WithCheckedPreVerifyList:(BOOL)arg3;
- (unsigned char)getJSApiPermission:(id)arg1 url:(id)arg2;
- (BOOL)hasJSApiPermissionForUrl:(id)arg1;
- (id)getUrlWithoutFragment:(id)arg1;
- (BOOL)canFixWkWebviewPermissionWithUrl:(id)arg1 permissionRet:(id *)arg2;
- (void)startupPreVerifyJSAPI:(id)arg1 url:(id)arg2 failHandleBlock:(id /* block */)arg3;
- (void)startupPreVerifyJSAPI:(id)arg1 url:(id)arg2 mainFrameSessionId:(id)arg3 failHandleBlock:(id /* block */)arg4;
- (void)startupRealTimeVerifyJSAPI:(id)arg1 url:(id)arg2 functionDef:(id)arg3 funcBlock:(id /* block */)arg4 failHandleBlock:(id /* block */)arg5;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)saveScopeAuthInfo:(id)arg1;
- (void)checkJSAPIAuth:(id)arg1 url:(id)arg2 functionDef:(id)arg3 funcBlock:(id /* block */)arg4 failHandleBlock:(id /* block */)arg5;
- (id)getPermissionedWebEventsForOfflineH5:(id)arg1;
- (id)getCustomDomainsForUrl:(id)arg1;
- (BOOL)compartHashUrl:(id)arg1 other:(id)arg2;
- (id)getAuthorizedWebMonitorEvents:(id)arg1 withCurEvent:(id)arg2;
- (void)hideMenuitemBatch:(id)arg1;
- (void)showMenuitemBatch:(id)arg1;
- (void)showAllNonBaseMenuItem;
- (void)hideAllNonBaseMenuItem;
- (BOOL)isMenuItemHidenByPage:(id)arg1;
- (id)getAppIdForUrl:(id)arg1;
- (id)getAppHeadImgUrlForUrl:(id)arg1;
- (unsigned int)a8keyRequestID;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)failHandleBlockKey:(id)arg1;
- (id)funcBlockKey:(id)arg1;
- (void)askUsrToMakeAuth:(id /* block */)arg1 authWrap:(id)arg2 failBlock:(id /* block */)arg3;
- (void)addJSAuthToQueue:(id)arg1 funcBlock:(id /* block */)arg2 failHandleBlock:(id /* block */)arg3;
- (void)checkJSAuthQueue;
- (id)getApiAuthInfo:(id)arg1;
- (id)getScopeAuthInfo:(id)arg1 apiName:(id)arg2;
- (void)handleJSAuthFail:(id)arg1 errDesc:(id)arg2 authWrap:(id)arg3;
- (void)handleJSOAuth:(id)arg1;
- (void)handleSetAuth:(id)arg1;
- (void)handleRealtimeVerifyJSAPI:(id)arg1;
- (void)mergeJSAPIPermission:(id)arg1 withVerifyList:(id)arg2;
- (void)handlePreVerifyJSAPI:(id)arg1;
- (long long)getPermissionIndexFromApiName:(id)arg1;
- (long long)getPermissionIndex:(id)arg1;
- (void)sendSetAuthRequest:(id)arg1;
- (void)handleJSAPICallBack:(id)arg1 err_msg:(id)arg2 failBlock:(id /* block */)arg3;
- (void)__setObject:(id)arg1 forUrl:(id)arg2 inNoFragmentDictionary:(id)arg3;
- (void)__removeObjForUrl:(id)arg1 inNoFragmentDictionary:(id)arg2;
- (id)__mutableArrayForUrl:(id)arg1 inNoFragmentDictionary:(id)arg2;
- (void)kvJSCallReport:(id)arg1 permissionValue:(unsigned char)arg2 isSuccess:(BOOL)arg3 errorCode:(long long)arg4 baseErrorCode:(long long)arg5 funcName:(id)arg6;
- (void)idKeyReportForVerifyFail:(id)arg1;
- (id)mgrDelegate;
- (void)setMgrDelegate:(id)arg1;
- (unsigned long long)preverifyScene;
- (void)setPreverifyScene:(unsigned long long)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (id)miniProgramAppid;
- (void)setMiniProgramAppid:(id)arg1;
- (void).cxx_destruct;
@end
