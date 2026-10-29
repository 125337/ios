@interface GameHaowanMediaInfo : MMObject
{
    unsigned int _mediaType; // +0x8
    unsigned int _editFlag; // +0xc
    NSString * _localId; // +0x10
    NSString * _localPath; // +0x18
    unsigned long long _fileSize; // +0x20
}
- (id)createDbItem:(id)arg1;
- (id)generateFileKey;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (unsigned int)editFlag;
- (void)setEditFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end
