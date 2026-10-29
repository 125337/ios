@interface CEmoticonUploadInfo : NSObject
{
    BOOL m_bFirst; // +0x8
    unsigned int m_uiStartPos; // +0xc
    unsigned int m_uiTotalLen; // +0x10
    NSString * m_nsMD5; // +0x18
    CMessageWrap * m_wrapMsg; // +0x20
}
- (id)init;
- (id)description;
- (id)m_nsMD5;
- (void)setM_nsMD5:(id)arg1;
- (unsigned int)m_uiStartPos;
- (void)setM_uiStartPos:(unsigned int)arg1;
- (unsigned int)m_uiTotalLen;
- (void)setM_uiTotalLen:(unsigned int)arg1;
- (BOOL)m_bFirst;
- (void)setM_bFirst:(BOOL)arg1;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (void).cxx_destruct;
@end

