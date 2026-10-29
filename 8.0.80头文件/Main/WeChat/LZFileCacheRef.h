@interface LZFileCacheRef : LZFileCache
{
    unsigned long long refCnt; // +0x8
}
- (unsigned long long)refCnt;
- (void)setRefCnt:(unsigned long long)arg1;
@end
