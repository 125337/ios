@interface MMLocationCacheStorage : MMObject <PBCoding>
{
    NSMutableArray * _caches; // +0x8
}
+ (void)PBArrayAdd_caches;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)caches;
- (void)setCaches:(id)arg1;
- (void).cxx_destruct;
@end

