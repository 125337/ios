@interface MsgSolitaire : NSObject
{
    unsigned int _msgLocalId; // +0x8
    NSString * _nsChatName; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)nsChatName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_nsChatName;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_msgLocalId;
+ (void)__wcdb_table_constraint_2:(void *)arg1;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
- (id)description;
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

