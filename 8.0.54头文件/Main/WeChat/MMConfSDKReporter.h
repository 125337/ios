@interface MMConfSDKReporter : NSObject
+ (void)setVideoDeviceErrCode:(int)arg1;
+ (void)setAudioEndStatusWithRecordReadNum:(int)arg1 playVolume:(int)arg2;
+ (void)setAudioEndStatusWithPlayCallNum:(int)arg1;
+ (void)setAudioPlayInitStatus:(int)arg1 recorderErrCode:(int)arg2 playerErrCode:(int)arg3;
+ (void)setAudioMicAbnormal:(int)arg1;
+ (id)generateReport;
+ (void)resetAll;
+ (void)setAudioSysinterrupTimestamp:(unsigned long long)arg1 beginTs:(unsigned long long)arg2 InterCnt:(unsigned int)arg3;
+ (void)setTalkViewAndAudioDevieTimestamp:(unsigned long long)arg1 SuccRec:(unsigned long long)arg2 starRec:(unsigned long long)arg3 startPlay:(unsigned long long)arg4;
@end

