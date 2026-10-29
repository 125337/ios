@interface UnitRCSharedMemoryInt64 : UnitRCSharedMemoryBase
- (id)init;
- (id)initWithBuffer:(id)arg1;
- (id)initWithBuffer:(id)arg1 cacheSize:(long long)arg2;
- (long long)get;
- (long long)get:(id)arg1;
- (void)set:(long long)arg1;
- (void)set:(long long)arg1 index:(id)arg2;
@end
