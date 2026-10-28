@interface TRTCVideoConfig : NSObject
{
    BOOL _isEnabled; // +0x8
    BOOL _isMuted; // +0x9
    BOOL _isFrontCamera; // +0xa
    BOOL _isTorchOn; // +0xb
    BOOL _isAutoFocusOn; // +0xc
    BOOL _isRemoteMirrorEnabled; // +0xd
    BOOL _isMixingInCloud; // +0xe
    BOOL _isSmallVideoEnabled; // +0xf
    BOOL _prefersLowQuality; // +0x10
    BOOL _isGSensorEnabled; // +0x11
    TRTCVideoEncParam * _videoEncConfig; // +0x18
    TRTCVideoEncParam * _smallVideoEncConfig; // +0x20
    TRTCNetworkQosParam * _qosConfig; // +0x28
    unsigned long long _localMirrorType; // +0x30
    long long _fillMode; // +0x38
    AVAsset * _videoAsset; // +0x40
    long long _fpsIndex; // +0x48
    long long _scene; // +0x50
}
+ (id)resolutionNames;
+ (id)fpsList;
+ (id)localMirrorTypeNames;
- (id)initWithScene:(long long)arg1;
- (long long)qosPreferenceIndex;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (id)videoEncConfig;
- (void)setVideoEncConfig:(id)arg1;
- (id)smallVideoEncConfig;
- (void)setSmallVideoEncConfig:(id)arg1;
- (id)qosConfig;
- (void)setQosConfig:(id)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (BOOL)isTorchOn;
- (void)setIsTorchOn:(BOOL)arg1;
- (BOOL)isAutoFocusOn;
- (void)setIsAutoFocusOn:(BOOL)arg1;
- (BOOL)isRemoteMirrorEnabled;
- (void)setIsRemoteMirrorEnabled:(BOOL)arg1;
- (unsigned long long)localMirrorType;
- (void)setLocalMirrorType:(unsigned long long)arg1;
- (long long)fillMode;
- (void)setFillMode:(long long)arg1;
- (BOOL)isMixingInCloud;
- (void)setIsMixingInCloud:(BOOL)arg1;
- (BOOL)isSmallVideoEnabled;
- (void)setIsSmallVideoEnabled:(BOOL)arg1;
- (BOOL)prefersLowQuality;
- (void)setPrefersLowQuality:(BOOL)arg1;
- (BOOL)isGSensorEnabled;
- (void)setIsGSensorEnabled:(BOOL)arg1;
- (id)videoAsset;
- (void)setVideoAsset:(id)arg1;
- (long long)fpsIndex;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void).cxx_destruct;
@end
