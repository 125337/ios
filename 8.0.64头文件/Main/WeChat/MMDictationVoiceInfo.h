@interface MMDictationVoiceInfo : NSObject
{
    unsigned long long _triggerScene; // +0x8
    NSString * _voiceId; // +0x10
    NSDate * _startTime; // +0x18
    NSDate * _endTime; // +0x20
}
- (id)description;
- (unsigned long long)triggerScene;
- (void)setTriggerScene:(unsigned long long)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)startTime;
- (void)setStartTime:(id)arg1;
- (id)endTime;
- (void)setEndTime:(id)arg1;
- (void).cxx_destruct;
@end
