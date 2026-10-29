@interface WCFinderTimelineTabFeedInfo : NSObject <WCTTableCoding>
{
    NSString * _tid; // +0x8
    unsigned long long _tabType; // +0x10
    unsigned long long _feedIndex; // +0x18
    unsigned long long _feedType; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)tabType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_tabType;
+ (const void *)feedIndex;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_feedIndex;
+ (const void *)feedType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_feedType;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (unsigned long long)feedIndex;
- (void)setFeedIndex:(unsigned long long)arg1;
- (unsigned long long)feedType;
- (void)setFeedType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

