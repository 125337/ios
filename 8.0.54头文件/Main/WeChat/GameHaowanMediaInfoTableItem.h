@interface GameHaowanMediaInfoTableItem : MMObject <WCTTableCoding>
{
    unsigned int _mediaType; // +0x8
    int _uploadState; // +0xc
    unsigned int _editFlag; // +0x10
    NSString * _fileKey; // +0x18
    NSString * _postId; // +0x20
    NSString * _localId; // +0x28
    NSString * _localPath; // +0x30
    unsigned long long _fileSize; // +0x38
    NSString * _cdnUrl; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)fileKey;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_fileKey;
+ (const void *)postId;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_postId;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_localId;
+ (const void *)localPath;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_localPath;
+ (const void *)fileSize;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_fileSize;
+ (const void *)mediaType;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_mediaType;
+ (const void *)cdnUrl;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_cdnUrl;
+ (const void *)uploadState;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_uploadState;
+ (const void *)editFlag;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_editFlag;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
- (id)abosulteLocalPath;
- (void)setAbosulteLocalPath:(id)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (int)uploadState;
- (void)setUploadState:(int)arg1;
- (unsigned int)editFlag;
- (void)setEditFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

