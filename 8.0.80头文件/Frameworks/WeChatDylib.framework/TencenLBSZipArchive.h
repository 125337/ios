@interface TencenLBSZipArchive : NSObject
{
    void * _zipFile; // +0x8
    void * _unzFile; // +0x10
    unsigned long long _numFiles; // +0x18
    NSString * _password; // +0x20
    id _delegate; // +0x28
    id /* block */ _progressBlock; // +0x30
    NSArray * _unzippedFiles; // +0x38
    NSFileManager * _fileManager; // +0x40
    unsigned long long _stringEncoding; // +0x48
    long long _compression; // +0x50
}
- (id)init;
- (id)initWithFileManager:(id)arg1;
- (void)dealloc;
- (BOOL)CreateZipFile2:(id)arg1;
- (BOOL)CreateZipFile2:(id)arg1 append:(BOOL)arg2;
- (BOOL)CreateZipFile2:(id)arg1 Password:(id)arg2;
- (BOOL)CreateZipFile2:(id)arg1 Password:(id)arg2 append:(BOOL)arg3;
- (BOOL)addFileToZip:(id)arg1 newname:(id)arg2;
- (BOOL)addDataToZip:(id)arg1 fileAttributes:(id)arg2 newname:(id)arg3;
- (BOOL)CloseZipFile2;
- (BOOL)UnzipOpenFile:(id)arg1;
- (BOOL)UnzipOpenFile:(id)arg1 Password:(id)arg2;
- (BOOL)UnzipFileTo:(id)arg1 overWrite:(BOOL)arg2;
- (id)UnzipFileToMemory;
- (BOOL)UnzipCloseFile;
- (id)getZipFileContents;
- (void)OutputErrorMessage:(id)arg1;
- (BOOL)OverWrite:(id)arg1;
- (id)Date1980;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)numFiles;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)unzippedFiles;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:(unsigned long long)arg1;
- (long long)compression;
- (void)setCompression:(long long)arg1;
@end
