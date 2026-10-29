@interface WCPayTransToBankCardReceiver : MMObject
{
    NSString * _m_nsRemarkName; // +0x8
    NSString * _m_nsUserTrueName; // +0x10
    NSString * _m_nsEncryptedUsrName; // +0x18
    NSString * _m_nsBankcardSeqNo; // +0x20
    NSString * _m_nsBankcardEncNo; // +0x28
    NSString * _m_nsBankcardTailNo; // +0x30
    WCPayTransBankItem * _m_bankItem; // +0x38
}
- (id)initWithTransferRecord:(id)arg1;
- (id)m_nsRemarkName;
- (void)setM_nsRemarkName:(id)arg1;
- (id)m_nsUserTrueName;
- (void)setM_nsUserTrueName:(id)arg1;
- (id)m_nsEncryptedUsrName;
- (void)setM_nsEncryptedUsrName:(id)arg1;
- (id)m_nsBankcardSeqNo;
- (void)setM_nsBankcardSeqNo:(id)arg1;
- (id)m_nsBankcardEncNo;
- (void)setM_nsBankcardEncNo:(id)arg1;
- (id)m_nsBankcardTailNo;
- (void)setM_nsBankcardTailNo:(id)arg1;
- (id)m_bankItem;
- (void)setM_bankItem:(id)arg1;
- (void).cxx_destruct;
@end
