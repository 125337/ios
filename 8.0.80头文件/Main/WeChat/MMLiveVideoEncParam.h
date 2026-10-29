@interface MMLiveVideoEncParam : NSObject
{
    BOOL _enableAdjustRes; // +0x8
    int _videoFps; // +0xc
    int _videoBitrate; // +0x10
    int _minVideoBitrate; // +0x14
    long long _videoResolution; // +0x18
    long long _resMode; // +0x20
}
+ (long long)videoResolutionFromTRTCType:(long long)arg1;
+ (long long)videoResolutionModeFromTRTCType:(long long)arg1;
+ (long long)videoResolutionToTRTCType:(long long)arg1;
+ (long long)videoResolutionModeToTRTCType:(long long)arg1;
- (id)genTRTCVideoEncParam;
- (id)description;
- (long long)videoResolution;
- (void)setVideoResolution:(long long)arg1;
- (long long)resMode;
- (void)setResMode:(long long)arg1;
- (int)videoFps;
- (void)setVideoFps:(int)arg1;
- (int)videoBitrate;
- (void)setVideoBitrate:(int)arg1;
- (int)minVideoBitrate;
- (void)setMinVideoBitrate:(int)arg1;
- (BOOL)enableAdjustRes;
- (void)setEnableAdjustRes:(BOOL)arg1;
@end
