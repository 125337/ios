@interface WCPayResetPasswordInfo : NSObject
{
    NSString * m_cardBankName; // +0x8
    NSString * m_cardBankType; // +0x10
    NSString * m_cardType; // +0x18
    NSString * m_cardTypeName; // +0x20
    NSString * m_cardNumber; // +0x28
    NSString * m_cardCVV2; // +0x30
    NSString * m_cardValid; // +0x38
    NSString * m_usrNameInfo; // +0x40
    NSString * m_usrIDType; // +0x48
    NSString * m_usrIDInfo; // +0x50
    NSString * m_usrPhoneNumber; // +0x58
    unsigned int m_cardBankTag; // +0x60
    unsigned int m_flag; // +0x64
    NSString * m_WCLanguage; // +0x68
    NSString * m_firstName; // +0x70
    NSString * m_lastName; // +0x78
    NSString * m_country; // +0x80
    NSString * m_city; // +0x88
    NSString * m_area; // +0x90
    NSString * m_address; // +0x98
    NSString * m_phoneNumber_Overseas; // +0xa0
    NSString * m_zipCode; // +0xa8
    NSString * m_email; // +0xb0
    NSString * m_retKey; // +0xb8
    BOOL m_bSelectOldCardToResetPwd; // +0xc0
    BOOL m_bRetry; // +0xc1
    BOOL _bIsResetPwdFromPayManage; // +0xc2
    NSString * _mobile_area; // +0xc8
    NSString * _nsCardHolderCreValidTime; // +0xd0
    NSString * _nsCardHolderRenewalTime; // +0xd8
    NSString * _nsCardHolderBirthDay; // +0xe0
}
- (id)m_cardTypeName;
- (void)setM_cardTypeName:(id)arg1;
- (id)m_cardType;
- (void)setM_cardType:(id)arg1;
- (id)m_cardBankName;
- (void)setM_cardBankName:(id)arg1;
- (id)m_cardNumber;
- (void)setM_cardNumber:(id)arg1;
- (id)m_usrIDInfo;
- (void)setM_usrIDInfo:(id)arg1;
- (id)m_usrNameInfo;
- (void)setM_usrNameInfo:(id)arg1;
- (id)m_usrPhoneNumber;
- (void)setM_usrPhoneNumber:(id)arg1;
- (id)m_usrIDType;
- (void)setM_usrIDType:(id)arg1;
- (id)m_cardBankType;
- (void)setM_cardBankType:(id)arg1;
- (id)m_cardCVV2;
- (void)setM_cardCVV2:(id)arg1;
- (id)m_cardValid;
- (void)setM_cardValid:(id)arg1;
- (id)m_retKey;
- (void)setM_retKey:(id)arg1;
- (BOOL)m_bSelectOldCardToResetPwd;
- (void)setM_bSelectOldCardToResetPwd:(BOOL)arg1;
- (BOOL)m_bRetry;
- (void)setM_bRetry:(BOOL)arg1;
- (unsigned int)m_flag;
- (void)setM_flag:(unsigned int)arg1;
- (unsigned int)m_cardBankTag;
- (void)setM_cardBankTag:(unsigned int)arg1;
- (id)m_WCLanguage;
- (void)setM_WCLanguage:(id)arg1;
- (id)m_firstName;
- (void)setM_firstName:(id)arg1;
- (id)m_lastName;
- (void)setM_lastName:(id)arg1;
- (id)m_country;
- (void)setM_country:(id)arg1;
- (id)m_city;
- (void)setM_city:(id)arg1;
- (id)m_area;
- (void)setM_area:(id)arg1;
- (id)m_address;
- (void)setM_address:(id)arg1;
- (id)m_phoneNumber_Overseas;
- (void)setM_phoneNumber_Overseas:(id)arg1;
- (id)m_email;
- (void)setM_email:(id)arg1;
- (id)m_zipCode;
- (void)setM_zipCode:(id)arg1;
- (id)mobile_area;
- (void)setMobile_area:(id)arg1;
- (BOOL)bIsResetPwdFromPayManage;
- (void)setBIsResetPwdFromPayManage:(BOOL)arg1;
- (id)nsCardHolderCreValidTime;
- (void)setNsCardHolderCreValidTime:(id)arg1;
- (id)nsCardHolderRenewalTime;
- (void)setNsCardHolderRenewalTime:(id)arg1;
- (id)nsCardHolderBirthDay;
- (void)setNsCardHolderBirthDay:(id)arg1;
- (void).cxx_destruct;
@end

