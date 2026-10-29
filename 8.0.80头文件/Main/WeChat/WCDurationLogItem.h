@interface WCDurationLogItem : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int localId; // +0xc
    unsigned int activeStartTime; // +0x10
    unsigned int activeEndTime; // +0x14
    long long lastInsertedRowID; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localId;
+ (const void *)activeStartTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_activeStartTime;
+ (const void *)activeEndTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_activeEndTime;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)logItem;
+ (id)logItemFromDescription:(id)arg1;
+ (id)stringFromItems:(id)arg1;
- (void)reset;
- (id)description;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)activeStartTime;
- (void)setActiveStartTime:(unsigned int)arg1;
- (unsigned int)activeEndTime;
- (void)setActiveEndTime:(unsigned int)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
@end
