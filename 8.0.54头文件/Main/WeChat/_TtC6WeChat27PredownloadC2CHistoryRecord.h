@interface _TtC6WeChat27PredownloadC2CHistoryRecord : _TtC6WeChat24PredownloadHistoryRecord <WCTTableCoding, PredownloadHistoryRecordIdentifiable>
{
     svrID; // +0x0
     localID; // +0x0
     chatName; // +0x0
     media; // +0x0
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)date;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_date;
+ (void)__wcdb_column_constraint_1:(void *)arg1;
+ (const void *)size;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_size;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (const void *)serverPriority;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_serverPriority;
+ (const void *)clientPriority;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_clientPriority;
+ (const void *)downloadState;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_downloadState;
+ (const void *)downloadRetries;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_downloadRetries;
+ (const void *)sizeThatStartPredownload;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_sizeThatStartPredownload;
+ (const void *)skipQuota;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_skipQuota;
+ (void)__wcdb_index_10:(void *)arg1;
+ (const void *)svrID;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_svrID;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_localID;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_chatName;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
+ (const void *)media;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_media;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_table_constraint_19:(void *)arg1;
+ (void)__wcdb_table_constraint_20:(void *)arg1;
+ (void)__wcdb_table_constraint_21:(void *)arg1;
+ (void)__wcdb_table_constraint_22:(void *)arg1;
+ (Expression)identified:(id)arg1;
- (id)svrID;
- (void)setSvrID:(id)arg1;
- (id)localID;
- (void)setLocalID:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)media;
- (void)setMedia:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end

