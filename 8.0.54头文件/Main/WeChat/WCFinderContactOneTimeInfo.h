@interface WCFinderContactOneTimeInfo : NSObject
{
    int _commentScene; // +0x8
    NSString * _username; // +0x10
    unsigned long long _oneTimeFlag; // +0x18
    unsigned long long _entryScene; // +0x20
    unsigned long long _cacheTime; // +0x28
    unsigned long long _userFlag; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)oneTimeFlag;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_oneTimeFlag;
+ (const void *)entryScene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_entryScene;
+ (const void *)commentScene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_commentScene;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)userFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_userFlag;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
- (id)description;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)oneTimeFlag;
- (void)setOneTimeFlag:(unsigned long long)arg1;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (unsigned long long)userFlag;
- (void)setUserFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

