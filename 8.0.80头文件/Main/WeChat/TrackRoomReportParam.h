@interface TrackRoomReportParam : NSObject
{
    BOOL _isInitiator; // +0x8
    BOOL _isRoomCreate; // +0x9
    BOOL _isRoomDestroy; // +0xa
    unsigned int _inVoipProgress; // +0xc
    long long _type; // +0x10
    long long _code; // +0x18
    NSString * _roomId; // +0x20
    long long _roomType; // +0x28
    NSString * _uniqueRoomId; // +0x30
    long long _stayDuration; // +0x38
    long long _roomDuration; // +0x40
    long long _onlineUserCount; // +0x48
    long long _minDistance; // +0x50
    NSString * _voipRoomId; // +0x58
    NSString * _chatUsername; // +0x60
    long long _logVersion; // +0x68
    long long _voipDuration; // +0x70
}
- (id)init;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)code;
- (void)setCode:(long long)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (BOOL)isInitiator;
- (void)setIsInitiator:(BOOL)arg1;
- (long long)roomType;
- (void)setRoomType:(long long)arg1;
- (id)uniqueRoomId;
- (void)setUniqueRoomId:(id)arg1;
- (long long)stayDuration;
- (void)setStayDuration:(long long)arg1;
- (long long)roomDuration;
- (void)setRoomDuration:(long long)arg1;
- (long long)onlineUserCount;
- (void)setOnlineUserCount:(long long)arg1;
- (BOOL)isRoomCreate;
- (void)setIsRoomCreate:(BOOL)arg1;
- (BOOL)isRoomDestroy;
- (void)setIsRoomDestroy:(BOOL)arg1;
- (long long)minDistance;
- (void)setMinDistance:(long long)arg1;
- (unsigned int)inVoipProgress;
- (void)setInVoipProgress:(unsigned int)arg1;
- (id)voipRoomId;
- (void)setVoipRoomId:(id)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (long long)logVersion;
- (void)setLogVersion:(long long)arg1;
- (long long)voipDuration;
- (void)setVoipDuration:(long long)arg1;
- (void).cxx_destruct;
@end
