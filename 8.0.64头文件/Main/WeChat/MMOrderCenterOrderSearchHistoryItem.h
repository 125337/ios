@interface MMOrderCenterOrderSearchHistoryItem : NSObject <WCTTableCoding>
{
    unsigned int _time; // +0x8
    NSString * _keyword; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)keyword;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_keyword;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_time;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (void)__wcdb_index_3:(void *)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (unsigned int)time;
- (void)setTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
