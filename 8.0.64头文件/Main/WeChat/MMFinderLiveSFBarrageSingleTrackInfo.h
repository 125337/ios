@interface MMFinderLiveSFBarrageSingleTrackInfo : NSObject
{
    BOOL _unValid; // +0x8
    BOOL _isAvailable; // +0x9
    double _positionY; // +0x10
    double _positionYPercent; // +0x18
    NSMutableArray * _currVisibleBarrageItemList; // +0x20
    id /* block */ _hasBarrageMovingCallback; // +0x28
}
- (id)currVisibleBarrageItemList;
- (id)lastBarrageItemInfo;
- (id)lastMovingBarrageItemInfo;
- (BOOL)canUsed;
- (void)addBarrageItem:(id)arg1;
- (void)removeBarrageItem:(id)arg1;
- (BOOL)unValid;
- (void)setUnValid:(BOOL)arg1;
- (BOOL)isAvailable;
- (void)setIsAvailable:(BOOL)arg1;
- (double)positionY;
- (void)setPositionY:(double)arg1;
- (double)positionYPercent;
- (void)setPositionYPercent:(double)arg1;
- (void)setCurrVisibleBarrageItemList:(id)arg1;
- (id /* block */)hasBarrageMovingCallback;
- (void)setHasBarrageMovingCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
