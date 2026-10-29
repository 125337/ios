@interface DBMessageExt : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId; // +0x8
    unsigned int _msgFlag; // +0xc
    unsigned int _ConIntRes1; // +0x10
    unsigned int _ConIntRes2; // +0x14
    unsigned int _ConIntRes3; // +0x18
    NSString * _msgSource; // +0x20
    NSString * _msgIdentify; // +0x28
    NSString * _ConStrRes1; // +0x30
    NSString * _ConStrRes2; // +0x38
    NSString * _ConStrRes3; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_72:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)msgFlag;
+ (const void *)__wcdb_synthesize_73:(void *)arg1;
+ (id)swift_msgFlag;
+ (const void *)ConIntRes2;
+ (const void *)__wcdb_synthesize_74:(void *)arg1;
+ (id)swift_ConIntRes2;
+ (const void *)ConIntRes3;
+ (const void *)__wcdb_synthesize_75:(void *)arg1;
+ (id)swift_ConIntRes3;
+ (const void *)msgSource;
+ (const void *)__wcdb_synthesize_76:(void *)arg1;
+ (id)swift_msgSource;
+ (const void *)msgIdentify;
+ (const void *)__wcdb_synthesize_77:(void *)arg1;
+ (id)swift_msgIdentify;
+ (const void *)ConStrRes1;
+ (const void *)__wcdb_synthesize_78:(void *)arg1;
+ (id)swift_ConStrRes1;
+ (const void *)ConStrRes2;
+ (const void *)__wcdb_synthesize_79:(void *)arg1;
+ (id)swift_ConStrRes2;
+ (const void *)ConStrRes3;
+ (const void *)__wcdb_synthesize_80:(void *)arg1;
+ (id)swift_ConStrRes3;
+ (const void *)ConIntRes1;
+ (const void *)__wcdb_synthesize_81:(void *)arg1;
+ (id)swift_ConIntRes1;
+ (void)__wcdb_column_constraint_82:(void *)arg1;
+ (void)__wcdb_index_83:(void *)arg1;
+ (void)__wcdb_column_constraint_84:(void *)arg1;
+ (void)__wcdb_column_constraint_85:(void *)arg1;
+ (void)__wcdb_column_constraint_86:(void *)arg1;
+ (void)__wcdb_column_constraint_87:(void *)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)msgFlag;
- (void)setMsgFlag:(unsigned int)arg1;
- (id)msgSource;
- (void)setMsgSource:(id)arg1;
- (id)msgIdentify;
- (void)setMsgIdentify:(id)arg1;
- (unsigned int)ConIntRes1;
- (void)setConIntRes1:(unsigned int)arg1;
- (unsigned int)ConIntRes2;
- (void)setConIntRes2:(unsigned int)arg1;
- (unsigned int)ConIntRes3;
- (void)setConIntRes3:(unsigned int)arg1;
- (id)ConStrRes1;
- (void)setConStrRes1:(id)arg1;
- (id)ConStrRes2;
- (void)setConStrRes2:(id)arg1;
- (id)ConStrRes3;
- (void)setConStrRes3:(id)arg1;
- (void).cxx_destruct;
@end
