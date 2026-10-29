@interface WCFinderLocalBackupFeedInfo : NSObject <WCTTableCoding>
{
    int _commentScene; // +0x8
    int _feedSource; // +0xc
    unsigned long long _cachePoolType; // +0x10
    unsigned long long _localId; // +0x18
    NSString * _tid; // +0x20
    unsigned long long _expiredTime; // +0x28
    unsigned long long _funcFlag; // +0x30
    unsigned long long _cacheTimestamp; // +0x38
    NSData * _cachedObjectData; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)cachePoolType;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_cachePoolType;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_localId;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_tid;
+ (const void *)commentScene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_commentScene;
+ (const void *)feedSource;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_feedSource;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_expiredTime;
+ (const void *)funcFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_funcFlag;
+ (const void *)cacheTimestamp;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_cacheTimestamp;
+ (const void *)cachedObjectData;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_cachedObjectData;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (void)__wcdb_table_constraint_13:(void *)arg1;
+ (void)__wcdb_table_constraint_14:(void *)arg1;
+ (void)__wcdb_index_15:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_index_17:(void *)arg1;
+ (void)__wcdb_index_18:(void *)arg1;
+ (void)__wcdb_index_19:(void *)arg1;
- (id)description;
- (unsigned long long)cachePoolType;
- (void)setCachePoolType:(unsigned long long)arg1;
- (unsigned long long)localId;
- (void)setLocalId:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (int)feedSource;
- (void)setFeedSource:(int)arg1;
- (unsigned long long)funcFlag;
- (void)setFuncFlag:(unsigned long long)arg1;
- (unsigned long long)cacheTimestamp;
- (void)setCacheTimestamp:(unsigned long long)arg1;
- (id)cachedObjectData;
- (void)setCachedObjectData:(id)arg1;
- (void).cxx_destruct;
@end
