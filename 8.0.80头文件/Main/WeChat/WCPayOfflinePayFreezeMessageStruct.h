@interface WCPayOfflinePayFreezeMessageStruct : NSObject <NSCoding>
{
    BOOL m_bFreezeOfflinePay; // +0x8
    unsigned int m_uiFreezeOfflinePayType; // +0xc
    NSString * m_nsFreezeOfflinePayMessage; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)m_bFreezeOfflinePay;
- (void)setM_bFreezeOfflinePay:(BOOL)arg1;
- (id)m_nsFreezeOfflinePayMessage;
- (void)setM_nsFreezeOfflinePayMessage:(id)arg1;
- (unsigned int)m_uiFreezeOfflinePayType;
- (void)setM_uiFreezeOfflinePayType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
