@interface WCFileIndexInfo : NSObject <WCTTableCoding, PBCoding>
{
    unsigned int _msgLocalId; // +0x8
    unsigned int _msgType; // +0xc
    unsigned int _msgtime; // +0x10
    NSString * _userName; // +0x18
    unsigned long long _indexType; // +0x20
    NSString * _filePath; // +0x28
    unsigned long long _fileSize; // +0x30
    NSString * _fileMD5; // +0x38
    unsigned long long _inodeNum; // +0x40
}
+ (void)PBArrayAdd_msgLocalId;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_msgType;
+ (void)PBArrayAdd_indexType;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_msgtime;
+ (void)PBArrayAdd_fileMD5;
+ (void)PBArrayAdd_inodeNum;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_userName;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_msgType;
+ (const void *)indexType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_indexType;
+ (const void *)filePath;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_filePath;
+ (const void *)fileSize;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_fileSize;
+ (const void *)msgtime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_msgtime;
+ (const void *)fileMD5;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_fileMD5;
+ (const void *)inodeNum;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_inodeNum;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (void)__wcdb_index_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
+ (void)__wcdb_index_15:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (id)tableName;
+ (id)expandFullPathForUser:(id)arg1 shortPath:(id)arg2;
- (id)getPBPropertyTable;
- (id)expandFullPath;
- (id)description;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned long long)indexType;
- (void)setIndexType:(unsigned long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned int)msgtime;
- (void)setMsgtime:(unsigned int)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (unsigned long long)inodeNum;
- (void)setInodeNum:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
