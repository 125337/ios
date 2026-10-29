@interface ZDirectBuffer : NSObject
{
    void * _bytes; // +0x8
    unsigned long long _length; // +0x10
    void * _impl; // +0x18
}
+ (id)createWithImpl:(void *)arg1;
+ (id)createWithBytes:(void *)arg1 length:(unsigned long long)arg2;
+ (id)createWithBytesOwned:(void *)arg1 length:(unsigned long long)arg2;
+ (id)createWithBytes:(void *)arg1 length:(unsigned long long)arg2 deleter:(id /* block */)arg3;
- (id)initWithImpl:(void *)arg1;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesOwned:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 deleter:(id /* block */)arg3;
- (void)dealloc;
- (void *)bytes;
- (unsigned long long)length;
- (void *)impl;
@end
