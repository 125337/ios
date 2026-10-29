@interface MMActionSheetScrollView : UIScrollView
{
    id <MMActionSheetScrollViewDelegate> _actionSheetDelegate; // +0x8
    UIView * _customView; // +0x10
    NSMutableArray * _itemViewArray; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tryTriggerExposeForItemView:(id)arg1;
- (void)dealloc;
- (id)itemViewArray;
- (double)iconMargin;
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
