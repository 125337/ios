@interface ImageFileInfo : NSObject
{
    int _fileType; // +0x8
    NSString * _filePath; // +0x10
    NSString * _fileMd5; // +0x18
}
- (id)initWithFilePath:(id)arg1 fileType:(int)arg2;
- (id)initWithFilePath:(id)arg1 fileType:(int)arg2 fileMd5:(id)arg3;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (int)fileType;
- (void)setFileType:(int)arg1;
- (void).cxx_destruct;
@end
