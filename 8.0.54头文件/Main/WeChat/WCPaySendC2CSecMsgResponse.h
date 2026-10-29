@interface WCPaySendC2CSecMsgResponse : NSObject
{
    unsigned int m_errCode; // +0x8
    NSString * m_errMsg; // +0x10
    NSString * m_msgId; // +0x18
}
- (unsigned int)m_errCode;
- (void)setM_errCode:(unsigned int)arg1;
- (id)m_errMsg;
- (void)setM_errMsg:(id)arg1;
- (id)m_msgId;
- (void)setM_msgId:(id)arg1;
- (void).cxx_destruct;
@end

