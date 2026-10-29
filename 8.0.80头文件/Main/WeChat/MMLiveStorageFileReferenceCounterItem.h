@interface MMLiveStorageFileReferenceCounterItem : NSObject
{
    unsigned long long _count; // +0x8
    unsigned long long _size; // +0x10
}
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
@end
