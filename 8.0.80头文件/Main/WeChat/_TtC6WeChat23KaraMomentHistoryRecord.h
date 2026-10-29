@interface _TtC6WeChat23KaraMomentHistoryRecord : _TtC6WeChat17KaraHistoryRecord <WCTTableCoding, KaraHistoryRecordIdentifiable>
{
     identifier; // +0x0
    void * userName; // +0x0
    BOOL isWeishang; // +0x0
    void * cityOfPOI; // +0x0
     feedWeishangType; // +0x0
     sellerWeishangType; // +0x0
     feedWeishangStatus; // +0x0
    BOOL isTemplateFromMiaojian; // +0x0
     textEmbedding1x32; // +0x0
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
+ (const void *)itemID;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_itemID;
+ (const void *)position;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_position;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_userName;
+ (const void *)isWeishang;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_isWeishang;
+ (const void *)cityOfPOI;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_cityOfPOI;
+ (const void *)feedWeishangType;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_feedWeishangType;
+ (const void *)sellerWeishangType;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_sellerWeishangType;
+ (const void *)feedWeishangStatus;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_feedWeishangStatus;
+ (const void *)isTemplateFromMiaojian;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_isTemplateFromMiaojian;
+ (const void *)textEmbedding1x32;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_textEmbedding1x32;
+ (void)__wcdb_table_constraint_21:(void *)arg1;
+ (void)__wcdb_table_constraint_22:(void *)arg1;
+ (void)__wcdb_column_constraint_23:(void *)arg1;
+ (void)__wcdb_column_constraint_24:(void *)arg1;
+ (void)__wcdb_column_constraint_25:(void *)arg1;
+ (void)__wcdb_index_26:(void *)arg1;
+ (void)__wcdb_index_27:(void *)arg1;
+ (void)__wcdb_index_28:(void *)arg1;
+ (void)__wcdb_index_29:(void *)arg1;
+ (Expression)identified:(id)arg1;
- (id)itemID;
- (void)setItemID:(id)arg1;
- (id)position;
- (void)setPosition:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (BOOL)isWeishang;
- (void)setIsWeishang:(BOOL)arg1;
- (id)cityOfPOI;
- (void)setCityOfPOI:(id)arg1;
- (id)feedWeishangType;
- (void)setFeedWeishangType:(id)arg1;
- (id)sellerWeishangType;
- (void)setSellerWeishangType:(id)arg1;
- (id)feedWeishangStatus;
- (void)setFeedWeishangStatus:(id)arg1;
- (BOOL)isTemplateFromMiaojian;
- (void)setIsTemplateFromMiaojian:(BOOL)arg1;
- (id)textEmbedding1x32;
- (void)setTextEmbedding1x32:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
