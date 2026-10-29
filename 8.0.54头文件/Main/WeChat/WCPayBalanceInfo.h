@interface WCPayBalanceInfo : NSObject <NSCoding>
{
    unsigned long long m_uiTotalBalance; // +0x8
    unsigned long long m_uiAvailableBalance; // +0x10
    unsigned long long m_uiFrozenBalance; // +0x18
    unsigned long long m_uiFetchBalance; // +0x20
    NSDate * m_ndFetchArriveTime; // +0x28
    NSString * m_nsFetchArriveTimeWording; // +0x30
    NSString * m_nsBankType; // +0x38
    NSString * m_nsBindSerial; // +0x40
    NSString * m_nsForbidWord; // +0x48
    NSString * m_nsBalanceTelPhone; // +0x50
    NSString * m_nsBalanceListUrl; // +0x58
    BOOL m_bSupportOfflinePay; // +0x60
    NSString * m_nsAvailFetchWording; // +0x68
    NSString * m_nsMaxFetchWording; // +0x70
    unsigned long long m_uiBalanceVersion; // +0x78
    unsigned long long m_uiBalanceExpiredDate; // +0x80
    int _default_card_state; // +0x88
    NSString * _m_forbid_title; // +0x90
    NSString * _m_forbid_url; // +0x98
    NSString * _m_balanceShowWording; // +0xa0
    WCPayBalanceMenuInfo * _balance_menu_info; // +0xa8
    NSString * _m_balanceLogoUrl; // +0xb0
    unsigned long long _wallet_balance; // +0xb8
    unsigned long long _wallet_entrance_balance_switch_state; // +0xc0
    WCPayLqpEntranceInfo * _lqp_entrance_info; // +0xc8
    PromptInfo * _promptInfo; // +0xd0
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)m_uiAvailableBalance;
- (void)setM_uiAvailableBalance:(unsigned long long)arg1;
- (unsigned long long)m_uiFetchBalance;
- (void)setM_uiFetchBalance:(unsigned long long)arg1;
- (unsigned long long)m_uiFrozenBalance;
- (void)setM_uiFrozenBalance:(unsigned long long)arg1;
- (unsigned long long)m_uiTotalBalance;
- (void)setM_uiTotalBalance:(unsigned long long)arg1;
- (id)m_ndFetchArriveTime;
- (void)setM_ndFetchArriveTime:(id)arg1;
- (id)m_nsBankType;
- (void)setM_nsBankType:(id)arg1;
- (id)m_nsBindSerial;
- (void)setM_nsBindSerial:(id)arg1;
- (id)m_nsForbidWord;
- (void)setM_nsForbidWord:(id)arg1;
- (id)m_nsBalanceTelPhone;
- (void)setM_nsBalanceTelPhone:(id)arg1;
- (id)m_nsBalanceListUrl;
- (void)setM_nsBalanceListUrl:(id)arg1;
- (BOOL)m_bSupportOfflinePay;
- (void)setM_bSupportOfflinePay:(BOOL)arg1;
- (id)m_nsAvailFetchWording;
- (void)setM_nsAvailFetchWording:(id)arg1;
- (id)m_nsMaxFetchWording;
- (void)setM_nsMaxFetchWording:(id)arg1;
- (unsigned long long)m_uiBalanceVersion;
- (void)setM_uiBalanceVersion:(unsigned long long)arg1;
- (unsigned long long)m_uiBalanceExpiredDate;
- (void)setM_uiBalanceExpiredDate:(unsigned long long)arg1;
- (id)m_nsFetchArriveTimeWording;
- (void)setM_nsFetchArriveTimeWording:(id)arg1;
- (id)m_forbid_title;
- (void)setM_forbid_title:(id)arg1;
- (id)m_forbid_url;
- (void)setM_forbid_url:(id)arg1;
- (id)m_balanceShowWording;
- (void)setM_balanceShowWording:(id)arg1;
- (id)balance_menu_info;
- (void)setBalance_menu_info:(id)arg1;
- (id)m_balanceLogoUrl;
- (void)setM_balanceLogoUrl:(id)arg1;
- (unsigned long long)wallet_balance;
- (void)setWallet_balance:(unsigned long long)arg1;
- (unsigned long long)wallet_entrance_balance_switch_state;
- (void)setWallet_entrance_balance_switch_state:(unsigned long long)arg1;
- (id)lqp_entrance_info;
- (void)setLqp_entrance_info:(id)arg1;
- (id)promptInfo;
- (void)setPromptInfo:(id)arg1;
- (int)default_card_state;
- (void)setDefault_card_state:(int)arg1;
- (void).cxx_destruct;
@end

