@interface WCFinderMembershipFirstPageCacheInfo : NSObject
{
    NSString * _tid; // +0x8
    NSString * _username; // +0x10
    unsigned long long _pageType; // +0x18
    unsigned long long _cacheIndex; // +0x20
    NSString * _collectionTopicId; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)pageType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_pageType;
+ (const void *)cacheIndex;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_cacheIndex;
+ (const void *)collectionTopicId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_collectionTopicId;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (unsigned long long)cacheIndex;
- (void)setCacheIndex:(unsigned long long)arg1;
- (id)collectionTopicId;
- (void)setCollectionTopicId:(id)arg1;
- (void).cxx_destruct;
@end

