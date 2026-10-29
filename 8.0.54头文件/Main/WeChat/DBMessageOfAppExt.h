@interface DBMessageOfAppExt : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId; // +0x8
    unsigned int _msgInnerType; // +0xc
    NSString * _chatUsername; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatUsername;
+ (const void *)__wcdb_synthesize_110:(void *)arg1;
+ (id)swift_chatUsername;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_111:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)msgInnerType;
+ (const void *)__wcdb_synthesize_112:(void *)arg1;
+ (id)swift_msgInnerType;
+ (void)__wcdb_table_constraint_113:(void *)arg1;
+ (void)__wcdb_table_constraint_114:(void *)arg1;
+ (void)__wcdb_index_115:(void *)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)msgInnerType;
- (void)setMsgInnerType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

