@interface TXCZipArchive : NSObject
{
    void * _zipFile; // +0x8
    void * _unzFile; // +0x10
    id <TXCZipArchiveDelegate> _delegate; // +0x18
    NSString * _password; // +0x20
}
- (void)dealloc;
- (BOOL)createZipFile2:(id)arg1;
- (BOOL)createZipFile2:(id)arg1 password:(id)arg2;
- (BOOL)addFileToZip:(id)arg1 newname:(id)arg2;
- (BOOL)closeZipFile2;
- (BOOL)unzipOpenFile:(id)arg1;
- (BOOL)unzipOpenFile:(id)arg1 password:(id)arg2;
- (BOOL)unzipFileTo:(id)arg1 overWrite:(BOOL)arg2;
- (BOOL)unzipCloseFile;
- (void)outputErrorMessage:(id)arg1;
- (BOOL)overWrite:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (void).cxx_destruct;
@end
