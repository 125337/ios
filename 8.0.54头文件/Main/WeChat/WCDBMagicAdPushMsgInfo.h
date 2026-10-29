@interface WCDBMagicAdPushMsgInfo : NSObject
{
    unsigned char _opcode; // +0x8
    NSString * _msgId; // +0x10
    unsigned long long _timestamp; // +0x18
    unsigned long long _message_aid; // +0x20
    unsigned long long _message_slotid; // +0x28
    unsigned long long _message_op_time; // +0x30
    NSString * _message_traceid; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_msgId;
+ (const void *)timestamp;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_timestamp;
+ (const void *)opcode;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_opcode;
+ (const void *)message_aid;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_message_aid;
+ (const void *)message_slotid;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_message_slotid;
+ (const void *)message_op_time;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_message_op_time;
+ (const void *)message_traceid;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_message_traceid;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
- (id)description;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned char)opcode;
- (void)setOpcode:(unsigned char)arg1;
- (unsigned long long)message_aid;
- (void)setMessage_aid:(unsigned long long)arg1;
- (unsigned long long)message_slotid;
- (void)setMessage_slotid:(unsigned long long)arg1;
- (unsigned long long)message_op_time;
- (void)setMessage_op_time:(unsigned long long)arg1;
- (id)message_traceid;
- (void)setMessage_traceid:(id)arg1;
- (void).cxx_destruct;
@end

