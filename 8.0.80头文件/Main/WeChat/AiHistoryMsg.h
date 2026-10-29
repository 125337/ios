@interface AiHistoryMsg : NSObject <_TtP6WeChat11FTSRowModel_, WCTTableCoding>
{
    NSString * _searchId; // +0x8
    NSString * _chatId; // +0x10
    unsigned long long _timeStamp; // +0x18
    NSString * _query; // +0x20
    NSString * _boxJSON; // +0x28
    NSString * _boxFTS; // +0x30
    NSString * _extInfo; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)searchId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_searchId;
+ (const void *)chatId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_chatId;
+ (const void *)timeStamp;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_timeStamp;
+ (const void *)query;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_query;
+ (const void *)boxJSON;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_boxJSON;
+ (const void *)boxFTS;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_boxFTS;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_extInfo;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
- (id)userName;
- (id)diffIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)JSONDictionary;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)boxJSON;
- (void)setBoxJSON:(id)arg1;
- (id)boxFTS;
- (void)setBoxFTS:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
