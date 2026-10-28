@interface JSMemoryStatistics : NSObject
{
    long long _offset; // +0x8
    MMMemoryLayout * _extraMemory; // +0x10
    MMMemoryLayout * _deprecatedExtraMemory; // +0x18
    MMMemoryLayout * _arrayBuffers; // +0x20
    MMMemoryLayout * _objectSpace; // +0x28
}
+ (void)initialize;
+ (unsigned long long)sourceVersion;
+ (id)heapJson;
+ (id)heapInfoWithJson:(id)arg1;
+ (void)setEnable:(BOOL)arg1;
+ (BOOL)isiPhone;
+ (void)setJson:(id)arg1 forVersion:(unsigned long long)arg2;
+ (id)memoryStatistics:(OpaqueJSContext *)arg1 callback:(void * *)arg2;
+ (unsigned long long)heapCapacityForContext:(OpaqueJSContext *)arg1;
- (id)initWithDictionary:(id)arg1 vm:(OpaqueJSContextGroup *)arg2;
- (void)setVM:(long long)arg1;
- (unsigned long long)extraMemorySize;
- (unsigned long long)heapCapacity;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (id)extraMemory;
- (void)setExtraMemory:(id)arg1;
- (id)deprecatedExtraMemory;
- (void)setDeprecatedExtraMemory:(id)arg1;
- (id)arrayBuffers;
- (void)setArrayBuffers:(id)arg1;
- (id)objectSpace;
- (void)setObjectSpace:(id)arg1;
- (void).cxx_destruct;
@end
