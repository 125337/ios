@interface FileInfoParseResult : NSObject
{
    unsigned long long _fileType; // +0x8
    long long _fileTypeNum; // +0x10
    NSString * _realPath; // +0x18
    NSMutableArray * _filePathList; // +0x20
}
- (id)init;
- (unsigned long long)fileType;
- (void)setFileType:(unsigned long long)arg1;
- (long long)fileTypeNum;
- (void)setFileTypeNum:(long long)arg1;
- (id)realPath;
- (void)setRealPath:(id)arg1;
- (id)filePathList;
- (void)setFilePathList:(id)arg1;
- (void).cxx_destruct;
@end
