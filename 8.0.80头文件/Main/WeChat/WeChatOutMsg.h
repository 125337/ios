@interface WeChatOutMsg : MMObject <WCTTableCoding, NSCopying>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int localID; // +0xc
    unsigned int createTime; // +0x10
    unsigned int readStatus; // +0x14
    unsigned int wcoMsgType; // +0x18
    unsigned int pushTime; // +0x1c
    int reserve1; // +0x20
    unsigned int reserve2; // +0x24
    unsigned long long svrID; // +0x28
    NSString * title; // +0x30
    NSString * content; // +0x38
    NSString * reserve3; // +0x40
    NSString * reserve4; // +0x48
    long long lastInsertedRowID; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localID;
+ (const void *)svrID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_svrID;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)readStatus;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_readStatus;
+ (const void *)wcoMsgType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_wcoMsgType;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_title;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_content;
+ (const void *)pushTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_pushTime;
+ (const void *)reserve1;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_reserve1;
+ (const void *)reserve2;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_reserve2;
+ (const void *)reserve3;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_reserve3;
+ (const void *)reserve4;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_reserve4;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)copy;
- (void)CopyValueToCopy:(id)arg1;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (unsigned long long)svrID;
- (void)setSvrID:(unsigned long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)readStatus;
- (void)setReadStatus:(unsigned int)arg1;
- (unsigned int)wcoMsgType;
- (void)setWcoMsgType:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)pushTime;
- (void)setPushTime:(unsigned int)arg1;
- (int)reserve1;
- (void)setReserve1:(int)arg1;
- (unsigned int)reserve2;
- (void)setReserve2:(unsigned int)arg1;
- (id)reserve3;
- (void)setReserve3:(id)arg1;
- (id)reserve4;
- (void)setReserve4:(id)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (void).cxx_destruct;
@end
