@interface WCHardlinkFileCacheInfo : NSObject <PBCoding>
{
    BOOL _bCacheUse; // +0x8
    unsigned long long _fileSize; // +0x10
    NSString * _fileMD5; // +0x18
}
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileMD5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (BOOL)bCacheUse;
- (void)setBCacheUse:(BOOL)arg1;
- (void).cxx_destruct;
@end

