@interface MMFinderLiveWatchStatusModel : NSObject <WCTTableCoding>
{
    unsigned long long _liveId; // +0x8
    unsigned long long _readAdTimestamp; // +0x10
    NSString * _adId; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)readAdTimestamp;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_readAdTimestamp;
+ (const void *)adId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_adId;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)readAdTimestamp;
- (void)setReadAdTimestamp:(unsigned long long)arg1;
- (id)adId;
- (void)setAdId:(id)arg1;
- (void).cxx_destruct;
@end

