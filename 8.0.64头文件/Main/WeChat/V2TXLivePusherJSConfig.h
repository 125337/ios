@interface V2TXLivePusherJSConfig : NSObject
{
    BOOL _isDebug; // +0x8
    BOOL _autoPush; // +0x9
    BOOL _touchFocus; // +0xa
    BOOL _enableZoom; // +0xb
    BOOL _frontCamera; // +0xc
    BOOL _enableAGC; // +0xd
    BOOL _enableNAS; // +0xe
    BOOL _enableAudioPreview; // +0xf
    BOOL _enableMirror; // +0x10
    BOOL _enableCamera; // +0x11
    BOOL _enableCustomEffect; // +0x12
    BOOL _enableMic; // +0x13
    BOOL _muteAudio; // +0x14
    BOOL _needVolumeNotify; // +0x15
    BOOL _enableVideoCustomRender; // +0x16
    float _beautyFilterDepth; // +0x18
    float _whiteningFilterDepth; // +0x1c
    NSString * _pushUrl; // +0x20
    long long _pushMode; // +0x28
    long long _minVideoBitrate; // +0x30
    long long _maxVideoBitrate; // +0x38
    long long _beautyStyle; // +0x40
    long long _homeOrientation; // +0x48
    long long _videoAspect; // +0x50
    long long _videoWidth; // +0x58
    long long _videoHeight; // +0x60
    long long _audioSamplerate; // +0x68
    long long _audioChannels; // +0x70
    long long _volumeType; // +0x78
    long long _audioReverbType; // +0x80
    long long _voiceChangerType; // +0x88
    long long _localVideoMirrorType; // +0x90
    unsigned long long _liveMode; // +0x98
    UIImage * _backgroundImage; // +0xa0
    long long _fps; // +0xa8
}
- (id)init;
- (BOOL)isRTC;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)getDiffLog:(id)arg1;
- (id)pushUrl;
- (void)setPushUrl:(id)arg1;
- (BOOL)isDebug;
- (void)setIsDebug:(BOOL)arg1;
- (BOOL)autoPush;
- (void)setAutoPush:(BOOL)arg1;
- (long long)pushMode;
- (void)setPushMode:(long long)arg1;
- (long long)minVideoBitrate;
- (void)setMinVideoBitrate:(long long)arg1;
- (long long)maxVideoBitrate;
- (void)setMaxVideoBitrate:(long long)arg1;
- (long long)beautyStyle;
- (void)setBeautyStyle:(long long)arg1;
- (float)beautyFilterDepth;
- (void)setBeautyFilterDepth:(float)arg1;
- (float)whiteningFilterDepth;
- (void)setWhiteningFilterDepth:(float)arg1;
- (long long)homeOrientation;
- (void)setHomeOrientation:(long long)arg1;
- (long long)videoAspect;
- (void)setVideoAspect:(long long)arg1;
- (long long)videoWidth;
- (void)setVideoWidth:(long long)arg1;
- (long long)videoHeight;
- (void)setVideoHeight:(long long)arg1;
- (BOOL)touchFocus;
- (void)setTouchFocus:(BOOL)arg1;
- (BOOL)enableZoom;
- (void)setEnableZoom:(BOOL)arg1;
- (BOOL)frontCamera;
- (void)setFrontCamera:(BOOL)arg1;
- (long long)audioSamplerate;
- (void)setAudioSamplerate:(long long)arg1;
- (long long)audioChannels;
- (void)setAudioChannels:(long long)arg1;
- (BOOL)enableAGC;
- (void)setEnableAGC:(BOOL)arg1;
- (BOOL)enableNAS;
- (void)setEnableNAS:(BOOL)arg1;
- (BOOL)enableAudioPreview;
- (void)setEnableAudioPreview:(BOOL)arg1;
- (long long)volumeType;
- (void)setVolumeType:(long long)arg1;
- (long long)audioReverbType;
- (void)setAudioReverbType:(long long)arg1;
- (long long)voiceChangerType;
- (void)setVoiceChangerType:(long long)arg1;
- (BOOL)enableMirror;
- (void)setEnableMirror:(BOOL)arg1;
- (long long)localVideoMirrorType;
- (void)setLocalVideoMirrorType:(long long)arg1;
- (BOOL)enableCamera;
- (void)setEnableCamera:(BOOL)arg1;
- (BOOL)enableCustomEffect;
- (void)setEnableCustomEffect:(BOOL)arg1;
- (BOOL)enableMic;
- (void)setEnableMic:(BOOL)arg1;
- (BOOL)muteAudio;
- (void)setMuteAudio:(BOOL)arg1;
- (BOOL)needVolumeNotify;
- (void)setNeedVolumeNotify:(BOOL)arg1;
- (unsigned long long)liveMode;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (BOOL)enableVideoCustomRender;
- (void)setEnableVideoCustomRender:(BOOL)arg1;
- (long long)fps;
- (void)setFps:(long long)arg1;
- (void).cxx_destruct;
@end
