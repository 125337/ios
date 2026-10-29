@interface TPCapability : NSObject
+ (BOOL)isVCodecCapabilitySupport:(long long)arg1 codecId:(long long)arg2 width:(int)arg3 height:(int)arg4 profile:(int)arg5 level:(int)arg6;
+ (BOOL)isVCodecCapabilitySupport:(long long)arg1 codecId:(long long)arg2 width:(int)arg3 height:(int)arg4 profile:(int)arg5 level:(int)arg6 framerate:(int)arg7;
+ (BOOL)isVCodecCapabilityCanSupport:(long long)arg1 width:(int)arg2 height:(int)arg3 profile:(int)arg4 level:(int)arg5;
+ (BOOL)isVCodecCapabilityCanSupport:(long long)arg1 width:(int)arg2 height:(int)arg3 profile:(int)arg4 level:(int)arg5 framerate:(int)arg6;
+ (BOOL)addVCodecBlacklist:(long long)arg1 codecId:(long long)arg2 blackPropertyRange:(id)arg3;
+ (id)getVCodecDecoderMaxCapability:(long long)arg1 codecId:(long long)arg2;
+ (id)getVCodecMaxCapability:(long long)arg1;
+ (BOOL)isDolbyVisionSupported;
+ (BOOL)isDDSupported;
+ (BOOL)isDDPlusSupported;
+ (BOOL)isDolbyDSSupported;
+ (BOOL)isHDR10Supported;
+ (BOOL)isHighFrameRateHDR10SupportedWithFps:(int)arg1;
+ (BOOL)isHDRsupport:(long long)arg1 profile:(int)arg2 level:(int)arg3;
+ (BOOL)isACodecCapabilitySupport:(long long)arg1 codecid:(long long)arg2 profile:(int)arg3 level:(int)arg4;
+ (BOOL)isPictureInPictureSupported;
+ (BOOL)supportMetal;
+ (double)maxPlaySpeed;
+ (long long)nativeDrmTypeToTPDrmType:(int)arg1;
+ (id)getDRMCapabilities;
+ (BOOL)isFairPlaySupport;
+ (BOOL)isDRMSupport:(long long)arg1;
@end

