@interface WCFinderExposeFeedInfo : NSObject <WCTColumnCoding, PBCoding>
{
    NSString * _tid; // +0x8
    unsigned long long _exposeTime; // +0x10
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_exposeTime;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)exposeTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_exposeTime;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (void)__wcdb_index_3:(void *)arg1;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)exposeTime;
- (void)setExposeTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
