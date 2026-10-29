@interface WCTimelineGroupHint : NSObject <WCTTableCoding>
{
    unsigned int _groupId; // +0x8
    NSString * _topFeedId; // +0x10
    NSString * _bottomFeedId; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_79:(void *)arg1;
+ (id)swift_groupId;
+ (const void *)topFeedId;
+ (const void *)__wcdb_synthesize_80:(void *)arg1;
+ (id)swift_topFeedId;
+ (const void *)bottomFeedId;
+ (const void *)__wcdb_synthesize_81:(void *)arg1;
+ (id)swift_bottomFeedId;
+ (void)__wcdb_column_constraint_82:(void *)arg1;
+ (void)__wcdb_index_83:(void *)arg1;
+ (void)__wcdb_column_constraint_84:(void *)arg1;
+ (void)__wcdb_column_constraint_85:(void *)arg1;
+ (void)__wcdb_column_constraint_86:(void *)arg1;
- (unsigned int)groupId;
- (void)setGroupId:(unsigned int)arg1;
- (id)topFeedId;
- (void)setTopFeedId:(id)arg1;
- (id)bottomFeedId;
- (void)setBottomFeedId:(id)arg1;
- (void).cxx_destruct;
@end

