@interface WCPayUserInfo : NSObject <NSCoding>
{
    int m_regFlag; // +0x8
    NSString * m_usrName; // +0x10
    WCPayCredInfo * m_usrCredInfo; // +0x18
    NSString * m_usrIDNumber; // +0x20
    NSString * m_usrPhoneNumber; // +0x28
    unsigned int m_cardUserFlag; // +0x30
    BOOL m_bHadCard; // +0x34
    NSString * m_nsFacingReceiverQRCode; // +0x38
    BOOL m_bCanUseNewCardToResetPwd; // +0x40
    NSString * m_nsResetPwdNeedToOpenUrl; // +0x48
    BOOL _m_bTouchIDOpen; // +0x50
    BOOL _m_bTouchIDEnable; // +0x51
    unsigned int _m_lqtState; // +0x54
    int _cert_encrypt_type; // +0x58
    NSString * m_nsTouchIDForbidword; // +0x60
    long long paymenu_use_new; // +0x68
    NSString * _m_lctWording; // +0x70
    NSString * _m_lctUrl; // +0x78
    WCPayLqbShowInfo * _lqbShowInfo; // +0x80
    WCPayLqtCellInfo * _lqtCellInfo; // +0x88
    long long _authen_account_type; // +0x90
    NSString * _m_nsForgetPasswordUrl; // +0x98
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)m_regFlag;
- (void)setM_regFlag:(int)arg1;
- (id)m_usrCredInfo;
- (void)setM_usrCredInfo:(id)arg1;
- (id)m_usrIDNumber;
- (void)setM_usrIDNumber:(id)arg1;
- (id)m_usrName;
- (void)setM_usrName:(id)arg1;
- (id)m_usrPhoneNumber;
- (void)setM_usrPhoneNumber:(id)arg1;
- (unsigned int)m_cardUserFlag;
- (void)setM_cardUserFlag:(unsigned int)arg1;
- (BOOL)m_bHadCard;
- (void)setM_bHadCard:(BOOL)arg1;
- (id)m_nsFacingReceiverQRCode;
- (void)setM_nsFacingReceiverQRCode:(id)arg1;
- (BOOL)m_bCanUseNewCardToResetPwd;
- (void)setM_bCanUseNewCardToResetPwd:(BOOL)arg1;
- (id)m_nsResetPwdNeedToOpenUrl;
- (void)setM_nsResetPwdNeedToOpenUrl:(id)arg1;
- (id)m_nsTouchIDForbidword;
- (void)setM_nsTouchIDForbidword:(id)arg1;
- (long long)paymenu_use_new;
- (void)setPaymenu_use_new:(long long)arg1;
- (BOOL)m_bTouchIDOpen;
- (void)setM_bTouchIDOpen:(BOOL)arg1;
- (BOOL)m_bTouchIDEnable;
- (void)setM_bTouchIDEnable:(BOOL)arg1;
- (id)m_lctWording;
- (void)setM_lctWording:(id)arg1;
- (id)m_lctUrl;
- (void)setM_lctUrl:(id)arg1;
- (unsigned int)m_lqtState;
- (void)setM_lqtState:(unsigned int)arg1;
- (id)lqbShowInfo;
- (void)setLqbShowInfo:(id)arg1;
- (id)lqtCellInfo;
- (void)setLqtCellInfo:(id)arg1;
- (long long)authen_account_type;
- (void)setAuthen_account_type:(long long)arg1;
- (int)cert_encrypt_type;
- (void)setCert_encrypt_type:(int)arg1;
- (id)m_nsForgetPasswordUrl;
- (void)setM_nsForgetPasswordUrl:(id)arg1;
- (void).cxx_destruct;
@end

