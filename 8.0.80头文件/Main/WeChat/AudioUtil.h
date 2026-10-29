@interface AudioUtil : NSObject
+ (unsigned int)calcVoiceTime:(unsigned int)arg1 VoiceFormat:(unsigned int)arg2;
+ (unsigned int)calcVoiceTimeWithData:(id)arg1 VoiceFormat:(unsigned int)arg2;
+ (void)reportStartRecordCost:(id)arg1;
+ (id)getReportJson:(id)arg1;
+ (void)reportIDKeyWithStart:(int)arg1 allCost:(unsigned long long)arg2;
@end
