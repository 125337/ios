@interface V2TXLivePlayerJSConfig : NSObject
{
    BOOL _isDebug; // +0x8
    BOOL _autoPlay; // +0x9
    BOOL _muteAudio; // +0xa
    BOOL _muteVideo; // +0xb
    BOOL _enableMessage; // +0xc
    BOOL _needVolumeNotify; // +0xd
    BOOL _enableIpv6First; // +0xe
    float _minCache; // +0x10
    float _maxCache; // +0x14
    NSString * _playUrl; // +0x18
    long long _playType; // +0x20
    long long _playMode; // +0x28
    long long _renderRotation; // +0x30
    long long _renderMode; // +0x38
}
- (id)init;
- (BOOL)isRTC;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)getDiffLog:(id)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (BOOL)isDebug;
- (void)setIsDebug:(BOOL)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (long long)playType;
- (void)setPlayType:(long long)arg1;
- (long long)playMode;
- (void)setPlayMode:(long long)arg1;
- (BOOL)muteAudio;
- (void)setMuteAudio:(BOOL)arg1;
- (BOOL)muteVideo;
- (void)setMuteVideo:(BOOL)arg1;
- (long long)renderRotation;
- (void)setRenderRotation:(long long)arg1;
- (long long)renderMode;
- (void)setRenderMode:(long long)arg1;
- (float)minCache;
- (void)setMinCache:(float)arg1;
- (float)maxCache;
- (void)setMaxCache:(float)arg1;
- (BOOL)enableMessage;
- (void)setEnableMessage:(BOOL)arg1;
- (BOOL)needVolumeNotify;
- (void)setNeedVolumeNotify:(BOOL)arg1;
- (BOOL)enableIpv6First;
- (void)setEnableIpv6First:(BOOL)arg1;
- (void).cxx_destruct;
@end
