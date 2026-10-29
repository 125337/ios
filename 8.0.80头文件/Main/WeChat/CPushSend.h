@interface CPushSend : NSObject
{
    unsigned int m_subCmd; // +0x8
    unsigned short m_bufferLen; // +0xc
    NSData * m_buffer; // +0x10
}
- (id)Encode;
- (BOOL)Decode:(id)arg1;
- (unsigned int)m_subCmd;
- (void)setM_subCmd:(unsigned int)arg1;
- (id)m_buffer;
- (void)setM_buffer:(id)arg1;
- (void).cxx_destruct;
@end
