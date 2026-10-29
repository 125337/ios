@interface MMFinderLiveMinimizationData : MMObject <PBCoding>
{
    unsigned long long _liveId; // +0x8
    WCFinderDataItem * _finderDataItem; // +0x10
    WCFinderLiveShareItem * _finderLiveShareItem; // +0x18
}
+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_finderDataItem;
+ (void)PBArrayAdd_finderLiveShareItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithLiveId:(unsigned long long)arg1 dataItem:(id)arg2;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)finderLiveShareItem;
- (void)setFinderLiveShareItem:(id)arg1;
- (void).cxx_destruct;
@end

