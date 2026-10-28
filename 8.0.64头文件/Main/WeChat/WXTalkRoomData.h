@interface WXTalkRoomData : NSObject
{
    BOOL isSlience; // +0x8
    BOOL isNobodyTalking; // +0x9
    int roomId; // +0xc
    int roomMemberId; // +0x10
    unsigned int lastTryGetMicTime; // +0x14
    unsigned int countDown; // +0x18
    unsigned int lastHeartBeatTime; // +0x1c
    unsigned int lastSendInviteTime; // +0x20
    unsigned int inviteCountWithinOneMin; // +0x24
    unsigned int curGetMicEventID; // +0x28
    long long roomKey; // +0x30
    NSString * username; // +0x38
    NSMutableArray * memberList; // +0x40
    NSData * localCapInfo; // +0x48
    long long micId; // +0x50
    long long curHoldMicMemberId; // +0x58
    NSArray * unSpMemberList; // +0x60
    NSMutableArray * _addrList; // +0x68
}
- (id)init;
- (void)dealloc;
- (void)SetRoomId:(int)arg1;
- (void)SetRoomKey:(long long)arg1;
- (void)reset;
- (BOOL)isValidKey;
- (id)GetRoomContactList;
- (int)roomId;
- (void)setRoomId:(int)arg1;
- (long long)roomKey;
- (void)setRoomKey:(long long)arg1;
- (int)roomMemberId;
- (void)setRoomMemberId:(int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)memberList;
- (void)setMemberList:(id)arg1;
- (id)localCapInfo;
- (void)setLocalCapInfo:(id)arg1;
- (long long)micId;
- (void)setMicId:(long long)arg1;
- (long long)curHoldMicMemberId;
- (void)setCurHoldMicMemberId:(long long)arg1;
- (unsigned int)lastTryGetMicTime;
- (void)setLastTryGetMicTime:(unsigned int)arg1;
- (unsigned int)countDown;
- (void)setCountDown:(unsigned int)arg1;
- (unsigned int)lastHeartBeatTime;
- (void)setLastHeartBeatTime:(unsigned int)arg1;
- (BOOL)isSlience;
- (void)setIsSlience:(BOOL)arg1;
- (id)unSpMemberList;
- (void)setUnSpMemberList:(id)arg1;
- (BOOL)isNobodyTalking;
- (void)setIsNobodyTalking:(BOOL)arg1;
- (unsigned int)lastSendInviteTime;
- (void)setLastSendInviteTime:(unsigned int)arg1;
- (unsigned int)inviteCountWithinOneMin;
- (void)setInviteCountWithinOneMin:(unsigned int)arg1;
- (unsigned int)curGetMicEventID;
- (void)setCurGetMicEventID:(unsigned int)arg1;
- (id)addrList;
- (void)setAddrList:(id)arg1;
- (void).cxx_destruct;
@end
