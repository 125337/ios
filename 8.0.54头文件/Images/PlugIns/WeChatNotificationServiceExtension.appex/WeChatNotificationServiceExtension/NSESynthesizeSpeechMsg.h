@interface NSESynthesizeSpeechMsg : NSObject
{
    BOOL _isPlaying; // +0x8
    unsigned int _m_uiFee; // +0xc
    unsigned int _m_expireTime; // +0x10
    unsigned int _m_needFailOver; // +0x14
    UNMutableNotificationContent * _bestAttemptContent; // +0x18
    NSString * _m_nsPayExtTemplateId; // +0x20
    NSString * _m_nsOutTradeNo; // +0x28
    NSString * _m_nsFeeType; // +0x30
    NSString * _m_nsVoiceContent; // +0x38
    double _m_voiceLength; // +0x40
    id <NSESynthesizeSpeechMsgDelegate> _delegate; // +0x48
    id /* block */ _contentHandler; // +0x50
}
+ (id)speechMsgWithNotificationContent:(id)arg1;
- (void)playSpeechMsg;
- (id)defaultSoundName;
- (id)bestAttemptContent;
- (void)setBestAttemptContent:(id)arg1;
- (id)m_nsPayExtTemplateId;
- (void)setM_nsPayExtTemplateId:(id)arg1;
- (id)m_nsOutTradeNo;
- (void)setM_nsOutTradeNo:(id)arg1;
- (unsigned int)m_uiFee;
- (void)setM_uiFee:(unsigned int)arg1;
- (id)m_nsFeeType;
- (void)setM_nsFeeType:(id)arg1;
- (id)m_nsVoiceContent;
- (void)setM_nsVoiceContent:(id)arg1;
- (unsigned int)m_expireTime;
- (void)setM_expireTime:(unsigned int)arg1;
- (double)m_voiceLength;
- (void)setM_voiceLength:(double)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (unsigned int)m_needFailOver;
- (void)setM_needFailOver:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)contentHandler;
- (void)setContentHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

