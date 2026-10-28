@interface lzCommCacheFileCollection : NSObject
{
    NSMutableArray * _fileList; // +0x8
    long long _totalSize; // +0x10
    NSMutableArray * _expfileList; // +0x18
}
- (id)init;
- (void)dealloc;
- (id)sortByDate;
- (id)fileList;
- (void)setFileList:(id)arg1;
- (long long)totalSize;
- (void)setTotalSize:(long long)arg1;
- (id)expfileList;
- (void)setExpfileList:(id)arg1;
- (void).cxx_destruct;
@end
