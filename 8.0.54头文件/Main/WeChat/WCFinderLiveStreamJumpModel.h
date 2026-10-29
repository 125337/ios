@interface WCFinderLiveStreamJumpModel : NSObject
{
    BOOL _isFromLiveComple; // +0x8
    WCFinderLiveTabInfo * _liveTab; // +0x10
    NSString * _relatedWording; // +0x18
}
+ (id)finderLiveStreamJumpModelFrom:(id)arg1;
- (id)toFinderLiveStreamJumper;
- (id)liveTab;
- (void)setLiveTab:(id)arg1;
- (id)relatedWording;
- (void)setRelatedWording:(id)arg1;
- (BOOL)isFromLiveComple;
- (void)setIsFromLiveComple:(BOOL)arg1;
- (void).cxx_destruct;
@end

