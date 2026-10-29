@interface MMMenuContentView : UIView <MMMenuItemViewDelegate>
{
    id <MMMenuContentViewDelegate> _delegate; // +0x8
    MMMenuItemData * _menuData; // +0x10
    UIColor * _customBackgroundColor; // +0x18
    UIView * _menuItemContainerView; // +0x20
    UIImageView * _arrowImageView; // +0x28
    NSMutableArray * _menuItemViews; // +0x30
    NSMutableArray * _separatorViews; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithData:(id)arg1 animated:(BOOL)arg2;
- (void)makeItemsView:(id)arg1;
- (void)addSeparatorLineInY:(double)arg1;
- (void)addSeparatorLineInY:(double)arg1 left:(double)arg2 right:(double)arg3;
- (void)layoutSubviews;
- (void)updateSubviewsFrame;
- (void)onMenuViewDidShow;
- (void)onMenuItemSelected:(id)arg1 itemView:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)menuData;
- (void)setMenuData:(id)arg1;
- (id)customBackgroundColor;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)menuItemContainerView;
- (void)setMenuItemContainerView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)menuItemViews;
- (void)setMenuItemViews:(id)arg1;
- (id)separatorViews;
- (void)setSeparatorViews:(id)arg1;
- (void).cxx_destruct;
@end

