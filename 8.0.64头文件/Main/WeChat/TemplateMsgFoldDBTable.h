@interface TemplateMsgFoldDBTable : MMObject <WCTTableCoding>
{
    unsigned int _msgLocalId; // +0x8
    unsigned int _foldedMsgLocalId; // +0xc
    TemplateMsgFoldInfos * _foldInfos; // +0x10
    NSString * _clusterId; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)foldedMsgLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_foldedMsgLocalId;
+ (const void *)foldInfos;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_foldInfos;
+ (const void *)clusterId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_clusterId;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (id)description;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)foldedMsgLocalId;
- (void)setFoldedMsgLocalId:(unsigned int)arg1;
- (id)foldInfos;
- (void)setFoldInfos:(id)arg1;
- (id)clusterId;
- (void)setClusterId:(id)arg1;
- (void).cxx_destruct;
@end
