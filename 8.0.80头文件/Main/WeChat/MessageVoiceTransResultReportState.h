@interface MessageVoiceTransResultReportState : NSObject
{
    MessageVoiceTransTimings * _timings; // +0x8
    unsigned long long _resultType; // +0x10
    unsigned long long _triggerScene; // +0x18
}
- (id)timings;
- (void)setTimings:(id)arg1;
- (unsigned long long)resultType;
- (void)setResultType:(unsigned long long)arg1;
- (unsigned long long)triggerScene;
- (void)setTriggerScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
