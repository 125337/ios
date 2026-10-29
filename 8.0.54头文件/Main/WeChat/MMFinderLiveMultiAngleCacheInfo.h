@interface MMFinderLiveMultiAngleCacheInfo : NSObject <PBCoding>
{
    BOOL _show; // +0x8
    unsigned long long _liveId; // +0x10
}
+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_show;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (BOOL)show;
- (void)setShow:(BOOL)arg1;
@end

