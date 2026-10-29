@interface WCListHybridCellView : WCListBaseCellView
{
    UIView * _itemContainerView; // +0x98
}
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
- (void)initView;
- (void)reloadItemContainerView;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onClickEvent;
- (void)updateAccessibility;
- (void).cxx_destruct;
@end
