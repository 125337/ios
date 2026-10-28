@interface WCAccountControlData : NSObject
{
    BOOL _m_bAdjustRet; // +0x8
    BOOL _needDoPostCheck; // +0x9
    BOOL _affRegAccountKeepOldLogic; // +0xa
    BOOL _affRegAccountWithFinder; // +0xb
    BOOL _kidsWatchShowSyncChat; // +0xc
    BOOL _isPasskeyLoginAutoShow; // +0xd
    unsigned int _m_uiLoginType; // +0x10
    unsigned int _m_uiFromScene; // +0x14
    int _m_iRegisterControlFlag; // +0x18
    int _m_iInputType; // +0x1c
    int _m_iForceReg; // +0x20
    int _m_iRegMode; // +0x24
    unsigned int _m_uiRegNextShowStyle; // +0x28
    unsigned int _m_uiAdjustRet; // +0x2c
    unsigned int _mobileCheckType; // +0x30
    NSString * _m_nsPwd; // +0x38
    NSString * _m_nsPwdMD5; // +0x40
    NSString * _m_nsPwd16MD5; // +0x48
    NSString * _m_nsUserName; // +0x50
    NSString * _m_nsLastLoginName; // +0x58
    NSString * _m_nsContryCode; // +0x60
    NSString * _m_nsContryISOCode; // +0x68
    NSString * _m_nsPhoneNumber; // +0x70
    NSString * _m_nsFormatedPhoneNumber; // +0x78
    NSString * _m_nsTicket; // +0x80
    UnifyAuthResponse * _m_structAuthResponse; // +0x88
    NSArray * _m_arrNextStep; // +0x90
    UIImage * _m_headImage; // +0x98
    NSData * _m_dtVerifyImg; // +0xa0
    NSString * _m_nsAlias; // +0xa8
    NSString * _m_nsNickName; // +0xb0
    NSString * _m_nsVerifySignature; // +0xb8
    NSString * _m_nsVerifyCode; // +0xc0
    NSDictionary * _m_dicStyleKeyValue; // +0xc8
    NSString * _m_nsRandomID; // +0xd0
    NSString * _m_regSessionId; // +0xd8
    NSString * _m_thirdAppAuthTicket; // +0xe0
    NSString * _m_appleIdTicket; // +0xe8
    NSString * _m_simMobileMsgID; // +0xf0
    NSString * _m_extSpamCtxString; // +0xf8
    MobileInfo * _maskedMobileInfo; // +0x100
    NSMutableArray * _m_arrUserInfos; // +0x108
    LoginUserInfo * _m_userInfo; // +0x110
    NSString * _smsUpCode; // +0x118
    NSString * _smsUpMobile; // +0x120
    NSMutableDictionary * _m_dicVCParam; // +0x128
    NSString * _kidsWatchURL; // +0x130
    NSArray * _kidsAccountInfoList; // +0x138
    NSString * _kidsAccountOpenID; // +0x140
}
- (id)init;
- (BOOL)isFromReg;
- (BOOL)isFromLogin;
- (BOOL)isFromForgetPwd;
- (BOOL)isDialCodeCheckType;
- (BOOL)hasPhoneNumber;
- (unsigned int)m_uiLoginType;
- (void)setM_uiLoginType:(unsigned int)arg1;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (id)m_nsPwd;
- (void)setM_nsPwd:(id)arg1;
- (id)m_nsPwdMD5;
- (void)setM_nsPwdMD5:(id)arg1;
- (id)m_nsPwd16MD5;
- (void)setM_nsPwd16MD5:(id)arg1;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (id)m_nsLastLoginName;
- (void)setM_nsLastLoginName:(id)arg1;
- (id)m_nsContryCode;
- (void)setM_nsContryCode:(id)arg1;
- (id)m_nsContryISOCode;
- (void)setM_nsContryISOCode:(id)arg1;
- (id)m_nsPhoneNumber;
- (void)setM_nsPhoneNumber:(id)arg1;
- (id)m_nsFormatedPhoneNumber;
- (void)setM_nsFormatedPhoneNumber:(id)arg1;
- (id)m_nsTicket;
- (void)setM_nsTicket:(id)arg1;
- (int)m_iRegisterControlFlag;
- (void)setM_iRegisterControlFlag:(int)arg1;
- (id)m_structAuthResponse;
- (void)setM_structAuthResponse:(id)arg1;
- (id)m_arrNextStep;
- (void)setM_arrNextStep:(id)arg1;
- (id)m_headImage;
- (void)setM_headImage:(id)arg1;
- (id)m_dtVerifyImg;
- (void)setM_dtVerifyImg:(id)arg1;
- (id)m_nsAlias;
- (void)setM_nsAlias:(id)arg1;
- (id)m_nsNickName;
- (void)setM_nsNickName:(id)arg1;
- (id)m_nsVerifySignature;
- (void)setM_nsVerifySignature:(id)arg1;
- (id)m_nsVerifyCode;
- (void)setM_nsVerifyCode:(id)arg1;
- (int)m_iInputType;
- (void)setM_iInputType:(int)arg1;
- (int)m_iForceReg;
- (void)setM_iForceReg:(int)arg1;
- (int)m_iRegMode;
- (void)setM_iRegMode:(int)arg1;
- (unsigned int)m_uiRegNextShowStyle;
- (void)setM_uiRegNextShowStyle:(unsigned int)arg1;
- (id)m_dicStyleKeyValue;
- (void)setM_dicStyleKeyValue:(id)arg1;
- (id)m_nsRandomID;
- (void)setM_nsRandomID:(id)arg1;
- (BOOL)m_bAdjustRet;
- (void)setM_bAdjustRet:(BOOL)arg1;
- (unsigned int)m_uiAdjustRet;
- (void)setM_uiAdjustRet:(unsigned int)arg1;
- (id)m_regSessionId;
- (void)setM_regSessionId:(id)arg1;
- (id)m_thirdAppAuthTicket;
- (void)setM_thirdAppAuthTicket:(id)arg1;
- (id)m_appleIdTicket;
- (void)setM_appleIdTicket:(id)arg1;
- (id)m_simMobileMsgID;
- (void)setM_simMobileMsgID:(id)arg1;
- (id)m_extSpamCtxString;
- (void)setM_extSpamCtxString:(id)arg1;
- (id)maskedMobileInfo;
- (void)setMaskedMobileInfo:(id)arg1;
- (id)m_arrUserInfos;
- (void)setM_arrUserInfos:(id)arg1;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (id)smsUpCode;
- (void)setSmsUpCode:(id)arg1;
- (id)smsUpMobile;
- (void)setSmsUpMobile:(id)arg1;
- (unsigned int)mobileCheckType;
- (void)setMobileCheckType:(unsigned int)arg1;
- (BOOL)needDoPostCheck;
- (void)setNeedDoPostCheck:(BOOL)arg1;
- (id)m_dicVCParam;
- (void)setM_dicVCParam:(id)arg1;
- (BOOL)affRegAccountKeepOldLogic;
- (void)setAffRegAccountKeepOldLogic:(BOOL)arg1;
- (BOOL)affRegAccountWithFinder;
- (void)setAffRegAccountWithFinder:(BOOL)arg1;
- (id)kidsWatchURL;
- (void)setKidsWatchURL:(id)arg1;
- (id)kidsAccountInfoList;
- (void)setKidsAccountInfoList:(id)arg1;
- (id)kidsAccountOpenID;
- (void)setKidsAccountOpenID:(id)arg1;
- (BOOL)kidsWatchShowSyncChat;
- (void)setKidsWatchShowSyncChat:(BOOL)arg1;
- (BOOL)isPasskeyLoginAutoShow;
- (void)setIsPasskeyLoginAutoShow:(BOOL)arg1;
- (void).cxx_destruct;
@end
