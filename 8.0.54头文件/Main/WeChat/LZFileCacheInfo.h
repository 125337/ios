@interface LZFileCacheInfo : NSObject
{
    long long _seqNo; // +0x8
    long long _syncOffset; // +0x10
    _LzRange _writeRange; // +0x18
}
- (id)initWithSeq:(long long)arg1;
- (long long)seqNo;
- (_LzRange)writeRange;
- (void)setWriteRange:(_LzRange)arg1;
- (long long)syncOffset;
- (void)setSyncOffset:(long long)arg1;
@end

