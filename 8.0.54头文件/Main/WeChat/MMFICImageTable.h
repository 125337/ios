@interface MMFICImageTable : NSObject
{
    NSRecursiveLock * _lock; // +0x8
    MMFICImageFormat * _imageFormat; // +0x10
    FICImageTableMetadata * _metaData; // +0x18
    double _screenScale; // +0x20
    unsigned long long _imageRowLength; // +0x28
    CGColorSpace * _colorSpace; // +0x30
    NSString * _filePath; // +0x38
    int _fileDescriptor; // +0x40
    long long _fileLength; // +0x48
    unsigned int _entryCount; // +0x50
    long long _entryLength; // +0x58
    unsigned int _entriesPerChunk; // +0x60
    long long _imageLength; // +0x68
    unsigned long long _chunkLength; // +0x70
    unsigned int _chunkCount; // +0x78
    void * _chunkCache; // +0x80
    NSCountedSet * _chunkSet; // +0x88
    int tableUsedCount; // +0x90
}
- (id)tableFilePath;
- (id)metadataFilePath;
- (id)initWithFormat:(id)arg1;
- (void)dealloc;
- (void)setEntryForEntityUUID:(id)arg1 imageDrawingBlock:(id /* block */)arg2;
- (id)getImageForEntityUUID:(id)arg1 isNeedMemoryCache:(BOOL)arg2;
- (void)deleteEntryForEntityUUID:(id)arg1;
- (id)_cachedChunkAtIndex:(long long)arg1;
- (void)_setCachedChunk:(id)arg1 index:(long long)arg2;
- (id)_chunkAtIndex:(long long)arg1;
- (void)_setEntryCount:(unsigned int)arg1;
- (id)_entryDataAtIndex:(unsigned long long)arg1;
- (void)_entryWasDeallocatedFromChunk:(id)arg1;
- (id)_entryDataForEntityUUID:(id)arg1;
- (void)reset;
- (void)cleanupFICImgInMemory;
- (BOOL)canImageTableRemoveLocalCache;
- (int)tableUsedCount;
- (void)setTableUsedCount:(int)arg1;
- (void).cxx_destruct;
@end

