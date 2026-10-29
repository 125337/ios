@interface WCCardOfflineCodeConfigData : MMObject <WCTTableCoding>
{
    BOOL needInsertShowTimestamp; // +0x8
    unsigned int lowerBound; // +0xc
    unsigned int expireTimeInterval; // +0x10
    unsigned int showExpireInterval; // +0x14
    unsigned int localUpdateTime; // +0x18
    NSString * cardId; // +0x20
    NSString * showTimestampEncryptKey; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)cardId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_cardId;
+ (const void *)lowerBound;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_lowerBound;
+ (const void *)expireTimeInterval;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_expireTimeInterval;
+ (const void *)showExpireInterval;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_showExpireInterval;
+ (const void *)localUpdateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_localUpdateTime;
+ (const void *)needInsertShowTimestamp;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_needInsertShowTimestamp;
+ (const void *)showTimestampEncryptKey;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_showTimestampEncryptKey;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (unsigned int)lowerBound;
- (void)setLowerBound:(unsigned int)arg1;
- (unsigned int)expireTimeInterval;
- (void)setExpireTimeInterval:(unsigned int)arg1;
- (unsigned int)showExpireInterval;
- (void)setShowExpireInterval:(unsigned int)arg1;
- (BOOL)needInsertShowTimestamp;
- (void)setNeedInsertShowTimestamp:(BOOL)arg1;
- (unsigned int)localUpdateTime;
- (void)setLocalUpdateTime:(unsigned int)arg1;
- (id)showTimestampEncryptKey;
- (void)setShowTimestampEncryptKey:(id)arg1;
- (void).cxx_destruct;
@end
