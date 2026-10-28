@interface FTS5IntelligentFaceClusterMessageItem : NSObject <WCTTableCoding>
{
    unsigned int _userNameId; // +0x8
    unsigned int _msgLocalId; // +0xc
    float _zScore; // +0x10
    long long _faceLabelId; // +0x18
    NSString * _faceRectStr; // +0x20
    NSString * _mediaFilePath; // +0x28
    NSString * _userName; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_162:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_163:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)faceLabelId;
+ (const void *)__wcdb_synthesize_164:(void *)arg1;
+ (id)swift_faceLabelId;
+ (const void *)zScore;
+ (const void *)__wcdb_synthesize_165:(void *)arg1;
+ (id)swift_zScore;
+ (const void *)faceRectStr;
+ (const void *)__wcdb_synthesize_166:(void *)arg1;
+ (id)swift_faceRectStr;
+ (const void *)mediaFilePath;
+ (const void *)__wcdb_synthesize_167:(void *)arg1;
+ (id)swift_mediaFilePath;
+ (void)__wcdb_index_168:(void *)arg1;
+ (void)__wcdb_index_169:(void *)arg1;
+ (void)__wcdb_index_170:(void *)arg1;
- (unsigned int)userNameId;
- (void)setUserNameId:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (long long)faceLabelId;
- (void)setFaceLabelId:(long long)arg1;
- (float)zScore;
- (void)setZScore:(float)arg1;
- (id)faceRectStr;
- (void)setFaceRectStr:(id)arg1;
- (id)mediaFilePath;
- (void)setMediaFilePath:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end
