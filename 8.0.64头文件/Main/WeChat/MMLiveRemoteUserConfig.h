@interface MMLiveRemoteUserConfig : NSObject <NSCopying>
{
    BOOL _isVideoEnabled; // +0x8
    BOOL _isAudioEnabled; // +0x9
    BOOL _isVideoMuted; // +0xa
    BOOL _isAudioMuted; // +0xb
    NSString * _sdkUserId; // +0x10
    NSString * _sdkRoomId; // +0x18
    long long _fillMode; // +0x20
    long long _rotation; // +0x28
    long long _volume; // +0x30
}
- (id)initWithUserId:(id)arg1 andRoomId:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)sdkRoomId;
- (void)setSdkRoomId:(id)arg1;
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
