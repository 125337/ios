@interface TPBaseFile : NSObject
{
    BOOL _fileOpen; // +0x8
    BOOL _forUpdating; // +0x9
    NSFileHandle * _fileHandle; // +0x10
    NSString * _filePath; // +0x18
}
+ (BOOL)fileExist:(id)arg1;
+ (long long)getFileSize:(id)arg1;
+ (id)loadDataFromPathEx:(id)arg1 Offset:(unsigned long long)arg2 MaxLen:(unsigned long long)arg3;
+ (BOOL)createPath:(id)arg1;
+ (BOOL)createFile:(id)arg1;
+ (BOOL)copyFile:(id)arg1 To:(id)arg2;
+ (void)ensureCreateParentDir:(id)arg1;
+ (BOOL)removeFile:(id)arg1;
+ (BOOL)appendData:(id)arg1 toPath:(id)arg2;
+ (BOOL)writeDataToPath:(id)arg1 Offset:(long long)arg2 Data:(id)arg3;
- (void)close;
- (BOOL)readData:(id)arg1 Len:(unsigned long long)arg2;
- (BOOL)setFileInfo:(id)arg1 forUpdating:(BOOL)arg2;
- (BOOL)isOpen;
- (BOOL)seek:(long long)arg1;
- (BOOL)open;
- (unsigned long long)seekToEndOfFile;
- (BOOL)writeData:(id)arg1;
- (BOOL)writeLargeData:(id)arg1;
- (id)fileHandle;
- (void)setFileHandle:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (BOOL)fileOpen;
- (void)setFileOpen:(BOOL)arg1;
- (BOOL)forUpdating;
- (void)setForUpdating:(BOOL)arg1;
- (void).cxx_destruct;
@end
