@interface VoiceTransReporter_CommandInfo : NSObject
{
    BOOL _isSend; // +0x8
    unsigned int _commandId; // +0xc
    unsigned long long _commandStartTime; // +0x10
    unsigned long long _commandListenTime; // +0x18
    unsigned long long _commandExecutingTime; // +0x20
    unsigned long long _commandExecuteFailTime; // +0x28
    unsigned long long _commandExecuteStartTime; // +0x30
    unsigned long long _commandExecuteFinishTime; // +0x38
    NSString * _fromText; // +0x40
    NSString * _toText; // +0x48
}
- (id)executeTrace;
- (unsigned long long)commandStartTime;
- (void)setCommandStartTime:(unsigned long long)arg1;
- (unsigned long long)commandListenTime;
- (void)setCommandListenTime:(unsigned long long)arg1;
- (unsigned long long)commandExecutingTime;
- (void)setCommandExecutingTime:(unsigned long long)arg1;
- (unsigned long long)commandExecuteFailTime;
- (void)setCommandExecuteFailTime:(unsigned long long)arg1;
- (unsigned long long)commandExecuteStartTime;
- (void)setCommandExecuteStartTime:(unsigned long long)arg1;
- (unsigned long long)commandExecuteFinishTime;
- (void)setCommandExecuteFinishTime:(unsigned long long)arg1;
- (id)fromText;
- (void)setFromText:(id)arg1;
- (id)toText;
- (void)setToText:(id)arg1;
- (BOOL)isSend;
- (void)setIsSend:(BOOL)arg1;
- (unsigned int)commandId;
- (void)setCommandId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
