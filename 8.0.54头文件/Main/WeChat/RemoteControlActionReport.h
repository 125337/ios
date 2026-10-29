@interface RemoteControlActionReport : MMObject
+ (void)reportDataForAction:(unsigned int)arg1 scene:(unsigned int)arg2;
+ (void)ReportBeginRecordForChat;
+ (void)ReportFinishRecordForChat;
+ (void)ReportBeginRecordForWXTalk;
+ (void)ReportFinishRecordForWXTalk;
+ (void)ReportPlay;
+ (void)ReportPause;
+ (void)ReportStop;
+ (void)ReportNextTrack;
+ (void)ReportPrevTrack;
@end

