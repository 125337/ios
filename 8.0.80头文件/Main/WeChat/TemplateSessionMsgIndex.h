@interface TemplateSessionMsgIndex : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId; // +0x8
    unsigned int _createTime; // +0xc
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_createTime;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (void)__wcdb_index_3:(void *)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
- (id)description;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
@end
