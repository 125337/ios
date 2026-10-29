@interface MMFinderLiveShowBoxItemsGroupsView : UIView
{
    double _interval; // +0x8
    MMFinderLiveShowBoxItemsViewConfig * _config; // +0x10
    id /* block */ _onBecomeNoVisibleItemsForLimitDiscountInvalid; // +0x18
    NSTimer * _timer; // +0x20
    NSArray * _tuples; // +0x28
    MMFinderLiveShowBoxItemsGroupsViewTuple * _current; // +0x30
}
- (void)updateWithGroups:(id)arg1;
- (void)layoutSubviews;
- (void)updateTimer;
- (void)tryDisplayNext;
- (void)switchTo:(id)arg1;
- (void)cleanInvalidLimitDiscountIn:(id)arg1;
- (void)dealloc;
- (id)visibleShowBoxItems;
- (double)interval;
- (void)setInterval:(double)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id /* block */)onBecomeNoVisibleItemsForLimitDiscountInvalid;
- (void)setOnBecomeNoVisibleItemsForLimitDiscountInvalid:(id /* block */)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)tuples;
- (void)setTuples:(id)arg1;
- (id)current;
- (void)setCurrent:(id)arg1;
- (void).cxx_destruct;
@end

