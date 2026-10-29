@interface WCFinderLiveHomePageAutoPlayManager : NSObject
{
    unsigned long long _maxPlayingUnitCount; // +0x8
    id <WCFinderLiveHomePageAutoPlayUnitDelegate> _delegate; // +0x10
    NSMutableArray * _internalPlayingUnits; // +0x18
}
- (id)init;
- (id)currentPlayingUnits;
- (BOOL)isPlaying;
- (void)updateWithPlayUnits:(id)arg1;
- (void)stopAll;
- (void)stopPlayAtIndexPath:(id)arg1 inSectionVM:(id)arg2;
- (id)allPlayingIndexPaths;
- (BOOL)isPlayingIndexPath:(id)arg1;
- (id)description;
- (void)adjustAndReplenishUnit:(id)arg1 deleteIndexPath:(id)arg2;
- (void)removeUnit:(id)arg1;
- (unsigned long long)maxPlayingUnitCount;
- (void)setMaxPlayingUnitCount:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)internalPlayingUnits;
- (void)setInternalPlayingUnits:(id)arg1;
- (void).cxx_destruct;
@end
