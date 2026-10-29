@interface VoIPBubbleMsg : NSObject
{
    BOOL _red_dot; // +0x8
    unsigned int _room_type; // +0xc
    unsigned int _inviteid; // +0x10
    unsigned int _msg_type; // +0x14
    unsigned int _duration; // +0x18
    unsigned int _business; // +0x1c
    int _caller_memberid; // +0x20
    int _callee_memberid; // +0x24
    unsigned int _missed_call; // +0x28
    unsigned int _force_update; // +0x2c
    NSString * _msg; // +0x30
    unsigned long long _roomid; // +0x38
    unsigned long long _roomkey; // +0x40
    unsigned long long _timestamp; // +0x48
    NSString * _identity; // +0x50
    unsigned long long _inviteid64; // +0x58
}
- (BOOL)isVideo;
- (id)xmlInRootNode:(id)arg1;
- (id)xmlByWrappingVoIPMsg;
- (id)description;
- (id)msg;
- (void)setMsg:(id)arg1;
- (unsigned int)room_type;
- (void)setRoom_type:(unsigned int)arg1;
- (BOOL)red_dot;
- (void)setRed_dot:(BOOL)arg1;
- (unsigned long long)roomid;
- (void)setRoomid:(unsigned long long)arg1;
- (unsigned long long)roomkey;
- (void)setRoomkey:(unsigned long long)arg1;
- (unsigned int)inviteid;
- (void)setInviteid:(unsigned int)arg1;
- (unsigned int)msg_type;
- (void)setMsg_type:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)identity;
- (void)setIdentity:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (unsigned long long)inviteid64;
- (void)setInviteid64:(unsigned long long)arg1;
- (unsigned int)business;
- (void)setBusiness:(unsigned int)arg1;
- (int)caller_memberid;
- (void)setCaller_memberid:(int)arg1;
- (int)callee_memberid;
- (void)setCallee_memberid:(int)arg1;
- (unsigned int)missed_call;
- (void)setMissed_call:(unsigned int)arg1;
- (unsigned int)force_update;
- (void)setForce_update:(unsigned int)arg1;
- (void).cxx_destruct;
@end
