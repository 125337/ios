@interface MMFinderLiveStickerRecord : NSObject <WCTTableCoding>
{
    NSString * _instanceId; // +0x8
    unsigned long long _stickerType; // +0x10
    unsigned long long _schemaVersion; // +0x18
    NSString * _attributesJson; // +0x20
    NSString * _imageFilename; // +0x28
    double _lastUpdated; // +0x30
    unsigned long long _liveId; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)instanceId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_instanceId;
+ (const void *)stickerType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_stickerType;
+ (const void *)schemaVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_schemaVersion;
+ (const void *)attributesJson;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_attributesJson;
+ (const void *)imageFilename;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_imageFilename;
+ (const void *)lastUpdated;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_lastUpdated;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_liveId;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (id)stickerRecordFromItem:(id)arg1 liveId:(unsigned long long)arg2;
+ (id)stickerItemFromRecord:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (unsigned long long)stickerType;
- (void)setStickerType:(unsigned long long)arg1;
- (unsigned long long)schemaVersion;
- (void)setSchemaVersion:(unsigned long long)arg1;
- (id)attributesJson;
- (void)setAttributesJson:(id)arg1;
- (id)imageFilename;
- (void)setImageFilename:(id)arg1;
- (double)lastUpdated;
- (void)setLastUpdated:(double)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
