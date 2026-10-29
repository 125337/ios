@interface MMFinderLiveKTVUserHeatInfo : MMFinderLiveKTVHeatInfo
{
    NSString * _liveMeetId; // +0x8
    unsigned long long _anchorHeatValue; // +0x10
    NSMutableDictionary * _singerHeatInfoDict; // +0x18
}
- (unsigned long long)liveHeatValue;
- (id)liveMeetId;
- (void)setLiveMeetId:(id)arg1;
- (unsigned long long)anchorHeatValue;
- (void)setAnchorHeatValue:(unsigned long long)arg1;
- (id)singerHeatInfoDict;
- (void)setSingerHeatInfoDict:(id)arg1;
- (void).cxx_destruct;
@end

