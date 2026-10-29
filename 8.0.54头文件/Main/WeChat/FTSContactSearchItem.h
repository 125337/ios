@interface FTSContactSearchItem : NSObject <WCTTableCoding>
{
    unsigned long long _contactType; // +0x8
    NSString * _userName; // +0x10
    NSString * _mainSearchContent; // +0x18
    NSString * _groupMembers; // +0x20
    NSString * _associatedGroups; // +0x28
    NSString * _reservedText1; // +0x30
    NSString * _reservedText2; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)mainSearchContent;
+ (const void *)__wcdb_synthesize_83:(void *)arg1;
+ (id)swift_mainSearchContent;
+ (const void *)groupMembers;
+ (const void *)__wcdb_synthesize_84:(void *)arg1;
+ (id)swift_groupMembers;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_85:(void *)arg1;
+ (id)swift_userName;
+ (const void *)contactType;
+ (const void *)__wcdb_synthesize_86:(void *)arg1;
+ (id)swift_contactType;
+ (const void *)associatedGroups;
+ (const void *)__wcdb_synthesize_87:(void *)arg1;
+ (id)swift_associatedGroups;
+ (const void *)reservedText1;
+ (const void *)__wcdb_synthesize_88:(void *)arg1;
+ (id)swift_reservedText1;
+ (const void *)reservedText2;
+ (const void *)__wcdb_synthesize_89:(void *)arg1;
+ (id)swift_reservedText2;
+ (void)__wcdb_virtual_table_90:(void *)arg1;
+ (void)__wcdb_virtual_table_91:(void *)arg1;
+ (void)__wcdb_column_constraint_92:(void *)arg1;
+ (void)__wcdb_column_constraint_93:(void *)arg1;
+ (void)__wcdb_column_constraint_94:(void *)arg1;
- (unsigned long long)contactType;
- (void)setContactType:(unsigned long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)mainSearchContent;
- (void)setMainSearchContent:(id)arg1;
- (id)groupMembers;
- (void)setGroupMembers:(id)arg1;
- (id)associatedGroups;
- (void)setAssociatedGroups:(id)arg1;
- (id)reservedText1;
- (void)setReservedText1:(id)arg1;
- (id)reservedText2;
- (void)setReservedText2:(id)arg1;
- (void).cxx_destruct;
@end

