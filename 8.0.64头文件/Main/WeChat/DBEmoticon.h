@interface DBEmoticon : NSObject <WCTTableCoding>
{
    unsigned int _type; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _length; // +0x10
    unsigned int _status; // +0x14
    unsigned int _catalogId; // +0x18
    unsigned int _lastUsedTime; // +0x1c
    unsigned int _extFlag; // +0x20
    unsigned int _indexInPack; // +0x24
    NSString * _md5; // +0x28
    NSString * _message; // +0x30
    NSString * _catalog; // +0x38
    NSString * _draft; // +0x40
    NSString * _extInfo; // +0x48
    NSString * _packageId; // +0x50
    NSString * _ConStrRes3; // +0x58
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_146:(void *)arg1;
+ (id)swift_md5;
+ (const void *)message;
+ (const void *)__wcdb_synthesize_147:(void *)arg1;
+ (id)swift_message;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_148:(void *)arg1;
+ (id)swift_type;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_149:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)length;
+ (const void *)__wcdb_synthesize_150:(void *)arg1;
+ (id)swift_length;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_151:(void *)arg1;
+ (id)swift_status;
+ (const void *)catalog;
+ (const void *)__wcdb_synthesize_152:(void *)arg1;
+ (id)swift_catalog;
+ (const void *)catalogId;
+ (const void *)__wcdb_synthesize_153:(void *)arg1;
+ (id)swift_catalogId;
+ (const void *)draft;
+ (const void *)__wcdb_synthesize_154:(void *)arg1;
+ (id)swift_draft;
+ (const void *)lastUsedTime;
+ (const void *)__wcdb_synthesize_155:(void *)arg1;
+ (id)swift_lastUsedTime;
+ (const void *)extFlag;
+ (const void *)__wcdb_synthesize_156:(void *)arg1;
+ (id)swift_extFlag;
+ (const void *)indexInPack;
+ (const void *)__wcdb_synthesize_157:(void *)arg1;
+ (id)swift_indexInPack;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_158:(void *)arg1;
+ (id)swift_extInfo;
+ (const void *)packageId;
+ (const void *)__wcdb_synthesize_159:(void *)arg1;
+ (id)swift_packageId;
+ (const void *)ConStrRes3;
+ (const void *)__wcdb_synthesize_160:(void *)arg1;
+ (id)swift_ConStrRes3;
+ (void)__wcdb_column_constraint_161:(void *)arg1;
+ (void)__wcdb_column_constraint_162:(void *)arg1;
+ (void)__wcdb_column_constraint_163:(void *)arg1;
+ (void)__wcdb_column_constraint_164:(void *)arg1;
+ (void)__wcdb_column_constraint_165:(void *)arg1;
+ (void)__wcdb_column_constraint_166:(void *)arg1;
+ (void)__wcdb_column_constraint_167:(void *)arg1;
+ (void)__wcdb_column_constraint_168:(void *)arg1;
+ (void)__wcdb_index_169:(void *)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)length;
- (void)setLength:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)catalog;
- (void)setCatalog:(id)arg1;
- (unsigned int)catalogId;
- (void)setCatalogId:(unsigned int)arg1;
- (id)draft;
- (void)setDraft:(id)arg1;
- (unsigned int)lastUsedTime;
- (void)setLastUsedTime:(unsigned int)arg1;
- (unsigned int)extFlag;
- (void)setExtFlag:(unsigned int)arg1;
- (unsigned int)indexInPack;
- (void)setIndexInPack:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)packageId;
- (void)setPackageId:(id)arg1;
- (id)ConStrRes3;
- (void)setConStrRes3:(id)arg1;
- (void).cxx_destruct;
@end
