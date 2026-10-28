@interface BleWriteRequestArray : NSObject
{
    NSArray * _array; // +0x8
    unsigned long long _processCount; // +0x10
}
- (id)initWithArray:(id)arg1;
- (id)firstObject;
- (unsigned long long)count;
- (id)array;
- (void)setArray:(id)arg1;
- (unsigned long long)processCount;
- (void)setProcessCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
