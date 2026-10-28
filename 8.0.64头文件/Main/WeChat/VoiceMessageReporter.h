@interface VoiceMessageReporter : NSObject
{
    float _currentPlayRate; // +0x8
    CMessageWrap * _msgWrap; // +0x10
    unsigned long long _lastRecordTimestamp; // +0x18
    OrderedDictionary * _playRateDuration; // +0x20
}
+ (void)onShowMinimizeView:(int)arg1;
+ (void)onMinimizeViewExpose;
+ (void)onCloseMinimizeView;
- (id)init;
- (void)onStartSpeedPlay;
- (void)onStopSpeedPlay;
- (void)onPlaySpeedChangeFrom:(float)arg1 to:(float)arg2;
- (void)onStartPlay;
- (void)onStopPlayWithReason:(int)arg1;
- (id)commonReportInfo;
- (void)recordTimestamp;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (float)currentPlayRate;
- (void)setCurrentPlayRate:(float)arg1;
- (unsigned long long)lastRecordTimestamp;
- (void)setLastRecordTimestamp:(unsigned long long)arg1;
- (id)playRateDuration;
- (void)setPlayRateDuration:(id)arg1;
- (void).cxx_destruct;
@end
