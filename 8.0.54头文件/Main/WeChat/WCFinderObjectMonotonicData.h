@interface WCFinderObjectMonotonicData : NSObject <WCTTableCoding>
{
    NSString * _tid; // +0x8
    FinderObjectMonotonicData * _monoData; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)monoData;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_monoData;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (id)monotonciDataWithDataItem:(id)arg1;
+ (void)compareDataVersionWithTid:(id)arg1 updateVersion:(id)arg2 localVersion:(id)arg3 monoDataSourceType:(unsigned long long)arg4 resultBlock:(id /* block */)arg5;
- (void)mergeMonoData:(id)arg1 monoDataSourceType:(unsigned long long)arg2;
- (void)compareDataVersionWithUpdateVersion:(id)arg1 localVersion:(id)arg2 monoDataSourceType:(unsigned long long)arg3 resultBlock:(id /* block */)arg4;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)monoData;
- (void)setMonoData:(id)arg1;
- (void).cxx_destruct;
@end

