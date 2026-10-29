@interface TRTCVideoEncParam : NSObject
{
    BOOL _enableAdjustRes; // +0x8
    int _videoFps; // +0xc
    int _videoBitrate; // +0x10
    int _minVideoBitrate; // +0x14
    int _rcMethod; // +0x18
    long long _videoResolution; // +0x20
    long long _resMode; // +0x28
    NSNumber * _gop; // +0x30
    NSNumber * _minQP; // +0x38
    NSNumber * _maxQP; // +0x40
    NSNumber * _codecType; // +0x48
}
- (EncodeParams)convertToCppParams;
- (CGSize)resolution;
- (id)init;
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
- (int)rcMethod;
- (void)setRcMethod:(int)arg1;
- (id)gop;
- (void)setGop:(id)arg1;
- (id)minQP;
- (void)setMinQP:(id)arg1;
- (id)maxQP;
- (void)setMaxQP:(id)arg1;
- (id)codecType;
- (void)setCodecType:(id)arg1;
- (void).cxx_destruct;
@end
