@interface DBHello : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _version; // +0xc
    unsigned int _msgLocalId; // +0x10
    unsigned int _createTime; // +0x14
    unsigned int _status; // +0x18
    unsigned int _imageStatus; // +0x1c
    unsigned int _type; // +0x20
    unsigned int _des; // +0x24
    unsigned int _opCode; // +0x28
    unsigned int _sayHelloStatus; // +0x2c
    unsigned int _ConIntRes2; // +0x30
    unsigned int _ConIntRes3; // +0x34
    long long lastInsertedRowID; // +0x38
    long long _msgServerId; // +0x40
    NSString * _message; // +0x48
    NSString * _userName; // +0x50
    NSString * _ConStrRes1; // +0x58
    NSString * _ConStrRes2; // +0x60
    NSString * _ConStrRes3; // +0x68
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_116:(void *)arg1;
+ (id)swift_version;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_117:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)msgServerId;
+ (const void *)__wcdb_synthesize_118:(void *)arg1;
+ (id)swift_msgServerId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_119:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)message;
+ (const void *)__wcdb_synthesize_120:(void *)arg1;
+ (id)swift_message;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_121:(void *)arg1;
+ (id)swift_status;
+ (const void *)imageStatus;
+ (const void *)__wcdb_synthesize_122:(void *)arg1;
+ (id)swift_imageStatus;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_123:(void *)arg1;
+ (id)swift_type;
+ (const void *)des;
+ (const void *)__wcdb_synthesize_124:(void *)arg1;
+ (id)swift_des;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_125:(void *)arg1;
+ (id)swift_userName;
+ (const void *)opCode;
+ (const void *)__wcdb_synthesize_126:(void *)arg1;
+ (id)swift_opCode;
+ (const void *)sayHelloStatus;
+ (const void *)__wcdb_synthesize_127:(void *)arg1;
+ (id)swift_sayHelloStatus;
+ (const void *)ConIntRes2;
+ (const void *)__wcdb_synthesize_128:(void *)arg1;
+ (id)swift_ConIntRes2;
+ (const void *)ConIntRes3;
+ (const void *)__wcdb_synthesize_129:(void *)arg1;
+ (id)swift_ConIntRes3;
+ (const void *)ConStrRes1;
+ (const void *)__wcdb_synthesize_130:(void *)arg1;
+ (id)swift_ConStrRes1;
+ (const void *)ConStrRes2;
+ (const void *)__wcdb_synthesize_131:(void *)arg1;
+ (id)swift_ConStrRes2;
+ (const void *)ConStrRes3;
+ (const void *)__wcdb_synthesize_132:(void *)arg1;
+ (id)swift_ConStrRes3;
+ (void)__wcdb_column_constraint_133:(void *)arg1;
+ (void)__wcdb_index_134:(void *)arg1;
+ (void)__wcdb_index_135:(void *)arg1;
+ (void)__wcdb_index_136:(void *)arg1;
+ (void)__wcdb_column_constraint_137:(void *)arg1;
+ (void)__wcdb_column_constraint_138:(void *)arg1;
+ (void)__wcdb_column_constraint_139:(void *)arg1;
+ (void)__wcdb_column_constraint_140:(void *)arg1;
+ (void)__wcdb_column_constraint_141:(void *)arg1;
+ (void)__wcdb_column_constraint_142:(void *)arg1;
+ (void)__wcdb_column_constraint_143:(void *)arg1;
+ (void)__wcdb_column_constraint_144:(void *)arg1;
+ (void)__wcdb_column_constraint_145:(void *)arg1;
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
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)opCode;
- (void)setOpCode:(unsigned int)arg1;
- (unsigned int)sayHelloStatus;
- (void)setSayHelloStatus:(unsigned int)arg1;
- (unsigned int)ConIntRes2;
- (void)setConIntRes2:(unsigned int)arg1;
- (unsigned int)ConIntRes3;
- (void)setConIntRes3:(unsigned int)arg1;
- (id)ConStrRes1;
- (void)setConStrRes1:(id)arg1;
- (id)ConStrRes2;
- (void)setConStrRes2:(id)arg1;
- (id)ConStrRes3;
- (void)setConStrRes3:(id)arg1;
- (void).cxx_destruct;
@end
