@interface WCFinderNativeDramaFeedStream : NSObject
{
    WCFinderNativeDramaStreamSeries * _playingSeries; // +0x8
    NSMutableArray * _allSeries; // +0x10
    NSMutableArray * _enqueueSeries; // +0x18
    NSMutableArray * _displayFeed; // +0x20
    NSArray * _tempJumpFeed; // +0x28
}
- (id)init;
- (id)setupWithInitialSeries:(id)arg1;
- (id)appendSeries:(id)arg1;
- (id)appendEpisodes:(id)arg1 toSeries:(id)arg2 direction:(unsigned long long)arg3;
- (id)reloadSeries:(unsigned long long)arg1 withEpisodes:(id)arg2;
- (id)insertFeed:(id)arg1 afterEpisode:(unsigned long long)arg2;
- (id)enterJumpModeFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)exitJumpMode;
- (id)updateOrAppendFeed:(id)arg1 toSeries:(id)arg2;
- (id)seriesForFeed:(id)arg1;
- (void)preloadSeries:(id)arg1;
- (id)enqueueCachedSeriesWithDirection:(unsigned long long)arg1;
- (id)currentFeed;
- (void)_rebuildDisplayFeed;
- (id)seriesWithDramaID:(unsigned long long)arg1;
- (id)performBatchUpdates:(id /* block */)arg1;
- (void)changeFocusIndex:(long long)arg1 tid:(id)arg2;
- (id)playingSeries;
- (void)setPlayingSeries:(id)arg1;
- (id)allSeries;
- (void)setAllSeries:(id)arg1;
- (id)enqueueSeries;
- (void)setEnqueueSeries:(id)arg1;
- (id)displayFeed;
- (void)setDisplayFeed:(id)arg1;
- (id)tempJumpFeed;
- (void)setTempJumpFeed:(id)arg1;
- (void).cxx_destruct;
@end
