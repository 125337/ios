@interface OpenSDKAuthorizeLoginManager : MMObject <MMAuthorizeViewControllerDelegate, PBMessageObserverDelegate, MMTipsViewControllerDelegate, OpenSDKAuthNeedFaceDetectViewControllerDelegate>
{
    BOOL _isBanModifyAvatar; // +0x8
    BOOL _isUseNewPage; // +0x9
    BOOL _needNotifySvrWhenConfirm; // +0xa
    BOOL _isHaveGamecenterPage; // +0xb
    BOOL _isCurAuthReqFinished; // +0xc
    unsigned int _avatarLimit; // +0x10
    unsigned int _defaultAvatarId; // +0x14
    unsigned int _selectedAvatarId; // +0x18
    int _errCode; // +0x1c
    unsigned int _sessionID; // +0x20
    unsigned int _stayStartTime; // +0x24
    MMUIViewController * _baseVC; // +0x28
    id <OpenSDKAuthorizeLoginManagerDelegate> _delegate; // +0x30
    OpenSDKOAuthRequest * _curReq; // +0x38
    NSString * _appName; // +0x40
    NSString * _iconUrl; // +0x48
    NSMutableArray * _avatarList; // +0x50
    NSString * _defaultAvatarImgUrl; // +0x58
    NSString * _defaultAvatarImgFileId; // +0x60
    OauthScopeInfo * _userInfoScope; // +0x68
    OauthScopeInfo * _friendsInfoScope; // +0x70
    NSMutableArray * _arrOtherScopeInfo; // +0x78
    NSMutableArray * _arrComfirmScopeInfo; // +0x80
    unsigned long long _curStep; // +0x88
    NSString * _redirectUrl; // +0x90
    NSString * _userConfirmRedirectUrl; // +0x98
    NSString * _userConfirmWording; // +0xa0
    NSData * _OAuthAuthorizeResp_iLinkAuthBuffer; // +0xa8
    NSString * _errMsg; // +0xb0
    SdkOauthAuthorizeResp * _curOauthResp; // +0xb8
    GetUserGrantInfoBuffer * _getUserGrantInfoBuffer; // +0xc0
    SetUserGrantInfoBuffer * _setUserGrantInfoBuffer; // +0xc8
    unsigned long long _stepStartTime; // +0xd0
}
+ (void)fillAuthAuthorizeReq:(id)arg1 WithLoginReq:(id)arg2;
+ (void)fillAuthConfirmReq:(id)arg1 WithLoginReq:(id)arg2;
- (void)dealloc;
- (id)initWithAuthReq:(id)arg1;
- (id)baseVC;
- (void)startLogic;
- (void)initDataWithResp:(id)arg1;
- (void)initScopeInfo:(id)arg1;
- (void)startWorkFlow;
- (BOOL)stepToNextStepByComfirm:(BOOL)arg1 interrupt:(BOOL *)arg2 animated:(BOOL)arg3;
- (void)startUserInfoAuthorizeWithAnimated:(BOOL)arg1;
- (void)startFriendsAuthorizeWithAnimated:(BOOL)arg1;
- (void)startOtherScopeAuthorizeWithAnimated:(BOOL)arg1;
- (void)startOverseasAuthorizeWithAnimated:(BOOL)arg1;
- (void)loadDataFromSvr;
- (void)sendCancelOprationToSvr;
- (void)sendDenyOperationToSvr;
- (void)sendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)doOAuthComfirm:(id)arg1 fromVC:(id)arg2;
- (void)checkSendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)sendAuthorizeComfirmCGI:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOauthResponse:(id)arg1;
- (void)handleConfirmResp:(id)arg1;
- (void)onScopeViewControllerConfirm:(id)arg1;
- (void)onScopeViewControllerDeny:(id)arg1;
- (void)onScopeViewControllerClose:(id)arg1;
- (void)showErrCode:(int)arg1 errMsg:(id)arg2;
- (void)reportAuthOperate:(unsigned long long)arg1 step:(unsigned long long)arg2 isShowAuthView:(BOOL)arg3 errCode:(int)arg4;
- (void)reportAuthCostTime:(unsigned int)arg1 errCode:(int)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (BOOL)shouldShowGameInfoAuthorizePage;
- (void)startGameInfoAuthorizeWithAnimated:(BOOL)arg1;
- (void)onCancelFaceDetect;
- (void)onFaceRecogFinish:(unsigned int)arg1;
- (void)setBaseVC:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)curReq;
- (void)setCurReq:(id)arg1;
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
- (unsigned int)selectedAvatarId;
- (void)setSelectedAvatarId:(unsigned int)arg1;
- (BOOL)isUseNewPage;
- (void)setIsUseNewPage:(BOOL)arg1;
- (BOOL)needNotifySvrWhenConfirm;
- (void)setNeedNotifySvrWhenConfirm:(BOOL)arg1;
- (id)redirectUrl;
- (void)setRedirectUrl:(id)arg1;
- (id)userConfirmRedirectUrl;
- (void)setUserConfirmRedirectUrl:(id)arg1;
- (id)userConfirmWording;
- (void)setUserConfirmWording:(id)arg1;
- (id)OAuthAuthorizeResp_iLinkAuthBuffer;
- (void)setOAuthAuthorizeResp_iLinkAuthBuffer:(id)arg1;
- (int)errCode;
- (void)setErrCode:(int)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)curOauthResp;
- (void)setCurOauthResp:(id)arg1;
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
- (BOOL)isCurAuthReqFinished;
- (void)setIsCurAuthReqFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
