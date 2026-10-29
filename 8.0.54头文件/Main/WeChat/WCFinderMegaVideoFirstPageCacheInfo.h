@interface WCFinderMegaVideoFirstPageCacheInfo : NSObject <WCTTableCoding>
{
    NSString * _videoId; // +0x8
    NSString * _username; // +0x10
    unsigned long long _pageType; // +0x18
    unsigned long long _cacheIndex; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)videoId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_videoId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)pageType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_pageType;
+ (const void *)cacheIndex;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_cacheIndex;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (unsigned long long)cacheIndex;
- (void)setCacheIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

