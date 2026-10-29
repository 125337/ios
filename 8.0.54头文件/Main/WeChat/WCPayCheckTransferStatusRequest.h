@interface WCPayCheckTransferStatusRequest : NSObject
{
    NSString * m_nsTransferID; // +0x8
    NSString * m_nsFromUserName; // +0x10
    unsigned long long m_uiInvalidTime; // +0x18
    NSString * m_nsTransactionID; // +0x20
    NSString * _group_username; // +0x28
}
- (id)m_nsFromUserName;
- (void)setM_nsFromUserName:(id)arg1;
- (id)m_nsTransferID;
- (void)setM_nsTransferID:(id)arg1;
- (unsigned long long)m_uiInvalidTime;
- (void)setM_uiInvalidTime:(unsigned long long)arg1;
- (id)m_nsTransactionID;
- (void)setM_nsTransactionID:(id)arg1;
- (id)group_username;
- (void)setGroup_username:(id)arg1;
- (void).cxx_destruct;
@end

