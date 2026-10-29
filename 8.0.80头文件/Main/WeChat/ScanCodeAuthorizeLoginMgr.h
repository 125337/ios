@interface ScanCodeAuthorizeLoginMgr : MMUserService <MMAuthorizeViewControllerDelegate, PBMessageObserverDelegate, MMTipsViewControllerDelegate, OpenSDKAuthNeedFaceDetectViewControllerDelegate, MMServiceProtocol>
{
    BOOL _isBanModifyAvatar; // +0x8
    BOOL _isHaveGamecenterPage; // +0x9
    unsigned int _avatarLimit; // +0xc
    unsigned int _defaultAvatarId; // +0x10
    unsigned int _selectedAvatarId; // +0x14
    int _errCode; // +0x18
    unsigned int _sessionID; // +0x1c
    unsigned int _stayStartTime; // +0x20
    NSString * _scanUrl; // +0x28
    NSString * _fullUrl; // +0x30
    NSString * _appId; // +0x38
    NSString * _scope; // +0x40
    NSString * _state; // +0x48
    NSString * _appName; // +0x50
    NSString * _iconUrl; // +0x58
    NSMutableArray * _avatarList; // +0x60
    NSString * _defaultAvatarImgUrl; // +0x68
    NSString * _defaultAvatarImgFileId; // +0x70
    QRConnectAuthorizeResp * _resp; // +0x78
    ScanCodeAuthorizeBaseViewController * _baseVC; // +0x80
    OauthScopeInfo * _userInfoScope; // +0x88
    OauthScopeInfo * _friendsInfoScope; // +0x90
    NSMutableArray * _arrOtherScopeInfo; // +0x98
    NSMutableArray * _arrComfirmScopeInfo; // +0xa0
    unsigned long long _curStep; // +0xa8
    NSMutableDictionary * _extraInfo; // +0xb0
    MMWebViewController * _webVC; // +0xb8
    NSString * _errMsg; // +0xc0
    GetUserGrantInfoBuffer * _getUserGrantInfoBuffer; // +0xc8
    SetUserGrantInfoBuffer * _setUserGrantInfoBuffer; // +0xd0
    unsigned long long _stepStartTime; // +0xd8
}
- (void)dealloc;
- (void)resetData;
- (void)handleScanUrl:(id)arg1 fullUrl:(id)arg2 extraInfo:(id)arg3;
- (void)openWebviewAuthorize;
- (void)initDataWithResp:(id)arg1;
- (void)initScopeInfo:(id)arg1;
- (void)startWorkFlow;
- (BOOL)jumpToNextStepByComfirm:(BOOL)arg1 interrupt:(BOOL *)arg2 animated:(BOOL)arg3;
- (void)startUserInfoAuthorizeWithAnimated:(BOOL)arg1;
- (void)startFriendsAuthorizeWithAnimated:(BOOL)arg1;
- (void)startOtherScopeAuthorizeWithAnimated:(BOOL)arg1;
- (void)startOverseasAuthorizeWithAnimated:(BOOL)arg1;
- (void)requestAuthorizeDataWithRequest:(id)arg1;
- (void)sendCancelOprationToSvr;
- (void)sendDenyOperationToSvr;
- (void)sendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)doOAuthComfirm:(id)arg1 fromVC:(id)arg2;
- (void)sendAuthorizeComfirmCGI:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOauthResponse:(id)arg1;
- (void)handleConfirmResp:(id)arg1;
- (void)onScopeViewControllerConfirm:(id)arg1;
- (void)onScopeViewControllerDeny:(id)arg1;
- (void)onScopeViewControllerClose:(id)arg1;
- (void)showErrCode:(int)arg1 errMsg:(id)arg2 isInitErr:(BOOL)arg3;
- (void)reportAuthOperate:(unsigned long long)arg1 step:(unsigned long long)arg2 isShowAuthView:(BOOL)arg3 errCode:(int)arg4;
- (void)reportAuthCostTime:(unsigned int)arg1 errCode:(int)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)dismissAuthView:(int)arg1;
- (BOOL)shouldShowGameInfoAuthorizePage;
- (void)startGameInfoAuthorizeWithAnimated:(BOOL)arg1;
- (void)onCancelFaceDetect;
- (void)onFaceRecogFinish:(unsigned int)arg1;
- (void)safeCheckViewIsClickedConfirm:(BOOL)arg1;
- (id)scanUrl;
- (void)setScanUrl:(id)arg1;
- (id)fullUrl;
- (void)setFullUrl:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)avatarList;
- (void)setAvatarList:(id)arg1;
- (unsigned int)avatarLimit;
- (void)setAvatarLimit:(unsigned int)arg1;
- (unsigned int)defaultAvatarId;
- (void)setDefaultAvatarId:(unsigned int)arg1;
- (BOOL)isBanModifyAvatar;
- (void)setIsBanModifyAvatar:(BOOL)arg1;
- (id)defaultAvatarImgUrl;
- (void)setDefaultAvatarImgUrl:(id)arg1;
- (id)defaultAvatarImgFileId;
- (void)setDefaultAvatarImgFileId:(id)arg1;
- (id)resp;
- (void)setResp:(id)arg1;
- (id)baseVC;
- (void)setBaseVC:(id)arg1;
- (id)userInfoScope;
- (void)setUserInfoScope:(id)arg1;
- (id)friendsInfoScope;
- (void)setFriendsInfoScope:(id)arg1;
- (id)arrOtherScopeInfo;
- (void)setArrOtherScopeInfo:(id)arg1;
- (id)arrComfirmScopeInfo;
- (void)setArrComfirmScopeInfo:(id)arg1;
- (unsigned long long)curStep;
- (void)setCurStep:(unsigned long long)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (unsigned int)selectedAvatarId;
- (void)setSelectedAvatarId:(unsigned int)arg1;
- (int)errCode;
- (void)setErrCode:(int)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)getUserGrantInfoBuffer;
- (void)setGetUserGrantInfoBuffer:(id)arg1;
- (BOOL)isHaveGamecenterPage;
- (void)setIsHaveGamecenterPage:(BOOL)arg1;
- (id)setUserGrantInfoBuffer;
- (void)setSetUserGrantInfoBuffer:(id)arg1;
- (unsigned int)sessionID;
- (void)setSessionID:(unsigned int)arg1;
- (unsigned int)stayStartTime;
- (void)setStayStartTime:(unsigned int)arg1;
- (unsigned long long)stepStartTime;
- (void)setStepStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
