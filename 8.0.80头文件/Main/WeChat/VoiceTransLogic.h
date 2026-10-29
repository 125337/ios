@interface VoiceTransLogic : NSObject
{
    BOOL _manullyStartTransVoice; // +0x8
    NSData * _extraData; // +0x10
    NSData * _respExtraData; // +0x18
}
- (id)initWithScene:(long long)arg1;
- (id)currentVoiceId;
- (void)startRecord;
- (void)stopRecord:(int)arg1;
- (void)startTransVoice;
- (void)pauseVoiceTranslating;
- (void)resumeVoiceTranslating;
- (void)startNewTransSegment;
- (void)startNewTransSegmentWaitingForFinalResult:(BOOL)arg1;
- (void)updateExtraData:(id)arg1;
- (long long)recordingTime;
- (id)translateResult;
- (void)addObserver:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)respExtraData;
- (void)setRespExtraData:(id)arg1;
- (BOOL)manullyStartTransVoice;
- (void)setManullyStartTransVoice:(BOOL)arg1;
- (void).cxx_destruct;
@end
