@interface WCHardlinkFileCacheInfo : NSObject <PBCoding>
{
    unsigned long long _fileSize; // +0x8
    NSString * _fileMD5; // +0x10
}
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileMD5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (void).cxx_destruct;
@end
