@interface WCFinderMPInterestData : NSObject <PBCoding, WCTColumnCoding>
{
    NSString * _mpSessionId; // +0x8
    NSString * _finderSessionId; // +0x10
    WCFinderDataItemMutableArray * _dataItemArray; // +0x18
    unsigned long long _cacheTime; // +0x20
    unsigned long long _expiredTime; // +0x28
}
+ (void)PBArrayAdd_mpSessionId;
+ (void)PBArrayAdd_finderSessionId;
+ (void)PBArrayAdd_dataItemArray;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_expiredTime;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)mpSessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_mpSessionId;
+ (const void *)finderSessionId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_finderSessionId;
+ (const void *)dataItemArray;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_dataItemArray;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_expiredTime;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
- (id)getPBPropertyTable;
- (id)firstDataItemTid;
- (id)topicWording;
- (id)description;
- (id)mpSessionId;
- (void)setMpSessionId:(id)arg1;
- (id)finderSessionId;
- (void)setFinderSessionId:(id)arg1;
- (id)dataItemArray;
- (void)setDataItemArray:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

