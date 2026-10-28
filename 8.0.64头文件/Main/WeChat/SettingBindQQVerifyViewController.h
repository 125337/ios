@interface SettingBindQQVerifyViewController : MMUIViewController
{
    MMLoadingView * m_loadingView; // +0x70
    NSString * m_nsUsrName; // +0x78
    NSString * m_nsPwd; // +0x80
    UITextField * m_tfVerifyCode; // +0x88
    unsigned int m_uiEventID; // +0x90
    NSData * m_dtImg; // +0x98
    UIViewController * m_vcAccount; // +0xa0
    id <ReturnToSettingAccoutDelegate> m_delReturn; // +0xa8
    unsigned int m_uiOpCode; // +0xb0
    UIButton * m_btVerify; // +0xb8
    NSString * m_nsImgEncryptKey; // +0xc0
}
- (void)StartLoading;
- (void)StopLoading;
- (BOOL)CheckInputValid;
- (void)UpdateVerifyImg:(id)arg1;
- (unsigned int)CreateBindQQEvent:(unsigned int)arg1;
- (void)LogIn:(id)arg1;
- (void)GetVerifyImg:(id)arg1;
- (void)ReturnToBindView:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)OnBindQQOK;
- (void)OnBindQQErrorReturn:(id)arg1;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (id)m_nsPwd;
- (void)setM_nsPwd:(id)arg1;
- (id)m_tfVerifyCode;
- (void)setM_tfVerifyCode:(id)arg1;
- (id)m_vcAccount;
- (void)setM_vcAccount:(id)arg1;
- (id)m_dtImg;
- (void)setM_dtImg:(id)arg1;
- (id)m_delReturn;
- (void)setM_delReturn:(id)arg1;
- (id)m_btVerify;
- (void)setM_btVerify:(id)arg1;
- (id)m_nsImgEncryptKey;
- (void)setM_nsImgEncryptKey:(id)arg1;
- (void).cxx_destruct;
@end
