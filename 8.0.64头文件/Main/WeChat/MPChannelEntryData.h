@interface MPChannelEntryData : MMObject <PBCoding>
{
    unsigned long long _entryOption; // +0x8
    MPChannelTopBarInfo * _topBarInfo; // +0x10
    MPChannelTimelineInfo * _timelineInfo; // +0x18
}
+ (void)PBArrayAdd_entryOption;
+ (void)PBArrayAdd_topBarInfo;
+ (void)PBArrayAdd_timelineInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned long long)entryOption;
- (void)setEntryOption:(unsigned long long)arg1;
- (id)topBarInfo;
- (void)setTopBarInfo:(id)arg1;
- (id)timelineInfo;
- (void)setTimelineInfo:(id)arg1;
- (void).cxx_destruct;
@end
