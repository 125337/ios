@interface TingLyricsManager : NSObject
{
    NSMutableDictionary * _resolverList; // +0x8
    NSMutableArray * _pullingLyricsList; // +0x10
}
- (id)resolverList;
- (id)pullingLyricsList;
- (void)addResolverForTingItem:(id)arg1;
- (void)addResolverForListenId:(id)arg1 presetLyric:(id)arg2;
- (void)addResolverForListenId:(id)arg1 recommendInfo:(id)arg2 presetLyric:(id)arg3;
- (void)addResolverForListenId:(id)arg1;
- (BOOL)addResolverFor:(id)arg1 withLyrics:(id)arg2;
- (id)resolverFor:(id)arg1;
- (id)lyricFor:(id)arg1 withCurrentTime:(double)arg2;
- (id)lyricsFor:(id)arg1 withCurrentTime:(double)arg2 preferCount:(unsigned long long)arg3;
- (void)setResolverList:(id)arg1;
- (void)setPullingLyricsList:(id)arg1;
- (void).cxx_destruct;
@end

