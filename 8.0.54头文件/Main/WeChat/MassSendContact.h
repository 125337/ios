@interface MassSendContact : NSObject <WCTTableCoding>
{
    NSString * m_nsUsrName; // +0x8
    NSString * m_nsDetail; // +0x10
    unsigned int m_uiToListCount; // +0x18
    unsigned int ConIntRes2; // +0x1c
    NSString * ConStrRes1; // +0x20
    NSString * ConStrRes2; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_nsUsrName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_nsUsrName;
+ (const void *)m_nsDetail;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_nsDetail;
+ (const void *)m_uiToListCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_uiToListCount;
+ (const void *)ConIntRes2;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_ConIntRes2;
+ (const void *)ConStrRes1;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_ConStrRes1;
+ (const void *)ConStrRes2;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_ConStrRes2;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (void)additionalObjectRelationalMapping:(void *)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (id)m_nsDetail;
- (void)setM_nsDetail:(id)arg1;
- (unsigned int)m_uiToListCount;
- (void)setM_uiToListCount:(unsigned int)arg1;
- (unsigned int)ConIntRes2;
- (void)setConIntRes2:(unsigned int)arg1;
- (id)ConStrRes1;
- (void)setConStrRes1:(id)arg1;
- (id)ConStrRes2;
- (void)setConStrRes2:(id)arg1;
- (void).cxx_destruct;
@end

