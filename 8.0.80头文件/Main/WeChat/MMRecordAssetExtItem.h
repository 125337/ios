@interface MMRecordAssetExtItem : NSObject <WCTTableCoding>
{
    BOOL _didSaveHDToAlbum; // +0x8
    BOOL _didSaveMiddleToAlbum; // +0x9
    unsigned int _msgLocalID; // +0xc
    unsigned int _msgType; // +0x10
    unsigned int _msgCreateTime; // +0x14
    NSString * _dataId; // +0x18
    NSString * _assetID; // +0x20
    NSString * _recentSavedAssetID; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgLocalID;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_msgLocalID;
+ (const void *)dataId;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_dataId;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_msgType;
+ (const void *)msgCreateTime;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_msgCreateTime;
+ (const void *)didSaveHDToAlbum;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_didSaveHDToAlbum;
+ (const void *)didSaveMiddleToAlbum;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_didSaveMiddleToAlbum;
+ (const void *)assetID;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_assetID;
+ (const void *)recentSavedAssetID;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_recentSavedAssetID;
+ (void)__wcdb_table_constraint_21:(void *)arg1;
+ (void)__wcdb_table_constraint_22:(void *)arg1;
- (unsigned int)msgLocalID;
- (void)setMsgLocalID:(unsigned int)arg1;
- (id)dataId;
- (void)setDataId:(id)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (BOOL)didSaveHDToAlbum;
- (void)setDidSaveHDToAlbum:(BOOL)arg1;
- (BOOL)didSaveMiddleToAlbum;
- (void)setDidSaveMiddleToAlbum:(BOOL)arg1;
- (id)assetID;
- (void)setAssetID:(id)arg1;
- (id)recentSavedAssetID;
- (void)setRecentSavedAssetID:(id)arg1;
- (void).cxx_destruct;
@end
