@interface FTSMsgDeleteRecord : NSObject <WCTTableCoding>
{
    unsigned int _userNameId; // +0x8
    unsigned int _localId; // +0xc
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (id)swift_localId;
+ (void)__wcdb_table_constraint_52:(void *)arg1;
+ (void)__wcdb_table_constraint_53:(void *)arg1;
- (unsigned int)userNameId;
- (void)setUserNameId:(unsigned int)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
@end
