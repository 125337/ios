@interface CUploadImgWrap : NSObject
{
    NSString * m_nsFromUsr; // +0x8
    NSString * m_nsToUsr; // +0x10
    unsigned int m_uiLocalID; // +0x18
    long long m_n64SvrID; // +0x20
    unsigned int m_uiTotalLen; // +0x28
    unsigned int m_uiStartPos; // +0x2c
    unsigned int m_uiDataLen; // +0x30
    NSData * m_dtBuffer; // +0x38
    unsigned int m_uiCreateTime; // +0x40
    unsigned int m_uiMessageType; // +0x44
    unsigned int m_uiSendTime; // +0x48
    BOOL m_bHDImg; // +0x4c
    BOOL m_bWifi; // +0x4d
    unsigned int m_uiSource; // +0x50
}
- (id)init;
- (id)m_nsFromUsr;
- (void)setM_nsFromUsr:(id)arg1;
- (id)m_nsToUsr;
- (void)setM_nsToUsr:(id)arg1;
- (unsigned int)m_uiLocalID;
- (void)setM_uiLocalID:(unsigned int)arg1;
- (long long)m_n64SvrID;
- (void)setM_n64SvrID:(long long)arg1;
- (unsigned int)m_uiTotalLen;
- (void)setM_uiTotalLen:(unsigned int)arg1;
- (unsigned int)m_uiStartPos;
- (void)setM_uiStartPos:(unsigned int)arg1;
- (unsigned int)m_uiDataLen;
- (void)setM_uiDataLen:(unsigned int)arg1;
- (id)m_dtBuffer;
- (void)setM_dtBuffer:(id)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (unsigned int)m_uiMessageType;
- (void)setM_uiMessageType:(unsigned int)arg1;
- (unsigned int)m_uiSendTime;
- (void)setM_uiSendTime:(unsigned int)arg1;
- (BOOL)m_bHDImg;
- (void)setM_bHDImg:(BOOL)arg1;
- (BOOL)m_bWifi;
- (void)setM_bWifi:(BOOL)arg1;
- (unsigned int)m_uiSource;
- (void)setM_uiSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end
