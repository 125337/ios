@interface VoIPInvitationInfo : NSObject
{
    BOOL _isFromIlink; // +0x8
    unsigned int _receiveTime; // +0xc
    unsigned long long _roomID; // +0x10
    long long _roomKey; // +0x18
    CContact * _contact; // +0x20
    MonoServiceMsg * _monoMsg; // +0x28
    VoIPMtInviteMsg * _inviteMsg; // +0x30
    ConfRecvInviteInfo * _inviteInfo; // +0x38
    unsigned long long _scene; // +0x40
    unsigned long long _roomType; // +0x48
}
+ (id)infoWithVoipMonoMsg:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithMonoMsg:(id)arg1 roomID:(unsigned long long)arg2 roomKey:(long long)arg3 roomType:(unsigned long long)arg4 contact:(id)arg5 isFromIlink:(BOOL)arg6 receiveTime:(unsigned int)arg7 inviteMsg:(id)arg8 inviteInfo:(id)arg9 scene:(unsigned long long)arg10;
- (id)newInfoWithRoomType:(unsigned long long)arg1;
- (BOOL)isEqualedWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2 fromUserName:(id)arg3;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (long long)roomKey;
- (void)setRoomKey:(long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isFromIlink;
- (void)setIsFromIlink:(BOOL)arg1;
- (unsigned int)receiveTime;
- (void)setReceiveTime:(unsigned int)arg1;
- (id)monoMsg;
- (void)setMonoMsg:(id)arg1;
- (id)inviteMsg;
- (void)setInviteMsg:(id)arg1;
- (id)inviteInfo;
- (void)setInviteInfo:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)roomType;
- (void)setRoomType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
