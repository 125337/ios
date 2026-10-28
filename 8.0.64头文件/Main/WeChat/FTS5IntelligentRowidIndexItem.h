@interface FTS5IntelligentRowidIndexItem : NSObject <WCTTableCoding>
{
    unsigned int _userNameId; // +0x8
    unsigned int _msgLocalId; // +0xc
    unsigned int _createTime; // +0x10
    unsigned int _validFlag; // +0x14
    unsigned int _hasDownLoadFlag; // +0x18
    unsigned int _operateTime; // +0x1c
    unsigned int _ocrTime; // +0x20
    unsigned int _classificationTime; // +0x24
    unsigned int _faceClusterTime; // +0x28
    unsigned int _operateCost; // +0x2c
    long long _indexRowid; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_121:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_122:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)indexRowid;
+ (const void *)__wcdb_synthesize_123:(void *)arg1;
+ (id)swift_indexRowid;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_124:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)validFlag;
+ (const void *)__wcdb_synthesize_125:(void *)arg1;
+ (id)swift_validFlag;
+ (const void *)hasDownLoadFlag;
+ (const void *)__wcdb_synthesize_126:(void *)arg1;
+ (id)swift_hasDownLoadFlag;
+ (const void *)operateTime;
+ (const void *)__wcdb_synthesize_127:(void *)arg1;
+ (id)swift_operateTime;
+ (const void *)ocrTime;
+ (const void *)__wcdb_synthesize_128:(void *)arg1;
+ (id)swift_ocrTime;
+ (const void *)classificationTime;
+ (const void *)__wcdb_synthesize_129:(void *)arg1;
+ (id)swift_classificationTime;
+ (const void *)faceClusterTime;
+ (const void *)__wcdb_synthesize_130:(void *)arg1;
+ (id)swift_faceClusterTime;
+ (const void *)operateCost;
+ (const void *)__wcdb_synthesize_131:(void *)arg1;
+ (id)swift_operateCost;
+ (void)__wcdb_table_constraint_132:(void *)arg1;
+ (void)__wcdb_table_constraint_133:(void *)arg1;
+ (void)__wcdb_index_134:(void *)arg1;
+ (void)__wcdb_index_135:(void *)arg1;
+ (void)__wcdb_index_136:(void *)arg1;
+ (void)__wcdb_index_137:(void *)arg1;
+ (void)__wcdb_table_constraint_138:(void *)arg1;
- (unsigned int)userNameId;
- (void)setUserNameId:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (long long)indexRowid;
- (void)setIndexRowid:(long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)validFlag;
- (void)setValidFlag:(unsigned int)arg1;
- (unsigned int)hasDownLoadFlag;
- (void)setHasDownLoadFlag:(unsigned int)arg1;
- (unsigned int)operateTime;
- (void)setOperateTime:(unsigned int)arg1;
- (unsigned int)ocrTime;
- (void)setOcrTime:(unsigned int)arg1;
- (unsigned int)classificationTime;
- (void)setClassificationTime:(unsigned int)arg1;
- (unsigned int)faceClusterTime;
- (void)setFaceClusterTime:(unsigned int)arg1;
- (unsigned int)operateCost;
- (void)setOperateCost:(unsigned int)arg1;
@end
