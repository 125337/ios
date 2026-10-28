@interface GCDAsyncSocketPreBuffer : NSObject
{
    char * preBuffer; // +0x8
    unsigned long long preBufferSize; // +0x10
    char * readPointer; // +0x18
    char * writePointer; // +0x20
}
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)dealloc;
- (void)ensureCapacityForWrite:(unsigned long long)arg1;
- (unsigned long long)availableBytes;
- (char *)readBuffer;
- (void)getReadBuffer:(char * *)arg1 availableBytes:(unsigned long long *)arg2;
- (void)didRead:(unsigned long long)arg1;
- (unsigned long long)availableSpace;
- (char *)writeBuffer;
- (void)getWriteBuffer:(char * *)arg1 availableSpace:(unsigned long long *)arg2;
- (void)didWrite:(unsigned long long)arg1;
- (void)reset;
@end
