@interface MSETransmitFileData : MSETransmitData <PBCoding>
{
    NSString * _filePath; // +0x18
    long long _fileSize; // +0x20
    NSString * _title; // +0x28
}
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_title;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end
