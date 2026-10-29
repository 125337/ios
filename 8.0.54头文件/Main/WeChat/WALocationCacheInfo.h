@interface WALocationCacheInfo : MMObject <PBCoding>
{
    NSMutableArray * _locationArr; // +0x8
}
+ (void)PBArrayAdd_locationArr;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)locationArr;
- (void)setLocationArr:(id)arg1;
- (void).cxx_destruct;
@end

