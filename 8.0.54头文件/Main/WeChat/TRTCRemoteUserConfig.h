@interface TRTCRemoteUserConfig : NSObject
{
    BOOL _isVideoEnabled; // +0x8
    BOOL _isAudioEnabled; // +0x9
    BOOL _isVideoMuted; // +0xa
    BOOL _isAudioMuted; // +0xb
    NSString * _roomId; // +0x10
    long long _fillMode; // +0x18
    long long _rotation; // +0x20
    long long _volume; // +0x28
}
- (id)initWithRoomId:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (BOOL)isVideoEnabled;
- (void)setIsVideoEnabled:(BOOL)arg1;
- (BOOL)isAudioEnabled;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (BOOL)isVideoMuted;
- (void)setIsVideoMuted:(BOOL)arg1;
- (BOOL)isAudioMuted;
- (void)setIsAudioMuted:(BOOL)arg1;
- (long long)fillMode;
- (void)setFillMode:(long long)arg1;
- (long long)rotation;
- (void)setRotation:(long long)arg1;
- (long long)volume;
- (void)setVolume:(long long)arg1;
- (void).cxx_destruct;
@end

