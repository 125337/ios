@interface MMLiveStorageFile : NSObject
{
    BOOL _markedForPreservation; // +0x8
    NSString * _name; // +0x10
    NSString * _fullPath; // +0x18
    unsigned long long _size; // +0x20
    unsigned long long _sizeOnDisk; // +0x28
    long long _fileContentId; // +0x30
}
- (BOOL)fileContentIdAvailable;
- (id)name;
- (void)setName:(id)arg1;
- (id)fullPath;
- (void)setFullPath:(id)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)sizeOnDisk;
- (void)setSizeOnDisk:(unsigned long long)arg1;
- (long long)fileContentId;
- (void)setFileContentId:(long long)arg1;
- (BOOL)markedForPreservation;
- (void)setMarkedForPreservation:(BOOL)arg1;
- (void).cxx_destruct;
@end

