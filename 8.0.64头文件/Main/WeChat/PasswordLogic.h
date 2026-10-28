@interface PasswordLogic : MMObject <PBMessageObserverDelegate, UITextFieldDelegate, GraphicVerifyWindowDelegate>
{
    id <PasswordLogicDelegate> m_delegate; // +0x8
    unsigned int m_opCode; // +0x10
    unsigned int m_uiScene; // +0x14
    NSString * m_nsPwd; // +0x18
    NSString * m_nsPwdMd5; // +0x20
    NSString * m_nsPwd2; // +0x28
    NSData * m_dtVerifyImg; // +0x30
    GraphicVerifyWindow * m_winVerifyImg; // +0x38
    NSString * m_nsImgEncryptKey; // +0x40
    NSData * m_dtKSid; // +0x48
    unsigned int m_uiVerfyPwdScene; // +0x50
    BOOL m_bVerify_Pwd_Use_Old_WTBuf; // +0x54
    id m_oUserData; // +0x58
    BOOL m_bCan_Verify_Pwd_Use_Old_WTBuf; // +0x60
    NSString * m_nsTitle; // +0x68
    NSString * m_nsMessage; // +0x70
    BaseResponseErrMsg * _m_errInfo; // +0x78
}
- (id)topMostController;
- (void)hashPasswordFromText:(id)arg1;
- (void)doVerifyCode:(id)arg1;
- (void)doVerifyPwd;
- (void)doGetVerifyImg;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyChangeImage;
- (void)updateVerifyImg;
- (void)showPasswordAlert;
- (void)showVerifyAlert;
- (void)showFailAlert:(id)arg1 message:(id)arg2;
- (void)showVerifyPassFailAlert:(id)arg1;
- (void)startVerifyPassword;
- (void)startVerifyPasswordWithoutAlert;
- (void)startCheckPassword:(unsigned int)arg1;
- (void)startSetPassword:(id)arg1 ticketType:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (void)MessageReturnSetPasswd:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnCheckPasswd:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnVerifyPasswd:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_opCode;
- (void)setM_opCode:(unsigned int)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (id)m_nsMessage;
- (void)setM_nsMessage:(id)arg1;
- (id)m_nsPwd;
- (void)setM_nsPwd:(id)arg1;
- (id)m_nsPwdMd5;
- (void)setM_nsPwdMd5:(id)arg1;
- (id)m_nsPwd2;
- (void)setM_nsPwd2:(id)arg1;
- (id)m_dtVerifyImg;
- (void)setM_dtVerifyImg:(id)arg1;
- (id)m_winVerifyImg;
- (void)setM_winVerifyImg:(id)arg1;
- (id)m_nsImgEncryptKey;
- (void)setM_nsImgEncryptKey:(id)arg1;
- (id)m_dtKSid;
- (void)setM_dtKSid:(id)arg1;
- (unsigned int)m_uiVerfyPwdScene;
- (void)setM_uiVerfyPwdScene:(unsigned int)arg1;
- (BOOL)m_bCan_Verify_Pwd_Use_Old_WTBuf;
- (void)setM_bCan_Verify_Pwd_Use_Old_WTBuf:(BOOL)arg1;
- (id)m_oUserData;
- (void)setM_oUserData:(id)arg1;
- (id)m_errInfo;
- (void)setM_errInfo:(id)arg1;
- (void).cxx_destruct;
@end
