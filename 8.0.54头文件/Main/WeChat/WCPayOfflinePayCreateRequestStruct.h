@interface WCPayOfflinePayCreateRequestStruct : NSObject
{
    NSString * m_nsPassword; // +0x8
    NSString * m_nsBindSerialNo; // +0x10
    NSString * m_nsBankType; // +0x18
    NSString * m_nsCardTail; // +0x20
    unsigned int m_uiInitalMoney; // +0x28
}
- (id)m_nsBankType;
- (void)setM_nsBankType:(id)arg1;
- (id)m_nsBindSerialNo;
- (void)setM_nsBindSerialNo:(id)arg1;
- (id)m_nsCardTail;
- (void)setM_nsCardTail:(id)arg1;
- (id)m_nsPassword;
- (void)setM_nsPassword:(id)arg1;
- (unsigned int)m_uiInitalMoney;
- (void)setM_uiInitalMoney:(unsigned int)arg1;
- (void).cxx_destruct;
@end

