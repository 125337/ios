@interface RingToneVideoFeedViewModel : NSObject
{
    unsigned int _offset; // +0x8
    NSMutableArray * _rings; // +0x10
    RingToneVideoFeedViewController * _currentVC; // +0x18
    unsigned long long _autoPlaySection; // +0x20
    NSMutableSet * _feedIDs; // +0x28
    NSMutableArray * _preloadArray; // +0x30
}
- (id)init;
- (void)refreshForTableView;
- (id)fetchRecommendRings:(unsigned long long)arg1;
- (void)addRingForRecommendList:(id)arg1;
- (void)preloadVideoItems:(id)arg1;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)stopAllPreloadVideoItems;
- (void)reportRecommendRingBackExpose:(long long)arg1 end:(long long)arg2;
- (void)checkAutoPlayWhenFirstAppear;
- (void)checkAutoPlayWhenAppear;
- (void)checkAutoPlayWhenDataReload;
- (void)checkAutoPlayWhenScroll:(BOOL)arg1;
- (void)startPlayWithIndexPath:(id)arg1;
- (void)stopPlayWithIndexPath:(id)arg1 fakeStop:(BOOL)arg2;
- (void)stopCurrentPlay:(BOOL)arg1;
- (void)stopAllPlay;
- (double)getCurrentPlayTime:(id)arg1;
- (void)setAutoPlaySection:(unsigned long long)arg1;
- (id)rings;
- (void)setRings:(id)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (unsigned long long)autoPlaySection;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (id)feedIDs;
- (void)setFeedIDs:(id)arg1;
- (id)preloadArray;
- (void)setPreloadArray:(id)arg1;
- (void).cxx_destruct;
@end

