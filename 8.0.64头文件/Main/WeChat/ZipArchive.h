@interface ZipArchive : NSObject
{
    void * _zipFile; // +0x8
    void * _unzFile; // +0x10
    NSString * _unzipFilePath; // +0x18
    NSString * _password; // +0x20
    id _delegate; // +0x28
}
- (id)init;
- (void)dealloc;
- (BOOL)CreateZipFile2:(id)arg1;
- (BOOL)CreateZipFile2:(id)arg1 Password:(id)arg2;
- (BOOL)addSingleFileToZip:(id)arg1 fileNameInZip:(id)arg2;
- (BOOL)addFileToZip:(id)arg1 newname:(id)arg2;
- (BOOL)CloseZipFile2;
- (BOOL)UnzipOpenFile:(id)arg1;
- (BOOL)UnzipOpenFile:(id)arg1 Password:(id)arg2;
- (BOOL)UnzipFileTo:(id)arg1 overWrite:(BOOL)arg2;
- (BOOL)UnzipHasRelativeDir:(BOOL *)arg1;
- (BOOL)UnzipLocateFile:(id)arg1;
- (BOOL)UnzipGoToNextFile;
- (BOOL)UnzipGoToFirstFile;
- (BOOL)UnzipGetCurrentFileName:(id *)arg1 retIsDirectory:(BOOL *)arg2 retFileLength:(unsigned long long *)arg3;
- (BOOL)UnzipCurrentFileWithPosition:(unsigned int)arg1 length:(unsigned int)arg2 retData:(id *)arg3;
- (BOOL)UnzipCloseFile;
- (void)OutputErrorMessage:(id)arg1;
- (BOOL)OverWrite:(id)arg1;
- (id)Date1980;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
