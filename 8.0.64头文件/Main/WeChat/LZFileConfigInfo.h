@interface LZFileConfigInfo : NSObject <NSCoding>
{
    unsigned long long _fileSize; // +0x8
    NSMutableArray * _writeRanges; // +0x10
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)writeRanges;
- (void)setWriteRanges:(id)arg1;
- (void).cxx_destruct;
@end
