@interface WACacheFileItem : NSObject
{
    unsigned int _modifyTime; // +0x8
    NSString * _filePath; // +0x10
    unsigned long long _fileSize; // +0x18
}
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned int)modifyTime;
- (void)setModifyTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
