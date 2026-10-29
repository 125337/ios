@interface WCEliminatedSlotMMKV : MMObject
{
    unsigned int _slotCount; // +0x8
    unsigned int _slotTimeSize; // +0xc
    unsigned int _readBufferCount; // +0x10
    NSString * _slotMapId; // +0x18
}
- (id)initWithSlotMMKVMapId:(id)arg1 slotCount:(unsigned int)arg2 slotTimeSize:(unsigned int)arg3 readBufferCount:(unsigned int)arg4;
- (id)initWithSlotMMKVMapId:(id)arg1 expiredTime:(unsigned int)arg2;
- (id)init;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)setInt32:(int)arg1 forKey:(id)arg2;
- (BOOL)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (BOOL)setInt64:(long long)arg1 forKey:(id)arg2;
- (BOOL)setUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (BOOL)setFloat:(float)arg1 forKey:(id)arg2;
- (BOOL)setDouble:(double)arg1 forKey:(id)arg2;
- (id)getObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)getArrayOfValueType:(Class)arg1 forKey:(id)arg2;
- (id)getStringForKey:(id)arg1;
- (id)getStringForKey:(id)arg1 defaultValue:(id)arg2;
- (BOOL)getBoolForKey:(id)arg1;
- (BOOL)getBoolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (int)getInt32ForKey:(id)arg1;
- (int)getInt32ForKey:(id)arg1 defaultValue:(int)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (unsigned int)getUInt32ForKey:(id)arg1 defaultValue:(unsigned int)arg2;
- (long long)getInt64ForKey:(id)arg1;
- (long long)getInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (unsigned long long)getUInt64ForKey:(id)arg1;
- (unsigned long long)getUInt64ForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (float)getFloatForKey:(id)arg1;
- (float)getFloatForKey:(id)arg1 defaultValue:(float)arg2;
- (double)getDoubleForKey:(id)arg1;
- (double)getDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (id)getDateForKey:(id)arg1;
- (id)getDateForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getDataForKey:(id)arg1;
- (id)getDataForKey:(id)arg1 defaultValue:(id)arg2;
- (id)currentMMKVForWrite;
- (id)orderlyMMKvArrayInReadBuffer;
- (id)slotMMKVWithIndex:(unsigned int)arg1;
- (void)removeValueForKey:(id)arg1;
- (void)clear;
- (BOOL)containsKey:(id)arg1;
- (BOOL)isSetterKeyValid:(id)arg1;
- (BOOL)isGetterKeyValid:(id)arg1;
- (id)slotMapId;
- (void)setSlotMapId:(id)arg1;
- (unsigned int)slotCount;
- (void)setSlotCount:(unsigned int)arg1;
- (unsigned int)slotTimeSize;
- (void)setSlotTimeSize:(unsigned int)arg1;
- (unsigned int)readBufferCount;
- (void)setReadBufferCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

