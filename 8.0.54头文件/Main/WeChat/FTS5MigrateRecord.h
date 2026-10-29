@interface FTS5MigrateRecord : NSObject <WCTTableCoding>
{
    unsigned int _curMigratingTableId; // +0x8
    long long _lastMigratedRowid; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)curMigratingTableId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_curMigratingTableId;
+ (const void *)lastMigratedRowid;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_lastMigratedRowid;
- (unsigned int)curMigratingTableId;
- (void)setCurMigratingTableId:(unsigned int)arg1;
- (long long)lastMigratedRowid;
- (void)setLastMigratedRowid:(long long)arg1;
@end

