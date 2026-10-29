@interface MMFICImageTableEntry : NSObject
{
    void * _bytes; // +0x8
    unsigned long long _entryLength; // +0x10
    unsigned long long _imageLength; // +0x18
    NSMutableArray * _deallocBlocks; // +0x20
}
+ (unsigned long long)entryLengthWithImageLength:(unsigned long long)arg1;
- (void *)imageAddress;
- (struct)entityUUIDBytes;
- (void)setEntityUUIDBytes:(struct)arg1;
- (struct)sourceImageUUIDBytes;
- (void)setSourceImageUUIDBytes:(struct)arg1;
- (struct *)_metadata;
- (id)initWithImageTableChunk:(id)arg1 bytes:(void *)arg2 entryLength:(unsigned long long)arg3 imageLength:(unsigned long long)arg4;
- (void)dealloc;
- (void)executeBlockOnDealloc:(id /* block */)arg1;
- (BOOL)flush;
- (unsigned long long)imageLength;
- (void).cxx_destruct;
@end
