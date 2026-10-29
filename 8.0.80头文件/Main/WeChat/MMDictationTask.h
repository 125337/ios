@interface MMDictationTask : NSObject
{
    id <MMDictationTaskDelegate> _delegate; // +0x8
}
+ (BOOL)exptOpenForOpus;
- (id)initWithScene:(long long)arg1 sessionId:(id)arg2;
- (id)voiceId;
- (id)resultText;
- (long long)endFlag;
- (long long)stopMode;
- (void)setDictationExtraData:(id)arg1;
- (void)setDefaultStopMode:(long long)arg1;
- (void)setEnableOfflineMode:(BOOL)arg1;
- (BOOL)isRecording;
- (BOOL)isWaitingForEndFlag;
- (void)startRecord;
- (void)stopRecord:(unsigned long long)arg1;
- (void)stopRecord:(unsigned long long)arg1 stopMode:(long long)arg2;
- (id)peakPowerTraceLog;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
