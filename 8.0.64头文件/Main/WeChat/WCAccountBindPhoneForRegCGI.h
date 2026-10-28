@interface WCAccountBindPhoneForRegCGI : MMObject <PBMessageObserverDelegate>
{
    id <WCAccountBindPhoneForRegCGIDelegate> _delegate; // +0x8
    int _accountRegMode; // +0x10
    NSString * _clientSeqID; // +0x18
    NSString * _currentUserName; // +0x20
    unsigned int _nextAuthType; // +0x28
    BOOL _preserveLoggedIn; // +0x2c
    unsigned int _eventId; // +0x30
    NSString * _extDeviceRegisterURL; // +0x38
    NSNumber * _idcRedirectCount; // +0x40
    NSNumber * _mmtlsSetCount; // +0x48
}
+ (void)setRequest:(id)arg1 FromAccountData:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (unsigned int)cgiNumber;
- (BOOL)isRequesting;
- (void)cancelAllEvent;
- (void)logoutIfNeededAndStartRequest:(id)arg1;
- (void)createEventFromRequest:(id)arg1;
- (void)retryFromCgi:(id)arg1;
- (BOOL)checkRegPhoneNumberStatus:(id)arg1 tryCount:(unsigned int)arg2 adjustRet:(unsigned int)arg3 accountData:(id)arg4;
- (BOOL)checkLoginPhoneNumberStatus:(id)arg1 tryCount:(unsigned int)arg2 adjustRet:(unsigned int)arg3 authTargetUserName:(id)arg4 userShowName:(id)arg5;
- (BOOL)getRegVerifyCode:(id)arg1;
- (BOOL)getLoginVerifyCode:(id)arg1 lastCheckType:(unsigned int)arg2;
- (BOOL)getLoginVoiceVerifyCode:(id)arg1 lastCheckType:(unsigned int)arg2 languageCode:(id)arg3;
- (BOOL)getRegVoiceVerifyCode:(id)arg1 languageCode:(id)arg2;
- (BOOL)checkRegVerifyCode:(id)arg1 verifyCode:(id)arg2 checkType:(unsigned int)arg3 checkCount:(unsigned int)arg4;
- (BOOL)checkLoginVerifyCode:(id)arg1 verifyCode:(id)arg2 checkType:(unsigned int)arg3 checkCount:(unsigned int)arg4 authTargetUserName:(id)arg5 userShowName:(id)arg6;
- (BOOL)doPostCheckRegState:(id)arg1;
- (BOOL)handleIdcRedirect:(id)arg1;
- (BOOL)handleMMTLS;
- (void)handleResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)clientSeqID;
- (void)setClientSeqID:(id)arg1;
- (id)currentUserName;
- (void)setCurrentUserName:(id)arg1;
- (id)extDeviceRegisterURL;
- (void)setExtDeviceRegisterURL:(id)arg1;
- (BOOL)preserveLoggedIn;
- (void)setPreserveLoggedIn:(BOOL)arg1;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (id)idcRedirectCount;
- (void)setIdcRedirectCount:(id)arg1;
- (id)mmtlsSetCount;
- (void)setMmtlsSetCount:(id)arg1;
- (void).cxx_destruct;
@end
