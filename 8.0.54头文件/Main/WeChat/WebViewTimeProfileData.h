@interface WebViewTimeProfileData : MMObject
{
    unsigned long long m_initTimeStamp; // +0x8
    unsigned long long m_getA8KeyTimeStamp; // +0x10
    unsigned long long m_startLoadTimeStamp; // +0x18
    unsigned long long m_finishLoadTimeStamp; // +0x20
    unsigned long long _m_mainFrameGetA8KeyStartTimestamp; // +0x28
    unsigned long long _m_mainFrameGetA8KeyEndTimestamp; // +0x30
    unsigned long long _m_mainFrameLoadStartTimestamp; // +0x38
    unsigned long long _m_mainFrameCommitTimestamp; // +0x40
    unsigned long long _m_mainFrameLoadEndTimestamp; // +0x48
}
- (unsigned long long)m_initTimeStamp;
- (void)setM_initTimeStamp:(unsigned long long)arg1;
- (unsigned long long)m_getA8KeyTimeStamp;
- (void)setM_getA8KeyTimeStamp:(unsigned long long)arg1;
- (unsigned long long)m_startLoadTimeStamp;
- (void)setM_startLoadTimeStamp:(unsigned long long)arg1;
- (unsigned long long)m_finishLoadTimeStamp;
- (void)setM_finishLoadTimeStamp:(unsigned long long)arg1;
- (unsigned long long)m_mainFrameGetA8KeyStartTimestamp;
- (void)setM_mainFrameGetA8KeyStartTimestamp:(unsigned long long)arg1;
- (unsigned long long)m_mainFrameGetA8KeyEndTimestamp;
- (void)setM_mainFrameGetA8KeyEndTimestamp:(unsigned long long)arg1;
- (unsigned long long)m_mainFrameLoadStartTimestamp;
- (void)setM_mainFrameLoadStartTimestamp:(unsigned long long)arg1;
- (unsigned long long)m_mainFrameCommitTimestamp;
- (void)setM_mainFrameCommitTimestamp:(unsigned long long)arg1;
- (unsigned long long)m_mainFrameLoadEndTimestamp;
- (void)setM_mainFrameLoadEndTimestamp:(unsigned long long)arg1;
@end

