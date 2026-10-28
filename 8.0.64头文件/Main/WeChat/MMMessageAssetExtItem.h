@interface MMMessageAssetExtItem : NSObject <WCTTableCoding>
{
    BOOL _didSaveHDToAlbum; // +0x8
    BOOL _didSaveMiddleToAlbum; // +0x9
    unsigned int _msgLocalID; // +0xc
    unsigned int _msgType; // +0x10
    unsigned int _msgCreateTime; // +0x14
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgLocalID;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_msgLocalID;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_msgType;
+ (const void *)msgCreateTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_msgCreateTime;
+ (const void *)didSaveHDToAlbum;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_didSaveHDToAlbum;
+ (const void *)didSaveMiddleToAlbum;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_didSaveMiddleToAlbum;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
+ (void)__wcdb_index_11:(void *)arg1;
- (unsigned int)msgLocalID;
- (void)setMsgLocalID:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (BOOL)didSaveHDToAlbum;
- (void)setDidSaveHDToAlbum:(BOOL)arg1;
- (BOOL)didSaveMiddleToAlbum;
- (void)setDidSaveMiddleToAlbum:(BOOL)arg1;
@end
