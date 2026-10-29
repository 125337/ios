@interface EmoticonStoreGetListBuff : MMObject
{
    unsigned int m_eventId; // +0x8
    unsigned int m_reqType; // +0xc
    NSData * m_reqBuf; // +0x10
    NSMutableArray * m_adArray; // +0x18
    unsigned long long m_sessionId; // +0x20
}
- (id)m_adArray;
- (void)setM_adArray:(id)arg1;
- (unsigned int)m_reqType;
- (void)setM_reqType:(unsigned int)arg1;
- (unsigned int)m_eventId;
- (void)setM_eventId:(unsigned int)arg1;
- (id)m_reqBuf;
- (void)setM_reqBuf:(id)arg1;
- (unsigned long long)m_sessionId;
- (void)setM_sessionId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

