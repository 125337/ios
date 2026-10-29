@interface FTS5IntelligentRowidIndexClassificationItem : NSObject <WCTTableCoding>
{
    unsigned int _userNameId; // +0x8
    unsigned int _msgLocalId; // +0xc
    unsigned int _classificationLabelId; // +0x10
    unsigned int _faceClusterFlag; // +0x14
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_141:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_142:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)classificationLabelId;
+ (const void *)__wcdb_synthesize_143:(void *)arg1;
+ (id)swift_classificationLabelId;
+ (const void *)faceClusterFlag;
+ (const void *)__wcdb_synthesize_144:(void *)arg1;
+ (id)swift_faceClusterFlag;
+ (void)__wcdb_index_145:(void *)arg1;
+ (void)__wcdb_index_146:(void *)arg1;
+ (void)__wcdb_index_147:(void *)arg1;
- (unsigned int)userNameId;
- (void)setUserNameId:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)classificationLabelId;
- (void)setClassificationLabelId:(unsigned int)arg1;
- (unsigned int)faceClusterFlag;
- (void)setFaceClusterFlag:(unsigned int)arg1;
@end
