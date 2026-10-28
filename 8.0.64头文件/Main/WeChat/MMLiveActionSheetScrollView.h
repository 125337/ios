@interface MMLiveActionSheetScrollView : UIScrollView
{
    id <MMLiveActionSheetScrollViewDelegate> _actionSheetDelegate; // +0x8
    UIView * _customView; // +0x10
    NSMutableArray * _itemViewArray; // +0x18
}
- (long long)itemsCount;
- (id)itemViewArray;
- (void)reloadItems:(id)arg1 itemDelegate:(id)arg2;
- (void)setCustomView:(id)arg1;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (void)layoutSubviews;
- (id)actionSheetDelegate;
- (void)setActionSheetDelegate:(id)arg1;
- (id)customView;
- (void)setItemViewArray:(id)arg1;
- (void).cxx_destruct;
@end
