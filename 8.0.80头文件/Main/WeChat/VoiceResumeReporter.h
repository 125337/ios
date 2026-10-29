@interface VoiceResumeReporter : NSObject
{
    unsigned int _action; // +0x8
    unsigned int _stopReason; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _totalTime; // +0x14
    unsigned int _playTime; // +0x18
    NSString * _actionResult; // +0x20
    CMessageWrap * _msgWrap; // +0x28
    NSString * _voiceId; // +0x30
}
+ (id)reporter;
+ (void)reportAction:(unsigned int)arg1;
+ (void)updateVoiceStopReason:(unsigned int)arg1;
- (void)report;
- (void)beforeReport;
- (void)realReport;
- (void)afterReport;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (id)actionResult;
- (void)setActionResult:(id)arg1;
- (unsigned int)stopReason;
- (void)setStopReason:(unsigned int)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (unsigned int)totalTime;
- (void)setTotalTime:(unsigned int)arg1;
- (unsigned int)playTime;
- (void)setPlayTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
