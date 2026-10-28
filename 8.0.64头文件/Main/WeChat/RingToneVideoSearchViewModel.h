@interface RingToneVideoSearchViewModel : NSObject
{
    unsigned int _dataOffset; // +0x8
    NSMutableArray * _rings; // +0x10
    RingToneVideoSearchViewController * _currentVC; // +0x18
    unsigned long long _autoPlaySection; // +0x20
    unsigned long long _searchRequestID; // +0x28
    NSMutableSet * _feedIDs; // +0x30
    NSString * _curQuery; // +0x38
    NSMutableArray * _preloadArray; // +0x40
}
- (id)init;
- (void)clearData;
- (void)preloadVideoItems:(id)arg1;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)stopAllPreloadVideoItems;
- (id)searchRing:(id)arg1 isFirstPage:(BOOL)arg2;
- (id)searchMusicRing:(id)arg1;
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
- (void)reportRecommendRingBackExpose:(long long)arg1 end:(long long)arg2;
- (id)rings;
- (void)setRings:(id)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (unsigned long long)autoPlaySection;
- (unsigned long long)searchRequestID;
- (void)setSearchRequestID:(unsigned long long)arg1;
- (unsigned int)dataOffset;
- (void)setDataOffset:(unsigned int)arg1;
- (id)feedIDs;
- (void)setFeedIDs:(id)arg1;
- (id)curQuery;
- (void)setCurQuery:(id)arg1;
- (id)preloadArray;
- (void)setPreloadArray:(id)arg1;
- (void).cxx_destruct;
@end
