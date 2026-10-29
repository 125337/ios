@interface _TtC6WeChat18VoIPMessageHistory : NSObject <WCTTableCoding>
{
    long long svrid; // +0x8
    unsigned int localid; // +0x10
    unsigned long long roomid; // +0x18
    unsigned long long roomkey; // +0x20
    unsigned int inviteid; // +0x28
    unsigned long long inviteid64; // +0x30
    unsigned int callerMemberid; // +0x38
    unsigned int calleeMemberid; // +0x3c
    void * chatName; // +0x40
    unsigned long long timestamp; // +0x50
    void * msg; // +0x58
    unsigned int duration; // +0x68
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)svrid;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_svrid;
+ (const void *)localid;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_localid;
+ (const void *)roomid;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_roomid;
+ (const void *)roomkey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_roomkey;
+ (const void *)inviteid;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_inviteid;
+ (const void *)inviteid64;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_inviteid64;
+ (const void *)callerMemberid;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_callerMemberid;
+ (const void *)calleeMemberid;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_calleeMemberid;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_chatName;
+ (const void *)timestamp;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_timestamp;
+ (const void *)msg;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_msg;
+ (const void *)duration;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_duration;
+ (void)__wcdb_table_constraint_13:(void *)arg1;
+ (void)__wcdb_table_constraint_14:(void *)arg1;
+ (void)__wcdb_table_constraint_15:(void *)arg1;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (void)__wcdb_table_constraint_17:(void *)arg1;
+ (void)__wcdb_table_constraint_18:(void *)arg1;
+ (void)__wcdb_index_19:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_24:(void *)arg1;
- (Expression)identical;
- (long long)svrid;
- (void)setSvrid:(long long)arg1;
- (unsigned int)localid;
- (void)setLocalid:(unsigned int)arg1;
- (unsigned long long)roomid;
- (void)setRoomid:(unsigned long long)arg1;
- (unsigned long long)roomkey;
- (void)setRoomkey:(unsigned long long)arg1;
- (unsigned int)inviteid;
- (void)setInviteid:(unsigned int)arg1;
- (unsigned long long)inviteid64;
- (void)setInviteid64:(unsigned long long)arg1;
- (unsigned int)callerMemberid;
- (void)setCallerMemberid:(unsigned int)arg1;
- (unsigned int)calleeMemberid;
- (void)setCalleeMemberid:(unsigned int)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
