@interface MMLivePushMediaConfig : NSObject <NSCopying>
{
    BOOL _isVideoEnabled; // +0x8
    BOOL _isVideoMuted; // +0x9
    BOOL _isAudioEnabled; // +0xa
    BOOL _isAudioMuted; // +0xb
    BOOL _isFrontCamera; // +0xc
    MMLiveVideoEncParam * _videoEncParam; // +0x10
    long long _captureVolume; // +0x18
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isVideoEnabled;
- (void)setIsVideoEnabled:(BOOL)arg1;
- (BOOL)isVideoMuted;
- (void)setIsVideoMuted:(BOOL)arg1;
- (BOOL)isAudioEnabled;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (BOOL)isAudioMuted;
- (void)setIsAudioMuted:(BOOL)arg1;
- (id)videoEncParam;
- (void)setVideoEncParam:(id)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (long long)captureVolume;
- (void)setCaptureVolume:(long long)arg1;
- (void).cxx_destruct;
@end
