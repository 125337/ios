@interface CdnComVideoProcessInfo : NSObject
{
    unsigned int m_uiDurationMs; // +0x8
    int _m_iNotMoovReason; // +0xc
    int _videoFormat; // +0x10
    int _originalVideoFormat; // +0x14
    NSString * m_nsClientMsgID; // +0x18
    NSString * m_nsFilePath; // +0x20
    unsigned long long m_uiOffset; // +0x28
    unsigned long long m_uiLength; // +0x30
    NSString * m_nsM3u8; // +0x38
    NSString * _svrFlag; // +0x40
}
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsFilePath;
- (void)setM_nsFilePath:(id)arg1;
- (unsigned long long)m_uiOffset;
- (void)setM_uiOffset:(unsigned long long)arg1;
- (unsigned long long)m_uiLength;
- (void)setM_uiLength:(unsigned long long)arg1;
- (unsigned int)m_uiDurationMs;
- (void)setM_uiDurationMs:(unsigned int)arg1;
- (id)m_nsM3u8;
- (void)setM_nsM3u8:(id)arg1;
- (int)m_iNotMoovReason;
- (void)setM_iNotMoovReason:(int)arg1;
- (id)svrFlag;
- (void)setSvrFlag:(id)arg1;
- (int)videoFormat;
- (void)setVideoFormat:(int)arg1;
- (int)originalVideoFormat;
- (void)setOriginalVideoFormat:(int)arg1;
- (void).cxx_destruct;
@end

