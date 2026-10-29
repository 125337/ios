@interface WCHardlinkFileInfo : NSObject <WCTTableCoding, PBCoding>
{
    unsigned long long _inodeNum; // +0x8
    NSString * _filePath; // +0x10
    NSString * _fileMD5; // +0x18
    unsigned long long _fileSize; // +0x20
    unsigned long long _scanType; // +0x28
}
+ (void)PBArrayAdd_inodeNum;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_fileMD5;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_scanType;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)inodeNum;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_inodeNum;
+ (const void *)filePath;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_filePath;
+ (const void *)fileMD5;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_fileMD5;
+ (const void *)fileSize;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_fileSize;
+ (const void *)scanType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_scanType;
+ (void)__wcdb_index_5:(void *)arg1;
+ (id)tableName;
+ (id)shortPath:(id)arg1;
+ (id)fullPath:(id)arg1;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned long long)inodeNum;
- (void)setInodeNum:(unsigned long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned long long)scanType;
- (void)setScanType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
