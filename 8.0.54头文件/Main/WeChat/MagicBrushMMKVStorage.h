@interface MagicBrushMMKVStorage : NSObject
{
    NSString * _mBizName; // +0x8
    MemoryMappedKV * _mMemoryMappedKV; // +0x10
    unsigned long long _mMaxStorageSize; // +0x18
}
- (id)initWithBizName:(id)arg1 bizName:(id)arg2 prefix:(id)arg3;
- (id)getAllKeys;
- (id)get:(id)arg1;
- (id)set:(id)arg1 data:(id)arg2 dataType:(id)arg3;
- (id)remove:(id)arg1;
- (void)clear;
- (id)setInner:(id)arg1 data:(id)arg2 dataType:(id)arg3 dataSize:(long long)arg4 checkQuota:(BOOL)arg5;
- (long long)calculateDataSize:(id)arg1 data:(id)arg2;
- (long long)getDataSize:(id)arg1;
- (BOOL)willReachQuota:(long long)arg1;
- (long long)getQuota;
- (long long)appendTotalDataSize:(long long)arg1;
- (void)setTotalDataSize:(id)arg1 size:(long long)arg2;
- (long long)getTotalDataSize;
- (id)splitValue:(id)arg1;
- (id)mBizName;
- (void)setMBizName:(id)arg1;
- (id)mMemoryMappedKV;
- (void)setMMemoryMappedKV:(id)arg1;
- (unsigned long long)mMaxStorageSize;
- (void)setMMaxStorageSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

