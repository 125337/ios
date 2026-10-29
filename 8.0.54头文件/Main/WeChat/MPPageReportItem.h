@interface MPPageReportItem : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _itemId; // +0xc
    unsigned int _a8KeyScene; // +0x10
    unsigned int _enterScene; // +0x14
    unsigned int _enterSubscene; // +0x18
    long long _reportTime; // +0x20
    NSString * _url; // +0x28
    NSString * _sessionId; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)itemId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_itemId;
+ (const void *)reportTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_reportTime;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_url;
+ (const void *)a8KeyScene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_a8KeyScene;
+ (const void *)enterScene;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_enterScene;
+ (const void *)enterSubscene;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_enterSubscene;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_sessionId;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
- (id)description;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (unsigned int)itemId;
- (void)setItemId:(unsigned int)arg1;
- (long long)reportTime;
- (void)setReportTime:(long long)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)a8KeyScene;
- (void)setA8KeyScene:(unsigned int)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (unsigned int)enterSubscene;
- (void)setEnterSubscene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end

