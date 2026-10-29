@interface WCPayOverseaTransferOrderArgument : NSObject
{
    int _m_currency; // +0x8
    unsigned long long _m_amount; // +0x10
    NSString * _m_payNickname; // +0x18
    NSString * _m_recvUsername; // +0x20
    NSString * _m_recvNickname; // +0x28
    NSString * _m_reason; // +0x30
}
- (id)urlArgumentData;
- (unsigned long long)m_amount;
- (void)setM_amount:(unsigned long long)arg1;
- (id)m_payNickname;
- (void)setM_payNickname:(id)arg1;
- (id)m_recvUsername;
- (void)setM_recvUsername:(id)arg1;
- (id)m_recvNickname;
- (void)setM_recvNickname:(id)arg1;
- (id)m_reason;
- (void)setM_reason:(id)arg1;
- (int)m_currency;
- (void)setM_currency:(int)arg1;
- (void).cxx_destruct;
@end

