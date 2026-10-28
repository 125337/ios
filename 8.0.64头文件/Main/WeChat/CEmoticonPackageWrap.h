@interface CEmoticonPackageWrap : NSObject <WCTTableCoding>
{
    NSString * m_packageId; // +0x8
    NSString * m_packageName; // +0x10
    unsigned int m_payStatus; // +0x18
    unsigned int m_downloadStatus; // +0x1c
    unsigned int m_installTime; // +0x20
    unsigned int m_removeTime; // +0x24
    NSString * m_iconUrl; // +0x28
    NSString * m_panelUrl; // +0x30
    unsigned int m_count; // +0x38
    NSString * m_designerUin; // +0x40
    NSString * designerIPSetKey; // +0x48
    unsigned int ConIntRes2; // +0x50
    unsigned int ConIntRes3; // +0x54
    NSString * ConStrRes3; // +0x58
    unsigned long long _sortAbsoluteIndex; // +0x60
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_packageId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_packageId;
+ (const void *)m_packageName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_packageName;
+ (const void *)m_iconUrl;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_iconUrl;
+ (const void *)m_panelUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_panelUrl;
+ (const void *)m_payStatus;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_m_payStatus;
+ (const void *)m_downloadStatus;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_m_downloadStatus;
+ (const void *)m_installTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_m_installTime;
+ (const void *)m_removeTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_m_removeTime;
+ (const void *)m_count;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_m_count;
+ (const void *)ConIntRes2;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_ConIntRes2;
+ (const void *)ConIntRes3;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_ConIntRes3;
+ (const void *)m_designerUin;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_m_designerUin;
+ (const void *)designerIPSetKey;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_designerIPSetKey;
+ (const void *)ConStrRes3;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_ConStrRes3;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)additionalObjectRelationalMapping:(void *)arg1;
+ (id)packageItemFromSummary:(id)arg1;
- (BOOL)isTusiji;
- (id)description;
- (id)init;
- (id)m_packageId;
- (void)setM_packageId:(id)arg1;
- (id)m_packageName;
- (void)setM_packageName:(id)arg1;
- (id)m_iconUrl;
- (void)setM_iconUrl:(id)arg1;
- (id)m_panelUrl;
- (void)setM_panelUrl:(id)arg1;
- (unsigned int)m_payStatus;
- (void)setM_payStatus:(unsigned int)arg1;
- (unsigned int)m_downloadStatus;
- (void)setM_downloadStatus:(unsigned int)arg1;
- (unsigned int)m_installTime;
- (void)setM_installTime:(unsigned int)arg1;
- (unsigned int)m_removeTime;
- (void)setM_removeTime:(unsigned int)arg1;
- (unsigned int)m_count;
- (void)setM_count:(unsigned int)arg1;
- (unsigned int)ConIntRes2;
- (void)setConIntRes2:(unsigned int)arg1;
- (unsigned int)ConIntRes3;
- (void)setConIntRes3:(unsigned int)arg1;
- (id)m_designerUin;
- (void)setM_designerUin:(id)arg1;
- (id)designerIPSetKey;
- (void)setDesignerIPSetKey:(id)arg1;
- (id)ConStrRes3;
- (void)setConStrRes3:(id)arg1;
- (unsigned long long)sortAbsoluteIndex;
- (void)setSortAbsoluteIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
