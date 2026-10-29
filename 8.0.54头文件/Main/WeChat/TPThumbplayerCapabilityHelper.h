@interface TPThumbplayerCapabilityHelper : NSObject
+ (BOOL)isVCodecCapabilitySupport:(int)arg1 codecid:(int)arg2 width:(int)arg3 height:(int)arg4 profile:(int)arg5 level:(int)arg6;
+ (BOOL)isVCodecCapabilitySupport:(int)arg1 codecid:(int)arg2 width:(int)arg3 height:(int)arg4 profile:(int)arg5 level:(int)arg6 framerate:(int)arg7;
+ (BOOL)isVCodecCapabilityCanSupport:(int)arg1 width:(int)arg2 height:(int)arg3 profile:(int)arg4 level:(int)arg5;
+ (BOOL)isVCodecCapabilityCanSupport:(int)arg1 width:(int)arg2 height:(int)arg3 profile:(int)arg4 level:(int)arg5 framerate:(int)arg6;
+ (BOOL)addVCodecBlacklist:(int)arg1 codecid:(int)arg2 blackPropertyRange:(TPVCodecPropertyRange)arg3;
+ (BOOL)addVCodecWhitelist:(int)arg1 codecid:(int)arg2 whitePropertyRange:(TPVCodecPropertyRange)arg3;
+ (map<TPCodecID, TPVCodecMaxCapability, std::less<TPCodecID>, std::allocator<std::pair<const TPCodecID, TPVCodecMaxCapability>>>)getVCodecDecoderMaxCapabilityMap:(int)arg1;
+ (TPVCodecMaxCapability)getVCodecMaxCapability:(int)arg1;
+ (BOOL)isDDSupported;
+ (BOOL)isDDPlusSupported;
+ (BOOL)isDolbyDSSupported;
+ (vector<tpdrm::DrmSchemeType, std::allocator<tpdrm::DrmSchemeType>>)getDRMCapabilities;
+ (BOOL)isDRMsupport:(int)arg1;
+ (BOOL)isHDRVividSupported;
+ (BOOL)isDolbyVisionSupported;
+ (BOOL)isHDR10Supported;
+ (BOOL)isACodecCapabilitySupport:(int)arg1 codecid:(int)arg2 profile:(int)arg3 level:(int)arg4;
+ (BOOL)isACodecCapabilitySupport:(int)arg1 codecid:(int)arg2 samplerate:(int)arg3 channels:(int)arg4 bitrate:(int)arg5 profile:(int)arg6 level:(int)arg7;
+ (BOOL)addACodecBlacklist:(int)arg1 codecid:(int)arg2 blackProperty:(TPACodecPropertyRange)arg3;
+ (BOOL)addACodecWhitelist:(int)arg1 codecid:(int)arg2 whiteProperty:(TPACodecPropertyRange)arg3;
@end

