@interface WCPayCreditCardInfo : NSObject
{
    NSString * m_nsCreditState; // +0x8
    unsigned int m_uiCreditUsed; // +0x10
    unsigned int m_uiCreditAmount; // +0x14
    NSString * m_nsCreditDegree; // +0x18
    long long m_uiBillAmount; // +0x20
    NSString * m_nsBillTime; // +0x28
    long long m_uiRepayAmount; // +0x30
    long long m_uiRepayMininum; // +0x38
    NSString * m_nsRepayLastTime; // +0x40
    NSString * m_nsLastUpdateTime; // +0x48
    BOOL m_bUpgradeAmount; // +0x50
    unsigned int m_uiUpgradeCount; // +0x54
    NSString * m_nsBillUrl; // +0x58
    NSString * m_nsRepayUrl; // +0x60
    NSString * m_nsLearnMoreUrl; // +0x68
    NSString * m_nsCreditDetailUrl; // +0x70
    NSString * m_nsRightsUrl; // +0x78
    NSString * m_nsAppUserName; // +0x80
    NSString * m_nsAppNickName; // +0x88
    NSString * m_nsAppTelephone; // +0x90
    NSString * m_nsHelpUrl; // +0x98
    NSArray * m_aryCreditLimitExtList; // +0xa0
    NSString * m_nsExtGroupTitle; // +0xa8
    NSArray * m_aryExtList; // +0xb0
}
- (BOOL)m_bUpgradeAmount;
- (void)setM_bUpgradeAmount:(BOOL)arg1;
- (id)m_nsBillTime;
- (void)setM_nsBillTime:(id)arg1;
- (id)m_nsLastUpdateTime;
- (void)setM_nsLastUpdateTime:(id)arg1;
- (id)m_nsRepayLastTime;
- (void)setM_nsRepayLastTime:(id)arg1;
- (id)m_nsCreditDegree;
- (void)setM_nsCreditDegree:(id)arg1;
- (id)m_nsCreditState;
- (void)setM_nsCreditState:(id)arg1;
- (long long)m_uiBillAmount;
- (void)setM_uiBillAmount:(long long)arg1;
- (unsigned int)m_uiCreditAmount;
- (void)setM_uiCreditAmount:(unsigned int)arg1;
- (unsigned int)m_uiUpgradeCount;
- (void)setM_uiUpgradeCount:(unsigned int)arg1;
- (unsigned int)m_uiCreditUsed;
- (void)setM_uiCreditUsed:(unsigned int)arg1;
- (long long)m_uiRepayAmount;
- (void)setM_uiRepayAmount:(long long)arg1;
- (long long)m_uiRepayMininum;
- (void)setM_uiRepayMininum:(long long)arg1;
- (id)m_nsBillUrl;
- (void)setM_nsBillUrl:(id)arg1;
- (id)m_nsLearnMoreUrl;
- (void)setM_nsLearnMoreUrl:(id)arg1;
- (id)m_nsRepayUrl;
- (void)setM_nsRepayUrl:(id)arg1;
- (id)m_nsRightsUrl;
- (void)setM_nsRightsUrl:(id)arg1;
- (id)m_nsCreditDetailUrl;
- (void)setM_nsCreditDetailUrl:(id)arg1;
- (id)m_nsAppUserName;
- (void)setM_nsAppUserName:(id)arg1;
- (id)m_nsAppNickName;
- (void)setM_nsAppNickName:(id)arg1;
- (id)m_nsAppTelephone;
- (void)setM_nsAppTelephone:(id)arg1;
- (id)m_aryCreditLimitExtList;
- (void)setM_aryCreditLimitExtList:(id)arg1;
- (id)m_nsExtGroupTitle;
- (void)setM_nsExtGroupTitle:(id)arg1;
- (id)m_aryExtList;
- (void)setM_aryExtList:(id)arg1;
- (void).cxx_destruct;
@end

