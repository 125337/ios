@interface WxamImageConvert : NSObject
+ (id)encodeUIImageToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3;
+ (id)encodeToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3;
+ (id)encodeToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3 newTool4:(int)arg4;
+ (id)encodeRgbaToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3 srcW:(int)arg4 srcH:(int)arg5 newTool3:(int)arg6 aigcData:(id)arg7;
+ (id)encodeToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3 useWxAM3:(BOOL)arg4;
+ (id)encodeToWxAM:(id)arg1 preferQP:(int)arg2 srcW:(int)arg3 srcH:(int)arg4 scene:(unsigned long long)arg5 useWxAM3:(BOOL)arg6 newTool2:(int)arg7 newTool3:(int)arg8 newTool4:(int)arg9 isRgba:(BOOL)arg10 aigcData:(id)arg11;
+ (id)decodeWxAMToHeif:(id)arg1 scene:(unsigned long long)arg2;
+ (id)decodeWxAMToJpg:(id)arg1 scene:(unsigned long long)arg2;
+ (id)decodeWxAM:(id)arg1 picType:(unsigned int)arg2 scene:(unsigned long long)arg3;
+ (BOOL)encodePicToWxAM:(id)arg1 wxamPath:(id)arg2 scene:(unsigned long long)arg3;
+ (BOOL)encodePicToWxAM:(id)arg1 wxamPath:(id)arg2 scene:(unsigned long long)arg3 newTool:(int)arg4;
+ (BOOL)isWxamFormat:(id)arg1;
+ (BOOL)isWxamFormatData:(id)arg1;
+ (BOOL)isWxamWithP3:(id)arg1;
+ (BOOL)decodeWxAmToPic:(id)arg1 wxamPath:(id)arg2 scene:(unsigned long long)arg3;
+ (BOOL)decodeWxAmToPic:(id)arg1 wxamPath:(id)arg2 picType:(unsigned int)arg3 scene:(unsigned long long)arg4;
+ (id)covertWxAmToPicShuffle:(id)arg1 useWxDecrypt:(BOOL)arg2 scene:(unsigned long long)arg3;
@end
