@interface WCScheduleItem : MMObject <PBCoding, NSCoding, WCTTableCoding>
{
    unsigned int _messageType; // +0x8
    unsigned int _messageInnerType; // +0xc
    unsigned int _favId; // +0x10
    unsigned int _favLocalId; // +0x14
    int _opType; // +0x18
    unsigned int _remindTime; // +0x1c
    NSString * _remindId; // +0x20
    NSString * _username; // +0x28
    long long _mesSvrID; // +0x30
    NSString * _content; // +0x38
    NSDate * _date; // +0x40
    unsigned long long _type; // +0x48
    unsigned long long _createTime; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)mesSvrID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_mesSvrID;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_content;
+ (const void *)date;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_date;
+ (const void *)favId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_favId;
+ (const void *)favLocalId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_favLocalId;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_type;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)remindTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_remindTime;
+ (const void *)remindId;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_remindId;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_mesSvrID;
+ (void)PBArrayAdd_date;
+ (void)PBArrayAdd_favId;
+ (void)PBArrayAdd_favLocalId;
+ (void)PBArrayAdd_type;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (BOOL)isEqualTo:(id)arg1;
- (id)remindId;
- (void)setRemindId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)mesSvrID;
- (void)setMesSvrID:(long long)arg1;
- (unsigned int)messageType;
- (void)setMessageType:(unsigned int)arg1;
- (unsigned int)messageInnerType;
- (void)setMessageInnerType:(unsigned int)arg1;
- (unsigned int)favId;
- (void)setFavId:(unsigned int)arg1;
- (unsigned int)favLocalId;
- (void)setFavLocalId:(unsigned int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned int)remindTime;
- (void)setRemindTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

