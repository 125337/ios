@interface lzCommCacheFileData : NSObject
{
    BOOL _bHidden; // +0x8
    BOOL _bIgnor; // +0x9
    NSString * _filePath; // +0x10
    NSDate * _createDate; // +0x18
    NSDate * _modifyDate; // +0x20
    long long _fileSize; // +0x28
    NSString * _fileName; // +0x30
}
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)createDate;
- (void)setCreateDate:(id)arg1;
- (id)modifyDate;
- (void)setModifyDate:(id)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (BOOL)bHidden;
- (void)setBHidden:(BOOL)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (BOOL)bIgnor;
- (void)setBIgnor:(BOOL)arg1;
- (void).cxx_destruct;
@end

