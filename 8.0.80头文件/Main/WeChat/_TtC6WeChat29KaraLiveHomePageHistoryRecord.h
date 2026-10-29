@interface _TtC6WeChat29KaraLiveHomePageHistoryRecord : _TtC6WeChat17KaraHistoryRecord <WCTTableCoding, KaraHistoryRecordIdentifiable>
{
     identifier; // +0x0
    BOOL unreadAtOtherCell; // +0x0
    BOOL badgeAtOtherCell; // +0x0
    void * anchor; // +0x0
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)dateThatHappened;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_dateThatHappened;
+ (const void *)dateThatRecalled;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_dateThatRecalled;
+ (const void *)hourOfTheDay;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_hourOfTheDay;
+ (const void *)dayOfTheWeek;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_dayOfTheWeek;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
+ (const void *)uuid;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_uuid;
+ (const void *)anchor;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_anchor;
+ (const void *)unreadAtOtherCell;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_unreadAtOtherCell;
+ (const void *)badgeAtOtherCell;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_badgeAtOtherCell;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (Expression)identified:(id)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (BOOL)unreadAtOtherCell;
- (void)setUnreadAtOtherCell:(BOOL)arg1;
- (BOOL)badgeAtOtherCell;
- (void)setBadgeAtOtherCell:(BOOL)arg1;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
