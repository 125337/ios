@interface EcsKfProductCardCacheItem : NSObject <WCTTableCoding>
{
    long long _msgSvrId; // +0x8
    NSString * _talker; // +0x10
    NSString * _cachedXml; // +0x18
    long long _updateTimeMs; // +0x20
    long long _msgCreateTime; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgSvrId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_msgSvrId;
+ (const void *)talker;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_talker;
+ (const void *)cachedXml;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_cachedXml;
+ (const void *)updateTimeMs;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_updateTimeMs;
+ (const void *)msgCreateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_msgCreateTime;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
- (id)init;
- (long long)msgSvrId;
- (void)setMsgSvrId:(long long)arg1;
- (id)talker;
- (void)setTalker:(id)arg1;
- (id)cachedXml;
- (void)setCachedXml:(id)arg1;
- (long long)updateTimeMs;
- (void)setUpdateTimeMs:(long long)arg1;
- (long long)msgCreateTime;
- (void)setMsgCreateTime:(long long)arg1;
- (void).cxx_destruct;
@end
