@interface WCPayWalletInfo : NSObject <NSCoding>
{
    BOOL _m_walletSelected; // +0x8
    unsigned int _m_walletType; // +0xc
    unsigned int _m_walletBalance; // +0x10
    unsigned int _m_walletTpaCountryMask; // +0x14
    NSString * _m_walletName; // +0x18
    NSString * _m_walletUrl; // +0x20
    NSString * _m_walletTpaCountry; // +0x28
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)m_walletType;
- (void)setM_walletType:(unsigned int)arg1;
- (id)m_walletName;
- (void)setM_walletName:(id)arg1;
- (id)m_walletUrl;
- (void)setM_walletUrl:(id)arg1;
- (BOOL)m_walletSelected;
- (void)setM_walletSelected:(BOOL)arg1;
- (id)m_walletTpaCountry;
- (void)setM_walletTpaCountry:(id)arg1;
- (unsigned int)m_walletBalance;
- (void)setM_walletBalance:(unsigned int)arg1;
- (unsigned int)m_walletTpaCountryMask;
- (void)setM_walletTpaCountryMask:(unsigned int)arg1;
- (void).cxx_destruct;
@end

