@interface FTS5IntelligentMsgItem : NSObject <WCTTableCoding>
{
    unsigned int _userNameId; // +0x8
    unsigned int _msgLocalId; // +0xc
    unsigned int _createTime; // +0x10
    NSString * _ocrText; // +0x18
    NSString * _faceAlbumLabels; // +0x20
    NSString * _classificationLabels; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_101:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_102:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_103:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)ocrText;
+ (const void *)__wcdb_synthesize_104:(void *)arg1;
+ (id)swift_ocrText;
+ (const void *)faceAlbumLabels;
+ (const void *)__wcdb_synthesize_105:(void *)arg1;
+ (id)swift_faceAlbumLabels;
+ (const void *)classificationLabels;
+ (const void *)__wcdb_synthesize_106:(void *)arg1;
+ (id)swift_classificationLabels;
+ (void)__wcdb_virtual_table_107:(void *)arg1;
+ (void)__wcdb_virtual_table_108:(void *)arg1;
+ (void)__wcdb_column_constraint_109:(void *)arg1;
+ (void)__wcdb_column_constraint_110:(void *)arg1;
+ (void)__wcdb_column_constraint_111:(void *)arg1;
+ (void)__wcdb_column_constraint_112:(void *)arg1;
+ (void)__wcdb_column_constraint_113:(void *)arg1;
- (id)init;
- (id)description;
- (unsigned int)userNameId;
- (void)setUserNameId:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)ocrText;
- (void)setOcrText:(id)arg1;
- (id)faceAlbumLabels;
- (void)setFaceAlbumLabels:(id)arg1;
- (id)classificationLabels;
- (void)setClassificationLabels:(id)arg1;
- (void).cxx_destruct;
@end
