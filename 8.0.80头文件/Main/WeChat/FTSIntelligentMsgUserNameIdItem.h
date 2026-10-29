@interface FTSIntelligentMsgUserNameIdItem : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int userNameId; // +0xc
    unsigned int validFlag; // +0x10
    unsigned int preCursorMesId; // +0x14
    unsigned int nextCursorMesId; // +0x18
    NSString * userName; // +0x20
    long long lastInsertedRowID; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_114:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)validFlag;
+ (const void *)__wcdb_synthesize_115:(void *)arg1;
+ (id)swift_validFlag;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_116:(void *)arg1;
+ (id)swift_userName;
+ (const void *)preCursorMesId;
+ (const void *)__wcdb_synthesize_117:(void *)arg1;
+ (id)swift_preCursorMesId;
+ (const void *)nextCursorMesId;
+ (const void *)__wcdb_synthesize_118:(void *)arg1;
+ (id)swift_nextCursorMesId;
+ (void)__wcdb_column_constraint_119:(void *)arg1;
+ (void)__wcdb_column_constraint_120:(void *)arg1;
+ (void)__wcdb_column_constraint_121:(void *)arg1;
+ (void)__wcdb_column_constraint_122:(void *)arg1;
- (id)init;
- (id)description;
- (unsigned int)userNameId;
- (void)setUserNameId:(unsigned int)arg1;
- (unsigned int)validFlag;
- (void)setValidFlag:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)preCursorMesId;
- (void)setPreCursorMesId:(unsigned int)arg1;
- (unsigned int)nextCursorMesId;
- (void)setNextCursorMesId:(unsigned int)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (void).cxx_destruct;
@end
