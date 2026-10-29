@interface _TtC6WeChat29KaraGroupMessageHistoryRecord : _TtC6WeChat17KaraHistoryRecord <WCTTableCoding, KaraHistoryRecordIdentifiable>
{
     identifier; // +0x0
    void * sender; // +0x0
    BOOL isSenderWeComContact; // +0x0
    BOOL isWeComGroupChat; // +0x0
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)dateThatHappened;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_dateThatHappened;
+ (const void *)dateThatRecalled;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_dateThatRecalled;
+ (const void *)hourOfTheDay;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_hourOfTheDay;
+ (const void *)dayOfTheWeek;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_dayOfTheWeek;
+ (void)__wcdb_column_constraint_27:(void *)arg1;
+ (void)__wcdb_column_constraint_28:(void *)arg1;
+ (void)__wcdb_column_constraint_29:(void *)arg1;
+ (void)__wcdb_index_30:(void *)arg1;
+ (void)__wcdb_index_31:(void *)arg1;
+ (void)__wcdb_index_32:(void *)arg1;
+ (const void *)svrid;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_svrid;
+ (const void *)session;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_session;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_localID;
+ (const void *)sender;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift_sender;
+ (const void *)isSenderWeComContact;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_isSenderWeComContact;
+ (const void *)isWeComGroupChat;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (id)swift_isWeComGroupChat;
+ (void)__wcdb_table_constraint_39:(void *)arg1;
+ (void)__wcdb_table_constraint_40:(void *)arg1;
+ (void)__wcdb_table_constraint_41:(void *)arg1;
+ (void)__wcdb_column_constraint_42:(void *)arg1;
+ (void)__wcdb_column_constraint_43:(void *)arg1;
+ (void)__wcdb_column_constraint_44:(void *)arg1;
+ (void)__wcdb_column_constraint_45:(void *)arg1;
+ (void)__wcdb_index_46:(void *)arg1;
+ (void)__wcdb_index_47:(void *)arg1;
+ (void)__wcdb_index_48:(void *)arg1;
+ (void)__wcdb_index_49:(void *)arg1;
+ (void)__wcdb_index_50:(void *)arg1;
+ (Expression)identified:(id)arg1;
- (id)svrid;
- (void)setSvrid:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)localID;
- (void)setLocalID:(id)arg1;
- (id)sender;
- (void)setSender:(id)arg1;
- (BOOL)isSenderWeComContact;
- (void)setIsSenderWeComContact:(BOOL)arg1;
- (BOOL)isWeComGroupChat;
- (void)setIsWeComGroupChat:(BOOL)arg1;
- (id)init;
- (void).cxx_destruct;
@end
