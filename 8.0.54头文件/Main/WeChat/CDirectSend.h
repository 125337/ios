@interface CDirectSend : NSObject
{
    unsigned char m_ucCmdID; // +0x8
    unsigned char m_ucFlag; // +0x9
    unsigned int m_uiSeq; // +0xc
    unsigned short m_usUsrNameLen; // +0x10
    NSString * m_nsUsrNameList; // +0x18
    unsigned short m_usDataLen; // +0x20
    NSData * m_dtData; // +0x28
}
- (id)init;
- (id)Encode;
- (BOOL)Decode:(id)arg1;
- (unsigned char)m_ucCmdID;
- (void)setM_ucCmdID:(unsigned char)arg1;
- (unsigned char)m_ucFlag;
- (void)setM_ucFlag:(unsigned char)arg1;
- (unsigned int)m_uiSeq;
- (void)setM_uiSeq:(unsigned int)arg1;
- (unsigned short)m_usUsrNameLen;
- (void)setM_usUsrNameLen:(unsigned short)arg1;
- (id)m_nsUsrNameList;
- (void)setM_nsUsrNameList:(id)arg1;
- (unsigned short)m_usDataLen;
- (void)setM_usDataLen:(unsigned short)arg1;
- (id)m_dtData;
- (void)setM_dtData:(id)arg1;
- (void).cxx_destruct;
@end

