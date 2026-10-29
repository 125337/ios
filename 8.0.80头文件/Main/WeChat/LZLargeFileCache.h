@interface LZLargeFileCache : LZFileCacheRef
{
    long long _curFileOffset; // +0x8
    NSMutableData * _readBufData; // +0x10
}
- (id)init;
- (id)initWithFile:(id)arg1 queue:(id)arg2 context:(void *)arg3 type:(unsigned long long)arg4;
- (BOOL)writeFile:(id)arg1 data:(id)arg2 isFinish:(BOOL *)arg3;
- (void)finishWirte:(id)arg1;
- (void)endRead:(id)arg1;
- (void)releaseMapping;
- (BOOL)openFileAndSetupMapInner:(id)arg1;
- (BOOL)readFileInner:(id)arg1 range:(_LzRange)arg2 data:(id *)arg3;
- (long long)curFileOffset;
- (void)setCurFileOffset:(long long)arg1;
- (id)readBufData;
- (void)setReadBufData:(id)arg1;
- (void).cxx_destruct;
@end
