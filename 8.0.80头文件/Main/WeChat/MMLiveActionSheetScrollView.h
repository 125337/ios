@interface MMLiveActionSheetScrollView : UIScrollView
{
    BOOL _alwaysAlignLeft; // +0x8
    id <MMLiveActionSheetScrollViewDelegate> _actionSheetDelegate; // +0x10
    UIView * _customView; // +0x18
    NSMutableArray * _itemViewArray; // +0x20
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
- (BOOL)alwaysAlignLeft;
- (void)setAlwaysAlignLeft:(BOOL)arg1;
- (void)setItemViewArray:(id)arg1;
- (void).cxx_destruct;
@end
