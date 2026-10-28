@interface WCPayWXBorrowMoneyItem : NSObject
{
    int m_enWCPayWXBorrowMoneyItemStatus; // +0x8
    NSString * m_nsToOpenTitle; // +0x10
    NSString * m_nsRedirectUrl; // +0x18
    NSString * m_nsBankType; // +0x20
    NSString * m_nsBankName; // +0x28
    NSString * m_nsBankLogoUrl; // +0x30
    NSString * m_nsBankBgUrl; // +0x38
    NSString * m_nsBankMasterUrl; // +0x40
    NSString * m_nsIsOverDue; // +0x48
    NSString * m_nsAvailableOtb; // +0x50
    unsigned int m_uiRedCodIndex; // +0x58
}
- (int)m_enWCPayWXBorrowMoneyItemStatus;
- (void)setM_enWCPayWXBorrowMoneyItemStatus:(int)arg1;
- (id)m_nsAvailableOtb;
- (void)setM_nsAvailableOtb:(id)arg1;
- (id)m_nsBankLogoUrl;
- (void)setM_nsBankLogoUrl:(id)arg1;
- (id)m_nsBankName;
- (void)setM_nsBankName:(id)arg1;
- (id)m_nsBankType;
- (void)setM_nsBankType:(id)arg1;
- (id)m_nsIsOverDue;
- (void)setM_nsIsOverDue:(id)arg1;
- (id)m_nsRedirectUrl;
- (void)setM_nsRedirectUrl:(id)arg1;
- (id)m_nsToOpenTitle;
- (void)setM_nsToOpenTitle:(id)arg1;
- (id)m_nsBankBgUrl;
- (void)setM_nsBankBgUrl:(id)arg1;
- (id)m_nsBankMasterUrl;
- (void)setM_nsBankMasterUrl:(id)arg1;
- (unsigned int)m_uiRedCodIndex;
- (void)setM_uiRedCodIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
