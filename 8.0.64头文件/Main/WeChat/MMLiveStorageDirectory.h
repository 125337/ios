@interface MMLiveStorageDirectory : NSObject
{
    BOOL _scanned; // +0x8
    NSString * _name; // +0x10
    NSString * _fullPath; // +0x18
    unsigned long long _size; // +0x20
    unsigned long long _sizeOnDisk; // +0x28
    NSMutableDictionary * _subdirectories; // +0x30
    NSMutableDictionary * _containedFiles; // +0x38
}
- (id)directories;
- (id)files;
- (void)addDirectory:(id)arg1;
- (void)addFile:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)fullPath;
- (void)setFullPath:(id)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)sizeOnDisk;
- (void)setSizeOnDisk:(unsigned long long)arg1;
- (id)subdirectories;
- (void)setSubdirectories:(id)arg1;
- (id)containedFiles;
- (void)setContainedFiles:(id)arg1;
- (BOOL)scanned;
- (void)setScanned:(BOOL)arg1;
- (void).cxx_destruct;
@end
