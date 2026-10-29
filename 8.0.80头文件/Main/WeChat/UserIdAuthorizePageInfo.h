@interface UserIdAuthorizePageInfo : MMObject
{
    BOOL _authChecked; // +0x8
    BOOL _showPrivacyInfo; // +0x9
    NSString * _appid; // +0x10
    NSString * _title; // +0x18
    NSString * _appIconUrl; // +0x20
    NSString * _appName; // +0x28
    NSString * _authWording; // +0x30
    NSMutableArray * _userIdList; // +0x38
    NSString * _businessWording; // +0x40
    NSString * _confirmWording; // +0x48
    UserIdAuthorizePageJumpItem * _protocolJump; // +0x50
    NSMutableArray * _jumpItemList; // +0x58
    NSString * _ticket; // +0x60
    VerifyWxPayReqInfo * _verifyPayReq; // +0x68
    NSString * _protocolPrefix; // +0x70
    NSMutableArray * _userIdListNew; // +0x78
    AuthorizeInfoWithPhone * _authorizeInfo; // +0x80
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)appIconUrl;
- (void)setAppIconUrl:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)authWording;
- (void)setAuthWording:(id)arg1;
- (id)userIdList;
- (void)setUserIdList:(id)arg1;
- (id)businessWording;
- (void)setBusinessWording:(id)arg1;
- (id)confirmWording;
- (void)setConfirmWording:(id)arg1;
- (id)protocolJump;
- (void)setProtocolJump:(id)arg1;
- (id)jumpItemList;
- (void)setJumpItemList:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)verifyPayReq;
- (void)setVerifyPayReq:(id)arg1;
- (BOOL)authChecked;
- (void)setAuthChecked:(BOOL)arg1;
- (id)protocolPrefix;
- (void)setProtocolPrefix:(id)arg1;
- (id)userIdListNew;
- (void)setUserIdListNew:(id)arg1;
- (id)authorizeInfo;
- (void)setAuthorizeInfo:(id)arg1;
- (BOOL)showPrivacyInfo;
- (void)setShowPrivacyInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
