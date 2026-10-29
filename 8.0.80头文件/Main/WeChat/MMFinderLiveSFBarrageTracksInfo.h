@interface MMFinderLiveSFBarrageTracksInfo : NSObject
{
    NSArray * _trackPositionYPercentList; // +0x8
    NSMutableArray * _allTracksInfo; // +0x10
    NSMutableArray * _allBarrageList; // +0x18
    MMFinderLiveSFBarrageItemInfo * _currentTappedBarrageItem; // +0x20
    NSMutableArray * _listOfBarrageAfterTapped; // +0x28
    double _barrageContentWidth; // +0x30
    double _barrageContentHeight; // +0x38
    unsigned long long _trackCount; // +0x40
    id /* block */ _invokeReRunBlock; // +0x48
    id /* block */ _hasBarrageMovingAtTrackCallback; // +0x50
}
- (id)initWithContentSize:(CGSize)arg1 trackPosYPercentList:(id)arg2;
- (void)configBarrageTrackInfos;
- (id)createSingleTrack:(double)arg1;
- (void)updateBarrageTrackInfosPositionY;
- (void)setBarrageContentWidth:(double)arg1;
- (void)setBarrageContentHeight:(double)arg1;
- (id)getCurrentVisibleSortedBarrageItemList;
- (BOOL)hasAvailableTrackInfo;
- (void)updateTrackPositionYPercentList:(id)arg1;
- (id)trackPositionYPercentList;
- (void)setTrackPositionYPercentList:(id)arg1;
- (id)allTracksInfo;
- (void)setAllTracksInfo:(id)arg1;
- (id)allBarrageList;
- (void)setAllBarrageList:(id)arg1;
- (id)currentTappedBarrageItem;
- (void)setCurrentTappedBarrageItem:(id)arg1;
- (id)listOfBarrageAfterTapped;
- (void)setListOfBarrageAfterTapped:(id)arg1;
- (double)barrageContentWidth;
- (double)barrageContentHeight;
- (unsigned long long)trackCount;
- (void)setTrackCount:(unsigned long long)arg1;
- (id /* block */)invokeReRunBlock;
- (void)setInvokeReRunBlock:(id /* block */)arg1;
- (id /* block */)hasBarrageMovingAtTrackCallback;
- (void)setHasBarrageMovingAtTrackCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
