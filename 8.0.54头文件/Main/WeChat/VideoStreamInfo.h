@interface VideoStreamInfo : NSObject
{
    float _m_uiVideoTime; // +0x8
    int _m_siVideoBitrate; // +0xc
    unsigned int _m_uiVideoLen; // +0x10
    float _m_uiMaxLimitDuration; // +0x14
    float _m_uiPreloadSec; // +0x18
    float _m_uiSecByOnceDownload; // +0x1c
    float _minBufferLimit; // +0x20
    float _maxBufferLimit; // +0x24
    unsigned int _m_uiMoovPos; // +0x28
    unsigned int _m_uiDownloadStatus; // +0x2c
    NSString * _m_nsClientMediaId; // +0x30
    NSString * _m_nsVideoPath; // +0x38
    NSString * _m_nsDataUrl; // +0x40
    NSString * _m_nsAesKey; // +0x48
    unsigned long long _m_uiDownloadMode; // +0x50
    WCUrl * _m_wcDataUrl; // +0x58
}
- (id)init;
- (BOOL)isDownloadWhilePlayingMode;
- (id)m_nsClientMediaId;
- (void)setM_nsClientMediaId:(id)arg1;
- (float)m_uiVideoTime;
- (void)setM_uiVideoTime:(float)arg1;
- (int)m_siVideoBitrate;
- (void)setM_siVideoBitrate:(int)arg1;
- (unsigned int)m_uiVideoLen;
- (void)setM_uiVideoLen:(unsigned int)arg1;
- (id)m_nsVideoPath;
- (void)setM_nsVideoPath:(id)arg1;
- (id)m_nsDataUrl;
- (void)setM_nsDataUrl:(id)arg1;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (unsigned long long)m_uiDownloadMode;
- (void)setM_uiDownloadMode:(unsigned long long)arg1;
- (float)m_uiMaxLimitDuration;
- (void)setM_uiMaxLimitDuration:(float)arg1;
- (float)m_uiPreloadSec;
- (void)setM_uiPreloadSec:(float)arg1;
- (float)m_uiSecByOnceDownload;
- (void)setM_uiSecByOnceDownload:(float)arg1;
- (float)minBufferLimit;
- (void)setMinBufferLimit:(float)arg1;
- (float)maxBufferLimit;
- (void)setMaxBufferLimit:(float)arg1;
- (unsigned int)m_uiMoovPos;
- (void)setM_uiMoovPos:(unsigned int)arg1;
- (id)m_wcDataUrl;
- (void)setM_wcDataUrl:(id)arg1;
- (unsigned int)m_uiDownloadStatus;
- (void)setM_uiDownloadStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

