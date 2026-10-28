@interface MMFinderVideoUtil : NSObject
+ (struct)calculateDiemnsDividedByTwo:(int)arg1 andHeight:(int)arg2;
+ (id)parameterSetsFromNalus:(id)arg1 forHevc:(BOOL)arg2;
+ (long long)h264NalTypeFromValue:(const char *)arg1;
+ (BOOL)isParameterSetsComplete:(id)arg1 forHevc:(BOOL)arg2;
+ (id)annexBNalusFrom:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)getAVCCFrameFromAnnexB:(const char *)arg1 length:(unsigned long long)arg2;
+ (const char *)searchNalStartFrom:(const char *)arg1 length:(long long)arg2 startCodeLen:(long long *)arg3;
@end
