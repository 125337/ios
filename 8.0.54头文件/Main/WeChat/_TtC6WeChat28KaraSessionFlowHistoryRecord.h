@interface _TtC6WeChat28KaraSessionFlowHistoryRecord : _TtC6WeChat17KaraHistoryRecord <WCTTableCoding, KaraHistoryRecordIdentifiable>
{
     session; // +0x0
     origin; // +0x0
     destination; // +0x0
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)dateThatHappened;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_dateThatHappened;
+ (const void *)dateThatRecalled;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_dateThatRecalled;
+ (const void *)hourOfTheDay;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_hourOfTheDay;
+ (const void *)dayOfTheWeek;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_dayOfTheWeek;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (const void *)session;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_session;
+ (const void *)origin;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_origin;
+ (const void *)destination;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_destination;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (void)__wcdb_index_15:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (Expression)identified:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)origin;
- (void)setOrigin:(id)arg1;
- (id)destination;
- (void)setDestination:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

