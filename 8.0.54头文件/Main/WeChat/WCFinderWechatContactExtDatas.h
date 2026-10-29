@interface WCFinderWechatContactExtDatas : NSObject <WCTTableCoding>
{
    BOOL _likedFeedListHasNoData; // +0x8
    NSString * _name; // +0x10
    WCFinderContactPreviewData * _previewData; // +0x18
    WCFinderFeedInfoSubTidArray * _likedFeedTidList; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_name;
+ (const void *)previewData;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_previewData;
+ (const void *)likedFeedTidList;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_likedFeedTidList;
+ (const void *)likedFeedListHasNoData;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_likedFeedListHasNoData;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
- (id)getLikedFeedTidList;
- (void)updateLikedFeedTidList:(id)arg1;
- (void)ensurePreivewDataExistsThenUpdate:(id /* block */)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)previewData;
- (void)setPreviewData:(id)arg1;
- (id)likedFeedTidList;
- (void)setLikedFeedTidList:(id)arg1;
- (BOOL)likedFeedListHasNoData;
- (void)setLikedFeedListHasNoData:(BOOL)arg1;
- (void).cxx_destruct;
@end

