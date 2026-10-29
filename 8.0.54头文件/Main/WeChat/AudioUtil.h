@interface AudioUtil : NSObject
+ (unsigned int)calcVoiceTime:(unsigned int)arg1 VoiceFormat:(unsigned int)arg2;
+ (unsigned int)calcSilkVoiceTime:(id)arg1;
+ (void)reportStartRecordCost:(id)arg1;
+ (id)getReportJson:(id)arg1;
+ (void)reportIDKeyWithStart:(int)arg1 allCost:(unsigned long long)arg2;
+ (BOOL)useAudioUnit;
@end

