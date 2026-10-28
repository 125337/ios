@interface WCPayCardBinInfo : NSObject <NSCoding, IWCPaySelecBankItem>
{
    NSString * m_cardBankType; // +0x8
    NSString * m_cardBankName; // +0x10
    NSString * m_cardType; // +0x18
    NSString * m_cardTypeName; // +0x20
    NSString * m_cardNumber; // +0x28
    NSString * m_cardLogoUrl; // +0x30
    NSString * m_bankPhone; // +0x38
    NSString * m_nsForbidWord; // +0x40
    NSArray * m_arrSupCredInfo; // +0x48
    BOOL m_isBankUsable; // +0x50
    BOOL m_isConfidentTrue; // +0x51
    BOOL m_needUsrNameInfo; // +0x52
    BOOL m_needUsrIDInfo; // +0x53
    BOOL m_needValidDate; // +0x54
    BOOL m_needCVVNumber; // +0x55
    BOOL m_needUsrPhoneNumber; // +0x56
    BOOL m_needPayMoneyAfferBind; // +0x57
    BOOL m_canBindReturnMoney; // +0x58
    BOOL m_needFirstName; // +0x59
    BOOL m_needLastName; // +0x5a
    BOOL m_needCountry; // +0x5b
    BOOL m_needArea; // +0x5c
    BOOL m_needAddress; // +0x5d
    BOOL m_needPhoneNumber; // +0x5e
    BOOL m_needEmail; // +0x5f
    BOOL m_needZip; // +0x60
    BOOL m_bSupportOfflinePay; // +0x61
    unsigned int m_cardBankTag; // +0x64
    unsigned int m_cardAuthMode; // +0x68
    NSString * m_nsBrandUserName; // +0x70
    NSString * m_nsBrandTips; // +0x78
    NSDate * m_ndFetchArriveTime; // +0x80
    NSString * m_nsAvailableSaveInfo; // +0x88
    BOOL m_needShowProtocol; // +0x90
    BOOL _support_foreign_mobile; // +0x91
    NSString * m_usrName; // +0x98
    NSString * m_nsFetchArriveTimeWording; // +0xa0
    NSString * _pre_auth_word; // +0xa8
    NSString * _m_arriveType; // +0xb0
    NSString * _m_nsBankNamePinYin; // +0xb8
    NSArray * _m_arrCreRule; // +0xc0
    WCPayBankCardInfo * _m_bankCardInfo; // +0xc8
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)bankName;
- (id)bankIconUrl;
- (id)pinYin;
- (id)bankCardType;
- (id)m_cardType;
- (void)setM_cardType:(id)arg1;
- (id)m_cardTypeName;
- (void)setM_cardTypeName:(id)arg1;
- (id)m_cardNumber;
- (void)setM_cardNumber:(id)arg1;
- (id)m_cardBankType;
- (void)setM_cardBankType:(id)arg1;
- (id)m_cardLogoUrl;
- (void)setM_cardLogoUrl:(id)arg1;
- (id)m_cardBankName;
- (void)setM_cardBankName:(id)arg1;
- (id)m_bankPhone;
- (void)setM_bankPhone:(id)arg1;
- (id)m_nsForbidWord;
- (void)setM_nsForbidWord:(id)arg1;
- (id)m_arrSupCredInfo;
- (void)setM_arrSupCredInfo:(id)arg1;
- (BOOL)m_isConfidentTrue;
- (void)setM_isConfidentTrue:(BOOL)arg1;
- (BOOL)m_needCVVNumber;
- (void)setM_needCVVNumber:(BOOL)arg1;
- (BOOL)m_needUsrIDInfo;
- (void)setM_needUsrIDInfo:(BOOL)arg1;
- (BOOL)m_needUsrNameInfo;
- (void)setM_needUsrNameInfo:(BOOL)arg1;
- (BOOL)m_needUsrPhoneNumber;
- (void)setM_needUsrPhoneNumber:(BOOL)arg1;
- (BOOL)m_needValidDate;
- (void)setM_needValidDate:(BOOL)arg1;
- (id)m_usrName;
- (void)setM_usrName:(id)arg1;
- (BOOL)m_isBankUsable;
- (void)setM_isBankUsable:(BOOL)arg1;
- (BOOL)m_needPayMoneyAfferBind;
- (void)setM_needPayMoneyAfferBind:(BOOL)arg1;
- (BOOL)m_canBindReturnMoney;
- (void)setM_canBindReturnMoney:(BOOL)arg1;
- (BOOL)m_needFirstName;
- (void)setM_needFirstName:(BOOL)arg1;
- (BOOL)m_needLastName;
- (void)setM_needLastName:(BOOL)arg1;
- (BOOL)m_needCountry;
- (void)setM_needCountry:(BOOL)arg1;
- (BOOL)m_needArea;
- (void)setM_needArea:(BOOL)arg1;
- (BOOL)m_needAddress;
- (void)setM_needAddress:(BOOL)arg1;
- (BOOL)m_needPhoneNumber;
- (void)setM_needPhoneNumber:(BOOL)arg1;
- (BOOL)m_needEmail;
- (void)setM_needEmail:(BOOL)arg1;
- (BOOL)m_needZip;
- (void)setM_needZip:(BOOL)arg1;
- (BOOL)m_bSupportOfflinePay;
- (void)setM_bSupportOfflinePay:(BOOL)arg1;
- (unsigned int)m_cardBankTag;
- (void)setM_cardBankTag:(unsigned int)arg1;
- (unsigned int)m_cardAuthMode;
- (void)setM_cardAuthMode:(unsigned int)arg1;
- (id)m_nsBrandTips;
- (void)setM_nsBrandTips:(id)arg1;
- (id)m_nsBrandUserName;
- (void)setM_nsBrandUserName:(id)arg1;
- (id)m_ndFetchArriveTime;
- (void)setM_ndFetchArriveTime:(id)arg1;
- (id)m_nsFetchArriveTimeWording;
- (void)setM_nsFetchArriveTimeWording:(id)arg1;
- (id)m_nsAvailableSaveInfo;
- (void)setM_nsAvailableSaveInfo:(id)arg1;
- (BOOL)m_needShowProtocol;
- (void)setM_needShowProtocol:(BOOL)arg1;
- (id)pre_auth_word;
- (void)setPre_auth_word:(id)arg1;
- (id)m_arriveType;
- (void)setM_arriveType:(id)arg1;
- (BOOL)support_foreign_mobile;
- (void)setSupport_foreign_mobile:(BOOL)arg1;
- (id)m_nsBankNamePinYin;
- (void)setM_nsBankNamePinYin:(id)arg1;
- (id)m_arrCreRule;
- (void)setM_arrCreRule:(id)arg1;
- (id)m_bankCardInfo;
- (void)setM_bankCardInfo:(id)arg1;
- (void).cxx_destruct;
@end
