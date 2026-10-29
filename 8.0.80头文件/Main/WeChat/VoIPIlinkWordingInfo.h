@interface VoIPIlinkWordingInfo : NSObject
{
    unsigned int _roomType; // +0x8
    unsigned int _selfRole; // +0xc
    unsigned int _wordingId; // +0x10
    unsigned int _talkTime; // +0x14
    int _callerMemberID; // +0x18
    int _calleeMemberID; // +0x1c
    unsigned long long _roomid; // +0x20
    unsigned long long _inviteId; // +0x28
    NSString * _remoteUsername; // +0x30
    unsigned long long _exceptionType; // +0x38
    unsigned long long _timestamp; // +0x40
}
- (id)description;
- (unsigned long long)roomid;
- (void)setRoomid:(unsigned long long)arg1;
- (unsigned long long)inviteId;
- (void)setInviteId:(unsigned long long)arg1;
- (unsigned int)roomType;
- (void)setRoomType:(unsigned int)arg1;
- (unsigned int)selfRole;
- (void)setSelfRole:(unsigned int)arg1;
- (unsigned int)wordingId;
- (void)setWordingId:(unsigned int)arg1;
- (unsigned int)talkTime;
- (void)setTalkTime:(unsigned int)arg1;
- (id)remoteUsername;
- (void)setRemoteUsername:(id)arg1;
- (int)callerMemberID;
- (void)setCallerMemberID:(int)arg1;
- (int)calleeMemberID;
- (void)setCalleeMemberID:(int)arg1;
- (unsigned long long)exceptionType;
- (void)setExceptionType:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
