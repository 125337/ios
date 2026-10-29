@interface CExtendInfoOfVoiceMsg : NSObject <IMsgExtendOperation, IMessageWrapExt, NSCopying>
{
    unsigned int m_uiVoiceTime; // +0x8
    unsigned int m_uiVoiceFormat; // +0xc
    unsigned int m_uiVoiceEndFlag; // +0x10
    unsigned int m_uiVoiceCancelFlag; // +0x14
    unsigned int m_uiVoiceForwardFlag; // +0x18
    NSData * m_dtVoice; // +0x20
    CMessageWrap * m_refMessageWrap; // +0x28
    NSString * _voiceUrl; // +0x30
    NSString * _aesKey; // +0x38
}
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)ChangeForDisplay;
- (void)UpdateContent:(id)arg1;
- (BOOL)SaveMesVoice:(id)arg1;
- (BOOL)IsUnPlayed;
- (BOOL)IsDownloadEnded;
- (void)SetPlayed;
- (BOOL)IsRecording;
- (BOOL)IsPlaySounded;
- (void)SetPlaySounded:(BOOL)arg1;
- (id)messageFTSTextForDisplay;
- (unsigned int)m_uiVoiceTime;
- (void)setM_uiVoiceTime:(unsigned int)arg1;
- (unsigned int)m_uiVoiceFormat;
- (void)setM_uiVoiceFormat:(unsigned int)arg1;
- (unsigned int)m_uiVoiceEndFlag;
- (void)setM_uiVoiceEndFlag:(unsigned int)arg1;
- (unsigned int)m_uiVoiceCancelFlag;
- (void)setM_uiVoiceCancelFlag:(unsigned int)arg1;
- (unsigned int)m_uiVoiceForwardFlag;
- (void)setM_uiVoiceForwardFlag:(unsigned int)arg1;
- (id)m_dtVoice;
- (void)setM_dtVoice:(id)arg1;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (id)voiceUrl;
- (void)setVoiceUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (void).cxx_destruct;
@end
