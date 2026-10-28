@interface MMFICImageTableChunk : NSObject
{
    unsigned long long _index; // +0x8
    void * _bytes; // +0x10
    unsigned long long _length; // +0x18
    long long _fileOffset; // +0x20
}
- (id)initWithFileDescriptor:(int)arg1 fileOffset:(unsigned long long)arg2 index:(unsigned long long)arg3 length:(unsigned long long)arg4;
- (void)dealloc;
- (void *)bytes;
- (unsigned long long)index;
- (unsigned long long)length;
@end
