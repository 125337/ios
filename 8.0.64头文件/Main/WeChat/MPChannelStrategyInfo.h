@interface MPChannelStrategyInfo : MMObject <PBCoding>
{
    BOOL _brandCellExposeUpdate; // +0x8
    BOOL _mainSessionExposeUpdate; // +0x9
    BOOL _enterBizSessionUpdate; // +0xa
    BOOL _enterVideoPageUpdate; // +0xb
    BOOL _autoSwitchDefaultLogo; // +0xc
    unsigned int _timelineInterval; // +0x10
    unsigned int _prefetchInterval; // +0x14
}
+ (void)PBArrayAdd_timelineInterval;
+ (void)PBArrayAdd_prefetchInterval;
+ (void)PBArrayAdd_brandCellExposeUpdate;
+ (void)PBArrayAdd_mainSessionExposeUpdate;
+ (void)PBArrayAdd_enterBizSessionUpdate;
+ (void)PBArrayAdd_enterVideoPageUpdate;
+ (void)PBArrayAdd_autoSwitchDefaultLogo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)timelineInterval;
- (void)setTimelineInterval:(unsigned int)arg1;
- (unsigned int)prefetchInterval;
- (void)setPrefetchInterval:(unsigned int)arg1;
- (BOOL)brandCellExposeUpdate;
- (void)setBrandCellExposeUpdate:(BOOL)arg1;
- (BOOL)mainSessionExposeUpdate;
- (void)setMainSessionExposeUpdate:(BOOL)arg1;
- (BOOL)enterBizSessionUpdate;
- (void)setEnterBizSessionUpdate:(BOOL)arg1;
- (BOOL)enterVideoPageUpdate;
- (void)setEnterVideoPageUpdate:(BOOL)arg1;
- (BOOL)autoSwitchDefaultLogo;
- (void)setAutoSwitchDefaultLogo:(BOOL)arg1;
@end
