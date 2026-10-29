@interface WCPayBindInfo : NSObject
{
    unsigned int m_flag; // +0x8
    NSString * m_cardBankName; // +0x10
    NSString * m_cardBankType; // +0x18
    unsigned int m_cardBankTag; // +0x20
    unsigned int m_cardType; // +0x24
    NSString * m_cardTypeName; // +0x28
    NSString * m_cardNumber; // +0x30
    NSString * m_usrNameInfo; // +0x38
    NSString * m_userIDType; // +0x40
    NSString * m_usrIDInfo; // +0x48
    NSString * m_validDate; // +0x50
    NSString * m_cvvInfo; // +0x58
    NSString * m_usrPhoneNumber; // +0x60
    NSString * m_payPassword; // +0x68
    NSString * m_nsTenpayBindSerialNo; // +0x70
    NSString * m_nsQQID; // +0x78
    NSString * m_nsImportCode; // +0x80
    NSString * m_nsToken; // +0x88
    NSString * m_WCLanguage; // +0x90
    NSString * m_firstName; // +0x98
    NSString * m_lastName; // +0xa0
    NSString * m_country; // +0xa8
    NSString * m_area; // +0xb0
    NSString * m_city; // +0xb8
    NSString * m_address; // +0xc0
    NSString * m_phoneNumber_Overseas; // +0xc8
    NSString * m_email; // +0xd0
    NSString * m_zipcode; // +0xd8
    NSString * m_retKey; // +0xe0
    NSString * m_checkPayJsapiToken; // +0xe8
    BOOL m_canPassPwd; // +0xf0
    NSString * m_usertoken; // +0xf8
    unsigned int _has_underage_alert; // +0x100
    NSString * _m_arriveType; // +0x108
    NSString * _m_creidRenewal; // +0x110
    NSString * _m_birthDay; // +0x118
    NSString * _m_creExpireDate; // +0x120
    NSString * _m_creEffectDate; // +0x128
    NSString * _gender; // +0x130
    NSString * _administrationAddress; // +0x138
    NSString * _autoDeductBankType; // +0x140
    NSString * _autoDeductBankSerial; // +0x148
    NSString * _mobile_area; // +0x150
    NSString * _sessionId; // +0x158
    UnderAgeDialog * _under_age_dialog; // +0x160
}
- (unsigned int)m_flag;
- (void)setM_flag:(unsigned int)arg1;
- (id)m_cardBankType;
- (void)setM_cardBankType:(id)arg1;
- (unsigned int)m_cardType;
- (void)setM_cardType:(unsigned int)arg1;
- (id)m_cardTypeName;
- (void)setM_cardTypeName:(id)arg1;
- (unsigned int)m_cardBankTag;
- (void)setM_cardBankTag:(unsigned int)arg1;
- (id)m_cardBankName;
- (void)setM_cardBankName:(id)arg1;
- (id)m_cardNumber;
- (void)setM_cardNumber:(id)arg1;
- (id)m_usrPhoneNumber;
- (void)setM_usrPhoneNumber:(id)arg1;
- (id)m_cvvInfo;
- (void)setM_cvvInfo:(id)arg1;
- (id)m_userIDType;
- (void)setM_userIDType:(id)arg1;
- (id)m_usrIDInfo;
- (void)setM_usrIDInfo:(id)arg1;
- (id)m_usrNameInfo;
- (void)setM_usrNameInfo:(id)arg1;
- (id)m_validDate;
- (void)setM_validDate:(id)arg1;
- (id)m_payPassword;
- (void)setM_payPassword:(id)arg1;
- (id)m_retKey;
- (void)setM_retKey:(id)arg1;
- (id)m_nsTenpayBindSerialNo;
- (void)setM_nsTenpayBindSerialNo:(id)arg1;
- (id)m_nsQQID;
- (void)setM_nsQQID:(id)arg1;
- (id)m_nsImportCode;
- (void)setM_nsImportCode:(id)arg1;
- (id)m_nsToken;
- (void)setM_nsToken:(id)arg1;
- (id)m_WCLanguage;
- (void)setM_WCLanguage:(id)arg1;
- (id)m_firstName;
- (void)setM_firstName:(id)arg1;
- (id)m_lastName;
- (void)setM_lastName:(id)arg1;
- (id)m_country;
- (void)setM_country:(id)arg1;
- (id)m_area;
- (void)setM_area:(id)arg1;
- (id)m_zipcode;
- (void)setM_zipcode:(id)arg1;
- (id)m_city;
- (void)setM_city:(id)arg1;
- (id)m_address;
- (void)setM_address:(id)arg1;
- (id)m_phoneNumber_Overseas;
- (void)setM_phoneNumber_Overseas:(id)arg1;
- (id)m_email;
- (void)setM_email:(id)arg1;
- (BOOL)m_canPassPwd;
- (void)setM_canPassPwd:(BOOL)arg1;
- (id)m_checkPayJsapiToken;
- (void)setM_checkPayJsapiToken:(id)arg1;
- (id)m_usertoken;
- (void)setM_usertoken:(id)arg1;
- (id)m_arriveType;
- (void)setM_arriveType:(id)arg1;
- (id)m_creidRenewal;
- (void)setM_creidRenewal:(id)arg1;
- (id)m_birthDay;
- (void)setM_birthDay:(id)arg1;
- (id)m_creExpireDate;
- (void)setM_creExpireDate:(id)arg1;
- (id)m_creEffectDate;
- (void)setM_creEffectDate:(id)arg1;
- (id)gender;
- (void)setGender:(id)arg1;
- (id)administrationAddress;
- (void)setAdministrationAddress:(id)arg1;
- (id)autoDeductBankType;
- (void)setAutoDeductBankType:(id)arg1;
- (id)autoDeductBankSerial;
- (void)setAutoDeductBankSerial:(id)arg1;
- (id)mobile_area;
- (void)setMobile_area:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)under_age_dialog;
- (void)setUnder_age_dialog:(id)arg1;
- (unsigned int)has_underage_alert;
- (void)setHas_underage_alert:(unsigned int)arg1;
- (void).cxx_destruct;
@end

