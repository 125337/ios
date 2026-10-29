@interface VoiceTransReporter_VoiceInfo : NSObject
{
    int _type; // +0x8
    NSString * _voiceId; // +0x10
    NSString * _resultText; // +0x18
    unsigned long long _recordStartTime; // +0x20
    unsigned long long _recordEndTime; // +0x28
    unsigned long long _startPullLastPacketTime; // +0x30
    unsigned long long _finishPullLastPacketTime; // +0x38
}
- (id)reportJson;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)resultText;
- (void)setResultText:(id)arg1;
- (unsigned long long)recordStartTime;
- (void)setRecordStartTime:(unsigned long long)arg1;
- (unsigned long long)recordEndTime;
- (void)setRecordEndTime:(unsigned long long)arg1;
- (unsigned long long)startPullLastPacketTime;
- (void)setStartPullLastPacketTime:(unsigned long long)arg1;
- (unsigned long long)finishPullLastPacketTime;
- (void)setFinishPullLastPacketTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
