@interface FavAudioInfo : NSObject
{
    unsigned int m_uiAudioFormat; // +0x8
    unsigned int m_uiAudioID; // +0xc
    unsigned int m_uiAudioDuration; // +0x10
    NSString * m_nsAudioID; // +0x18
    NSString * m_nsAudioPath; // +0x20
    BOOL m_bEnable; // +0x28
    BOOL m_bForceSpeeker; // +0x29
}
- (unsigned int)m_uiAudioID;
- (void)setM_uiAudioID:(unsigned int)arg1;
- (unsigned int)m_uiAudioFormat;
- (void)setM_uiAudioFormat:(unsigned int)arg1;
- (unsigned int)m_uiAudioDuration;
- (void)setM_uiAudioDuration:(unsigned int)arg1;
- (id)m_nsAudioID;
- (void)setM_nsAudioID:(id)arg1;
- (id)m_nsAudioPath;
- (void)setM_nsAudioPath:(id)arg1;
- (BOOL)m_bEnable;
- (void)setM_bEnable:(BOOL)arg1;
- (BOOL)m_bForceSpeeker;
- (void)setM_bForceSpeeker:(BOOL)arg1;
- (void).cxx_destruct;
@end
