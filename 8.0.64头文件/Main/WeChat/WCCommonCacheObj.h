@interface WCCommonCacheObj : MMObject <WCTTableCoding>
{
    unsigned int _lastUseTime; // +0x8
    unsigned int _mediaType; // +0xc
    NSString * _fileMd5; // +0x10
    NSString * _filePath; // +0x18
    NSString * _aggregateName; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)fileMd5;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_fileMd5;
+ (const void *)filePath;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_filePath;
+ (const void *)lastUseTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_lastUseTime;
+ (const void *)mediaType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_mediaType;
+ (const void *)aggregateName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_aggregateName;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
- (id)getAbsolutePath;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned int)lastUseTime;
- (void)setLastUseTime:(unsigned int)arg1;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (id)aggregateName;
- (void)setAggregateName:(id)arg1;
- (void).cxx_destruct;
@end
