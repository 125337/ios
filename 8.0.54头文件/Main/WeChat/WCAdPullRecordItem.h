@interface WCAdPullRecordItem : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _localId; // +0xc
    unsigned int _storeTime; // +0x10
    unsigned int _isAsync; // +0x14
    unsigned int _invalid; // +0x18
    long long lastInsertedRowID; // +0x20
    NSString * _traceId; // +0x28
    NSString * _aid; // +0x30
    NSString * _snsId; // +0x38
    NSString * _sessionKey; // +0x40
    NSString * _ext; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localId;
+ (const void *)traceId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_traceId;
+ (const void *)aid;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_aid;
+ (const void *)snsId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_snsId;
+ (const void *)storeTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_storeTime;
+ (const void *)isAsync;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_isAsync;
+ (const void *)invalid;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_invalid;
+ (const void *)sessionKey;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_sessionKey;
+ (const void *)ext;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_ext;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelPropertyWhitelistForConfigTag:(id)arg1;
- (id)description;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (unsigned int)storeTime;
- (void)setStoreTime:(unsigned int)arg1;
- (unsigned int)isAsync;
- (void)setIsAsync:(unsigned int)arg1;
- (unsigned int)invalid;
- (void)setInvalid:(unsigned int)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (id)ext;
- (void)setExt:(id)arg1;
- (void).cxx_destruct;
@end

