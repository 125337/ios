@interface TXCCodecUtils : NSObject
+ (BOOL)isIFrame:(opaqueCMSampleBuffer *)arg1;
+ (id)encodedDataFromSampleBuffer:(opaqueCMSampleBuffer *)arg1 isIFrame:(BOOL)arg2 isAnnexB:(BOOL)arg3 isHevc:(BOOL)arg4;
+ (int)txcGetHevcParameterSetAtIndex:(opaqueCMFormatDescription *)arg1 Index:(unsigned long long)arg2 PointOut:(const char * *)arg3 SizeOut:(unsigned long long *)arg4 SizeCount:(unsigned long long *)arg5 NalLength:(int *)arg6;
+ (id)parameterSetDataFromSampleBuffer:(opaqueCMSampleBuffer *)arg1 isAnnexB:(BOOL)arg2 isHevc:(BOOL)arg3;
+ (id)parameterSetsFromNalus:(id)arg1 forHevc:(BOOL)arg2;
+ (BOOL)isParameterSetsComplete:(id)arg1 forHevc:(BOOL)arg2;
+ (opaqueCMSampleBuffer *)avccBufferFromEncodedNals:(id)arg1 format:(opaqueCMFormatDescription *)arg2 pts:(unsigned long long)arg3;
+ (id)annexBNalusFrom:(const char *)arg1 length:(unsigned long long)arg2;
+ (const char *)searchNalStartFrom:(const char *)arg1 length:(long long)arg2 startCodeLen:(long long *)arg3;
+ (long long)h264NalTypeFromValue:(const char *)arg1;
+ (long long)h265NalTypeFromValue:(const char *)arg1;
@end
