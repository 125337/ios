@interface MMOpenVoiceReporter : NSObject
+ (void)setAudioEndStatusWithRecordReadNum:(int)arg1 playVolume:(int)arg2;
+ (void)setAudioEndStatusWithPlayCallNum:(int)arg1;
+ (void)setAudioPlayInitStatus:(int)arg1 recorderErrCode:(int)arg2 playerErrCode:(int)arg3;
+ (void)setAudioMicAbnormal:(int)arg1;
+ (id)generateReport;
+ (void)resetAll;
@end

