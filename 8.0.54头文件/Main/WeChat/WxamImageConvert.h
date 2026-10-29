@interface WxamImageConvert : NSObject
+ (id)encodeUIImageToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3;
+ (id)encodeToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3;
+ (id)encodeToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3 useWxAM3:(BOOL)arg4;
+ (id)decodeWxAMToHeif:(id)arg1 scene:(unsigned long long)arg2;
+ (id)decodeWxAMToJpg:(id)arg1 scene:(unsigned long long)arg2;
+ (id)decodeWxAM:(id)arg1 picType:(unsigned int)arg2 scene:(unsigned long long)arg3;
+ (BOOL)encodePicToWxAM:(id)arg1 wxamPath:(id)arg2 scene:(unsigned long long)arg3;
+ (BOOL)isWxamFormat:(id)arg1;
+ (BOOL)isWxamFormatData:(id)arg1;
+ (BOOL)decodeWxAmToPic:(id)arg1 wxamPath:(id)arg2 scene:(unsigned long long)arg3;
+ (BOOL)decodeWxAmToPic:(id)arg1 wxamPath:(id)arg2 picType:(unsigned int)arg3 scene:(unsigned long long)arg4;
+ (id)covertWxAmToPicShuffle:(id)arg1 useWxDecrypt:(BOOL)arg2 scene:(unsigned long long)arg3;
@end

