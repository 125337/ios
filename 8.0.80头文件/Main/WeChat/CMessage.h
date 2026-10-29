@interface CMessage : NSObject
{
    unsigned int m_uiMessage; // +0x8
    unsigned int m_uiEventID; // +0xc
    NSDictionary * m_dicMessageInfo; // +0x10
    ProtobufCGIWrap * m_pbCGIWrap; // +0x18
    BOOL m_bNotify; // +0x20
}
- (id)init;
- (unsigned int)m_uiMessage;
- (void)setM_uiMessage:(unsigned int)arg1;
- (unsigned int)m_uiEventID;
- (void)setM_uiEventID:(unsigned int)arg1;
- (id)m_dicMessageInfo;
- (void)setM_dicMessageInfo:(id)arg1;
- (id)m_pbCGIWrap;
- (void)setM_pbCGIWrap:(id)arg1;
- (BOOL)m_bNotify;
- (void)setM_bNotify:(BOOL)arg1;
- (void).cxx_destruct;
@end
