@interface CUploadVideoInfo : NSObject
{
    unsigned int m_uiUploadCount; // +0x8
    unsigned int m_uiCurOffset; // +0xc
    unsigned int m_uiCurOffsetCount; // +0x10
    unsigned int m_uiZeroUploadCount; // +0x14
    CMessageWrap * m_wrapMsg; // +0x18
    unsigned long long m_ui64StartTime; // +0x20
    unsigned int m_uiOpType; // +0x28
    int m_nRetCode; // +0x2c
    BOOL _isParallelUpload; // +0x30
}
- (id)init;
- (id)description;
- (id)GetStatInfo;
- (unsigned int)m_uiUploadCount;
- (void)setM_uiUploadCount:(unsigned int)arg1;
- (unsigned int)m_uiCurOffset;
- (void)setM_uiCurOffset:(unsigned int)arg1;
- (unsigned int)m_uiCurOffsetCount;
- (void)setM_uiCurOffsetCount:(unsigned int)arg1;
- (unsigned int)m_uiZeroUploadCount;
- (void)setM_uiZeroUploadCount:(unsigned int)arg1;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (unsigned long long)m_ui64StartTime;
- (void)setM_ui64StartTime:(unsigned long long)arg1;
- (unsigned int)m_uiOpType;
- (void)setM_uiOpType:(unsigned int)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (BOOL)isParallelUpload;
- (void)setIsParallelUpload:(BOOL)arg1;
- (void).cxx_destruct;
@end

