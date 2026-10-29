@interface GroupNoticeDBTable : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId; // +0x8
    NSString * _sourceId; // +0x10
    NSString * _userName; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sourceId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sourceId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_userName;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end

