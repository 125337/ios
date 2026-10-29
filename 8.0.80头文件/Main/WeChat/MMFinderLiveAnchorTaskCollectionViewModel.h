@interface MMFinderLiveAnchorTaskCollectionViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _isScrolling; // +0x8
    BOOL _isAutoScrollInterrupt; // +0x9
    unsigned int _scrollInterval; // +0xc
    UICollectionView * _collectionView; // +0x10
    id /* block */ _selectCallback; // +0x18
    NSMutableArray * _anchorTaskActivities; // +0x20
    FinderLiveQuestActivity * _lastVisibleActiviy; // +0x28
    MMTimer * _timer; // +0x30
}
+ (void)reportForActiviyExpose:(id)arg1;
+ (void)reportForActiviyClick:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)updateAnchorTaskActivities:(id)arg1;
- (void)startScrollWithInterval:(unsigned int)arg1;
- (void)cancelAutoScroll;
- (void)invokeAutoScroll;
- (void)scrollCollectionViewToNext;
- (void)onAnchorTaskActivityDidSelect:(id)arg1;
- (id)anchorTaskActivities;
- (void)setIsScrolling:(BOOL)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)deleteActivityAtIndex:(unsigned long long)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id /* block */)selectCallback;
- (void)setSelectCallback:(id /* block */)arg1;
- (void)setAnchorTaskActivities:(id)arg1;
- (unsigned int)scrollInterval;
- (void)setScrollInterval:(unsigned int)arg1;
- (BOOL)isScrolling;
- (id)lastVisibleActiviy;
- (void)setLastVisibleActiviy:(id)arg1;
- (BOOL)isAutoScrollInterrupt;
- (void)setIsAutoScrollInterrupt:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
