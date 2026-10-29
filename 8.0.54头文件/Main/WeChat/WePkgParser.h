@interface WePkgParser : NSObject
{
    unsigned int _resourceOffset; // +0x8
    NSString * _filePath; // +0x10
    CBaseFile * _file; // +0x18
}
- (id)initWithPkgPath:(id)arg1;
- (id)getMetaInfo;
- (id)getResourceContent:(unsigned int)arg1 Len:(unsigned int)arg2;
- (BOOL)openFile;
- (id)getLiteAppPkgInfo;
- (void)updatePackageLiteInfo;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)file;
- (void)setFile:(id)arg1;
- (unsigned int)resourceOffset;
- (void)setResourceOffset:(unsigned int)arg1;
- (void).cxx_destruct;
@end

