@interface MMScrollableActionSheetHorizontalScrollView : UIScrollView <MMScrollableActionSheetHorizontalItemViewDelegate>
{
    NSMutableArray * _itemInfoList; // +0x8
    double _topPadding; // +0x10
    double _bottomPadding; // +0x18
    id <MMScrollableActionSheetHorizontalScrollViewDelegate> _actionSheetDelegate; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (void)reset;
- (void)setHorizontalRowInfoList:(id)arg1;
- (void)addOrUpdateHorizontalRowItemInfo:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (void)setBottomPadding:(double)arg1;
- (double)calcuateMaxItemHeight;
- (double)calcuateScrollViewHeight;
- (long long)getItemInfoIndexWithItemType:(unsigned int)arg1;
- (id)generateItemViewForItemInfo:(id)arg1;
- (void)sortItemInfoList;
- (void)updateItemViewMap;
- (void)layoutSubviews;
- (void)onTappedItemInfo:(id)arg1;
- (id)itemInfoList;
- (void)setItemInfoList:(id)arg1;
- (double)topPadding;
- (double)bottomPadding;
- (id)actionSheetDelegate;
- (void)setActionSheetDelegate:(id)arg1;
- (void).cxx_destruct;
@end

