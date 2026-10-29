@interface JITRuntimeRemoteBuffer : NSObject
{
    long long _allocType; // +0x8
    NSData * _data; // +0x10
}
- (long long)allocType;
- (void)setAllocType:(long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

