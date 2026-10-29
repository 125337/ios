@interface WCPayRetrySendMsgRequest : NSObject
{
    NSString * m_nsTranscationID; // +0x8
    NSString * m_nsReceiverUserName; // +0x10
    unsigned long long m_uiInvalidTime; // +0x18
    NSString * m_nsTransferID; // +0x20
    unsigned int _fromScene; // +0x28
}
- (id)m_nsTranscationID;
- (void)setM_nsTranscationID:(id)arg1;
- (id)m_nsReceiverUserName;
- (void)setM_nsReceiverUserName:(id)arg1;
- (unsigned long long)m_uiInvalidTime;
- (void)setM_uiInvalidTime:(unsigned long long)arg1;
- (id)m_nsTransferID;
- (void)setM_nsTransferID:(id)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

