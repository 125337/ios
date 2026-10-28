@interface MinimizeStateContainerView : UIView
{
    BOOL _useLargeStyle; // +0x8
    NSMutableDictionary * _dicPassiveState2CacheView; // +0x10
    NSArray * _stateViewList; // +0x18
    UIImageView * _moreView; // +0x20
    CGSize _calculatedSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)highLightedViewForTaskData:(id)arg1;
- (void)updateWithStateList:(id)arg1;
- (void)animateUpdateWithStateList:(id)arg1 duration:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)genStateViewList:(id)arg1;
- (id)getPassiveStateView:(unsigned int)arg1 withStateTask:(id)arg2;
- (id)passiveStateCacheKey:(unsigned int)arg1 withTask:(id)arg2;
- (id)moreView;
- (BOOL)useLargeStyle;
- (void)setUseLargeStyle:(BOOL)arg1;
- (CGSize)calculatedSize;
- (void)setCalculatedSize:(CGSize)arg1;
- (id)dicPassiveState2CacheView;
- (void)setDicPassiveState2CacheView:(id)arg1;
- (id)stateViewList;
- (void)setStateViewList:(id)arg1;
- (void)setMoreView:(id)arg1;
- (void).cxx_destruct;
@end
