@interface UnitRCSharedMemoryBase : NSObject
{
    NSData * _data; // +0x8
    long long _dataSize; // +0x10
    long long _cacheSize; // +0x18
}
- (id)initWithBuffer:(id)arg1 dataSize:(long long)arg2 cacheSize:(long long)arg3;
- (char *)getValuePtr:(id)arg1;
- (char *)setValuePtr:(id)arg1;
- (void)setValueIndex:(unsigned char)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (long long)dataSize;
- (void)setDataSize:(long long)arg1;
- (long long)cacheSize;
- (void)setCacheSize:(long long)arg1;
- (void).cxx_destruct;
@end
