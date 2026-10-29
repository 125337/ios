@interface WCTimelineFeedSegment : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _groupId; // +0xc
    unsigned int _feedsCount; // +0x10
    NSString * _topFeedId; // +0x18
    NSString * _bottomFeedId; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_101:(void *)arg1;
+ (id)swift_groupId;
+ (const void *)feedsCount;
+ (const void *)__wcdb_synthesize_102:(void *)arg1;
+ (id)swift_feedsCount;
+ (const void *)topFeedId;
+ (const void *)__wcdb_synthesize_103:(void *)arg1;
+ (id)swift_topFeedId;
+ (const void *)bottomFeedId;
+ (const void *)__wcdb_synthesize_104:(void *)arg1;
+ (id)swift_bottomFeedId;
+ (void)__wcdb_column_constraint_105:(void *)arg1;
+ (void)__wcdb_index_106:(void *)arg1;
+ (void)__wcdb_column_constraint_107:(void *)arg1;
+ (void)__wcdb_column_constraint_108:(void *)arg1;
- (id)description;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (unsigned int)groupId;
- (void)setGroupId:(unsigned int)arg1;
- (unsigned int)feedsCount;
- (void)setFeedsCount:(unsigned int)arg1;
- (id)topFeedId;
- (void)setTopFeedId:(id)arg1;
- (id)bottomFeedId;
- (void)setBottomFeedId:(id)arg1;
- (void).cxx_destruct;
@end

