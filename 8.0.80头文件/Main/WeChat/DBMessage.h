@interface DBMessage : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _version; // +0xc
    unsigned int _msgLocalId; // +0x10
    unsigned int _createTime; // +0x14
    unsigned int _status; // +0x18
    unsigned int _imageStatus; // +0x1c
    unsigned int _type; // +0x20
    unsigned int _des; // +0x24
    long long lastInsertedRowID; // +0x28
    long long _msgServerId; // +0x30
    NSString * _message; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_49:(void *)arg1;
+ (id)swift_version;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)msgServerId;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (id)swift_msgServerId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_52:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)message;
+ (const void *)__wcdb_synthesize_53:(void *)arg1;
+ (id)swift_message;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (id)swift_status;
+ (const void *)imageStatus;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (id)swift_imageStatus;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (id)swift_type;
+ (const void *)des;
+ (const void *)__wcdb_synthesize_57:(void *)arg1;
+ (id)swift_des;
+ (void)__wcdb_column_constraint_58:(void *)arg1;
+ (void)__wcdb_index_59:(void *)arg1;
+ (void)__wcdb_index_60:(void *)arg1;
+ (void)__wcdb_index_61:(void *)arg1;
+ (void)__wcdb_index_62:(void *)arg1;
+ (void)__wcdb_index_63:(void *)arg1;
+ (void)__wcdb_index_64:(void *)arg1;
+ (void)__wcdb_index_65:(void *)arg1;
+ (void)__wcdb_index_66:(void *)arg1;
+ (void)__wcdb_column_constraint_67:(void *)arg1;
+ (void)__wcdb_column_constraint_68:(void *)arg1;
+ (void)__wcdb_column_constraint_69:(void *)arg1;
+ (void)__wcdb_column_constraint_70:(void *)arg1;
+ (void)__wcdb_column_constraint_71:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (long long)msgServerId;
- (void)setMsgServerId:(long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)imageStatus;
- (void)setImageStatus:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)des;
- (void)setDes:(unsigned int)arg1;
- (void).cxx_destruct;
@end
