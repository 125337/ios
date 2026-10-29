@interface ChatVoiceRecordAudioService : NSObject <AudioSenderInterruptionDelegate, VoiceRecordAudioService>
{
    NSString * _chatName; // +0x8
    id <VoiceRecordAudioInterruptionObserver> _interruptionObserver; // +0x10
}
- (id)initWithChatName:(id)arg1;
- (BOOL)isSupportVoiceTranslate;
- (id)startTranslateWithVoiceRecording:(unsigned int)arg1;
- (void)pauseVoiceTranslating;
- (void)resumeVoiceTranslating;
- (void)stopVoiceTransWithInputId:(unsigned int)arg1;
- (void)setForInterrupt;
- (BOOL)newBehaviourForCallInterrupt;
- (void)addInterruptionObserver:(id)arg1;
- (void)removeInterruptionObserver:(id)arg1;
- (void)audioSenderDidReceiveInterruption:(id)arg1 param:(id)arg2;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)interruptionObserver;
- (void)setInterruptionObserver:(id)arg1;
- (void).cxx_destruct;
@end
