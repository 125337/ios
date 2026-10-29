@interface EmoticonLensLocalData : MMObject <PBCoding>
{
    NSMutableArray * _recentUsedLens; // +0x8
    NSMutableArray * _allLens; // +0x10
}
+ (void)PBArrayAdd_recentUsedLens;
+ (void)PBArrayAdd_allLens;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)recentUsedLens;
- (void)setRecentUsedLens:(id)arg1;
- (id)allLens;
- (void)setAllLens:(id)arg1;
- (void).cxx_destruct;
@end

