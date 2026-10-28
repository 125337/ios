@interface MMScrollableActionSheetContainerUpScrollView : UIScrollView <MMScrollableActionSheetHorizontalScrollViewDelegate>
{
    double _cachedUpScrollViewContentHeight; // +0x8
    id <MMScrollableActionSheetContainerUpScrollViewDelegate> _actionSheetDelegate; // +0x10
    UIView<MMScrollableActionSheetCustomHeaderViewInterface> * _customHeaderView; // +0x18
    UIView<MMScrollableActionSheetCustomFooterViewInterface> * _customFooterView; // +0x20
    NSMutableArray * _horizontalScrollViewList; // +0x28
    NSMutableDictionary * _seperatorViewMap; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setCustomFooterView:(id)arg1;
- (void)setHorizontalRowInfoList:(id)arg1 atRow:(unsigned int)arg2;
- (void)addOrUpdateHorizontalRowItemInfo:(id)arg1 atRow:(unsigned int)arg2;
- (void)setNeedRecalcuateUpScrollViewContentHeight;
- (double)calcuteUpScrollViewContentHeight;
- (id)getOrCreateHorizontalScrollViewAndSeperatorViewAtRow:(unsigned int)arg1;
- (void)allSeperatorViewsRemoveFromSuperview;
- (void)setSeperatorViewY:(double)arg1 atRow:(long long)arg2;
- (void)layoutSubviews;
- (double)layoutCustomHeaderViewAndHorizontalScrollViewsAndFooterView;
- (void)onTappedItemInfo:(id)arg1;
- (double)cachedUpScrollViewContentHeight;
- (void)setCachedUpScrollViewContentHeight:(double)arg1;
- (id)actionSheetDelegate;
- (void)setActionSheetDelegate:(id)arg1;
- (id)customHeaderView;
- (id)customFooterView;
- (id)horizontalScrollViewList;
- (void)setHorizontalScrollViewList:(id)arg1;
- (id)seperatorViewMap;
- (void)setSeperatorViewMap:(id)arg1;
- (void).cxx_destruct;
@end
