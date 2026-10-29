@interface WCPayAuthenticationPay : NSObject
{
    unsigned int m_flag; // +0x8
    BOOL m_bRetry; // +0xc
    NSString * m_1bankType; // +0x10
    NSString * m_1cardHolderName; // +0x18
    NSString * m_1IDCardNumber; // +0x20
    NSString * m_1IDCardType; // +0x28
    NSString * m_1phoneNumber; // +0x30
    NSString * m_1bankCardID; // +0x38
    NSString * m_1cvv2; // +0x40
    NSString * m_1validDate; // +0x48
    NSString * m_1payKey; // +0x50
    NSString * m_2bankType; // +0x58
    NSString * m_2cardHolderName; // +0x60
    NSString * m_2IDCardNumber; // +0x68
    NSString * m_2IDCardType; // +0x70
    NSString * m_2phoneNumber; // +0x78
    NSString * m_2bankCardID; // +0x80
    NSString * m_2cvv2; // +0x88
    NSString * m_2validDate; // +0x90
    NSString * m_2payPassword; // +0x98
    NSString * m_2payKey; // +0xa0
    NSString * m_2hBindSerial; // +0xa8
    NSString * m_2hBindCardTail; // +0xb0
    NSString * m_3payPassword; // +0xb8
    NSString * m_3bankType; // +0xc0
    NSString * m_3bindID; // +0xc8
    NSString * m_3payKey; // +0xd0
    BOOL m_3resetFlag; // +0xd8
    NSString * m_3resetMobile; // +0xe0
    NSString * m_3resetCVV2; // +0xe8
    NSString * m_3resetValidDate; // +0xf0
    BOOL m_3simpleRegFlag; // +0xf8
    NSString * m_4WCLanguage; // +0x100
    NSString * m_4firstName; // +0x108
    NSString * m_4lastName; // +0x110
    NSString * m_4country; // +0x118
    NSString * m_4city; // +0x120
    NSString * m_4area; // +0x128
    NSString * m_4zipcode; // +0x130
    NSString * m_4address; // +0x138
    NSString * m_4phoneNumber_Overseas; // +0x140
    NSString * m_4email; // +0x148
    NSString * m_4bankType; // +0x150
    NSString * m_4bankCardID; // +0x158
    NSString * m_4cvv2; // +0x160
    NSString * m_4validDate; // +0x168
    NSString * m_4payKey; // +0x170
    NSString * m_5WCLanguage; // +0x178
    NSString * m_5firstName; // +0x180
    NSString * m_5lastName; // +0x188
    NSString * m_5country; // +0x190
    NSString * m_5city; // +0x198
    NSString * m_5area; // +0x1a0
    NSString * m_5zipcode; // +0x1a8
    NSString * m_5address; // +0x1b0
    NSString * m_5phoneNumber_Overseas; // +0x1b8
    NSString * m_5email; // +0x1c0
    NSString * m_5bankType; // +0x1c8
    NSString * m_5bankCardID; // +0x1d0
    NSString * m_5cvv2; // +0x1d8
    NSString * m_5validDate; // +0x1e0
    NSString * m_5payKey; // +0x1e8
    NSString * m_5payPassword; // +0x1f0
    NSString * m_6bankType; // +0x1f8
    NSString * m_6payPassword; // +0x200
    NSString * m_6bindID; // +0x208
    NSString * m_6payKey; // +0x210
    BOOL m_6resetFlag; // +0x218
    NSString * m_6resetMobile; // +0x220
    NSString * m_6resetCVV2; // +0x228
    NSString * m_6resetValidDate; // +0x230
    BOOL m_freeSMSFlag; // +0x238
    NSString * m_payToken; // +0x240
    unsigned int m_payScene; // +0x248
    unsigned int m_payChannel; // +0x24c
    NSString * m_partnerID; // +0x250
    NSString * m_package; // +0x258
    NSString * m_uuid; // +0x260
    NSString * m_appName; // +0x268
    NSString * m_appSource; // +0x270
    NSString * m_appID; // +0x278
    NSString * m_nsDefaultFavorComposedID; // +0x280
    NSString * m_nsFavorComposedID; // +0x288
    BOOL m_bIsAutoDeduct; // +0x290
    BOOL _m_bTouchIDAuth; // +0x291
    BOOL _mustCheckMessage; // +0x292
    BOOL _bIsOfflinePayConfirm; // +0x293
    BOOL _bIsLQTPay; // +0x294
    NSString * m_touchFingerData; // +0x298
    NSString * _m_1creidRenewal; // +0x2a0
    NSString * _m_1birthDate; // +0x2a8
    NSString * _m_1creExpireDate; // +0x2b0
    NSString * _m_2creidRenewal; // +0x2b8
    NSString * _m_2birthDate; // +0x2c0
    NSString * _m_2creExpireDate; // +0x2c8
    NSString * _m_arriveType; // +0x2d0
    NSString * _mobileFlag; // +0x2d8
    NSString * _bindSerial; // +0x2e0
    NSString * _bankType; // +0x2e8
    NSString * _autoDeductBankType; // +0x2f0
    NSString * _autoDeductBankSerial; // +0x2f8
    NSString * _orderReqKey; // +0x300
    NSString * _currentPayCardBankType; // +0x308
    WCPayAuthenRequestRetryInfo * _m_retryInfo; // +0x310
    NSString * _mobile_area; // +0x318
}
- (BOOL)isWrongFlag;
- (BOOL)m_bRetry;
- (void)setM_bRetry:(BOOL)arg1;
- (id)m_1bankType;
- (void)setM_1bankType:(id)arg1;
- (id)m_1IDCardType;
- (void)setM_1IDCardType:(id)arg1;
- (id)m_2bankType;
- (void)setM_2bankType:(id)arg1;
- (id)m_2IDCardType;
- (void)setM_2IDCardType:(id)arg1;
- (id)m_3bankType;
- (void)setM_3bankType:(id)arg1;
- (unsigned int)m_flag;
- (void)setM_flag:(unsigned int)arg1;
- (id)m_1bankCardID;
- (void)setM_1bankCardID:(id)arg1;
- (id)m_1cardHolderName;
- (void)setM_1cardHolderName:(id)arg1;
- (id)m_1cvv2;
- (void)setM_1cvv2:(id)arg1;
- (id)m_1IDCardNumber;
- (void)setM_1IDCardNumber:(id)arg1;
- (id)m_1payKey;
- (void)setM_1payKey:(id)arg1;
- (id)m_1phoneNumber;
- (void)setM_1phoneNumber:(id)arg1;
- (id)m_1validDate;
- (void)setM_1validDate:(id)arg1;
- (id)m_2bankCardID;
- (void)setM_2bankCardID:(id)arg1;
- (id)m_2cardHolderName;
- (void)setM_2cardHolderName:(id)arg1;
- (id)m_2cvv2;
- (void)setM_2cvv2:(id)arg1;
- (id)m_2IDCardNumber;
- (void)setM_2IDCardNumber:(id)arg1;
- (id)m_2payKey;
- (void)setM_2payKey:(id)arg1;
- (id)m_2phoneNumber;
- (void)setM_2phoneNumber:(id)arg1;
- (id)m_2payPassword;
- (void)setM_2payPassword:(id)arg1;
- (id)m_2validDate;
- (void)setM_2validDate:(id)arg1;
- (id)m_2hBindCardTail;
- (void)setM_2hBindCardTail:(id)arg1;
- (id)m_2hBindSerial;
- (void)setM_2hBindSerial:(id)arg1;
- (id)m_3bindID;
- (void)setM_3bindID:(id)arg1;
- (id)m_3payKey;
- (void)setM_3payKey:(id)arg1;
- (id)m_3payPassword;
- (void)setM_3payPassword:(id)arg1;
- (BOOL)m_3resetFlag;
- (void)setM_3resetFlag:(BOOL)arg1;
- (id)m_3resetCVV2;
- (void)setM_3resetCVV2:(id)arg1;
- (id)m_3resetMobile;
- (void)setM_3resetMobile:(id)arg1;
- (id)m_3resetValidDate;
- (void)setM_3resetValidDate:(id)arg1;
- (BOOL)m_3simpleRegFlag;
- (void)setM_3simpleRegFlag:(BOOL)arg1;
- (id)m_4WCLanguage;
- (void)setM_4WCLanguage:(id)arg1;
- (id)m_4firstName;
- (void)setM_4firstName:(id)arg1;
- (id)m_4lastName;
- (void)setM_4lastName:(id)arg1;
- (id)m_4country;
- (void)setM_4country:(id)arg1;
- (id)m_4city;
- (void)setM_4city:(id)arg1;
- (id)m_4area;
- (void)setM_4area:(id)arg1;
- (id)m_4address;
- (void)setM_4address:(id)arg1;
- (id)m_4zipcode;
- (void)setM_4zipcode:(id)arg1;
- (id)m_4phoneNumber_Overseas;
- (void)setM_4phoneNumber_Overseas:(id)arg1;
- (id)m_4bankType;
- (void)setM_4bankType:(id)arg1;
- (id)m_4email;
- (void)setM_4email:(id)arg1;
- (id)m_4bankCardID;
- (void)setM_4bankCardID:(id)arg1;
- (id)m_4cvv2;
- (void)setM_4cvv2:(id)arg1;
- (id)m_4validDate;
- (void)setM_4validDate:(id)arg1;
- (id)m_4payKey;
- (void)setM_4payKey:(id)arg1;
- (id)m_5WCLanguage;
- (void)setM_5WCLanguage:(id)arg1;
- (id)m_5firstName;
- (void)setM_5firstName:(id)arg1;
- (id)m_5lastName;
- (void)setM_5lastName:(id)arg1;
- (id)m_5country;
- (void)setM_5country:(id)arg1;
- (id)m_5area;
- (void)setM_5area:(id)arg1;
- (id)m_5city;
- (void)setM_5city:(id)arg1;
- (id)m_5zipcode;
- (void)setM_5zipcode:(id)arg1;
- (id)m_5address;
- (void)setM_5address:(id)arg1;
- (id)m_5phoneNumber_Overseas;
- (void)setM_5phoneNumber_Overseas:(id)arg1;
- (id)m_5bankType;
- (void)setM_5bankType:(id)arg1;
- (id)m_5email;
- (void)setM_5email:(id)arg1;
- (id)m_5bankCardID;
- (void)setM_5bankCardID:(id)arg1;
- (id)m_5cvv2;
- (void)setM_5cvv2:(id)arg1;
- (id)m_5validDate;
- (void)setM_5validDate:(id)arg1;
- (id)m_5payKey;
- (void)setM_5payKey:(id)arg1;
- (id)m_5payPassword;
- (void)setM_5payPassword:(id)arg1;
- (id)m_6bankType;
- (void)setM_6bankType:(id)arg1;
- (id)m_6payPassword;
- (void)setM_6payPassword:(id)arg1;
- (id)m_6bindID;
- (void)setM_6bindID:(id)arg1;
- (id)m_6payKey;
- (void)setM_6payKey:(id)arg1;
- (BOOL)m_6resetFlag;
- (void)setM_6resetFlag:(BOOL)arg1;
- (id)m_6resetCVV2;
- (void)setM_6resetCVV2:(id)arg1;
- (id)m_6resetMobile;
- (void)setM_6resetMobile:(id)arg1;
- (id)m_6resetValidDate;
- (void)setM_6resetValidDate:(id)arg1;
- (BOOL)m_freeSMSFlag;
- (void)setM_freeSMSFlag:(BOOL)arg1;
- (id)m_payToken;
- (void)setM_payToken:(id)arg1;
- (id)m_partnerID;
- (void)setM_partnerID:(id)arg1;
- (id)m_package;
- (void)setM_package:(id)arg1;
- (unsigned int)m_payScene;
- (void)setM_payScene:(unsigned int)arg1;
- (unsigned int)m_payChannel;
- (void)setM_payChannel:(unsigned int)arg1;
- (id)m_appName;
- (void)setM_appName:(id)arg1;
- (id)m_uuid;
- (void)setM_uuid:(id)arg1;
- (id)m_appSource;
- (void)setM_appSource:(id)arg1;
- (id)m_appID;
- (void)setM_appID:(id)arg1;
- (id)m_nsDefaultFavorComposedID;
- (void)setM_nsDefaultFavorComposedID:(id)arg1;
- (id)m_nsFavorComposedID;
- (void)setM_nsFavorComposedID:(id)arg1;
- (BOOL)m_bIsAutoDeduct;
- (void)setM_bIsAutoDeduct:(BOOL)arg1;
- (id)m_touchFingerData;
- (void)setM_touchFingerData:(id)arg1;
- (id)m_1creidRenewal;
- (void)setM_1creidRenewal:(id)arg1;
- (id)m_1birthDate;
- (void)setM_1birthDate:(id)arg1;
- (id)m_1creExpireDate;
- (void)setM_1creExpireDate:(id)arg1;
- (id)m_2creidRenewal;
- (void)setM_2creidRenewal:(id)arg1;
- (id)m_2birthDate;
- (void)setM_2birthDate:(id)arg1;
- (id)m_2creExpireDate;
- (void)setM_2creExpireDate:(id)arg1;
- (id)m_arriveType;
- (void)setM_arriveType:(id)arg1;
- (BOOL)m_bTouchIDAuth;
- (void)setM_bTouchIDAuth:(BOOL)arg1;
- (id)mobileFlag;
- (void)setMobileFlag:(id)arg1;
- (id)bindSerial;
- (void)setBindSerial:(id)arg1;
- (id)bankType;
- (void)setBankType:(id)arg1;
- (BOOL)mustCheckMessage;
- (void)setMustCheckMessage:(BOOL)arg1;
- (id)autoDeductBankType;
- (void)setAutoDeductBankType:(id)arg1;
- (id)autoDeductBankSerial;
- (void)setAutoDeductBankSerial:(id)arg1;
- (BOOL)bIsOfflinePayConfirm;
- (void)setBIsOfflinePayConfirm:(BOOL)arg1;
- (id)orderReqKey;
- (void)setOrderReqKey:(id)arg1;
- (BOOL)bIsLQTPay;
- (void)setBIsLQTPay:(BOOL)arg1;
- (id)currentPayCardBankType;
- (void)setCurrentPayCardBankType:(id)arg1;
- (id)m_retryInfo;
- (void)setM_retryInfo:(id)arg1;
- (id)mobile_area;
- (void)setMobile_area:(id)arg1;
- (void).cxx_destruct;
@end

