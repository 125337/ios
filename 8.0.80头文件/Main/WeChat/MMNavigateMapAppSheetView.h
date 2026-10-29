@interface MMNavigateMapAppSheetView : MMPageSheetBaseView
{
    int _itemCount; // +0x8
    id <MMNavigateMapAppDelegate> _delegate; // +0x10
    double _screenWidth; // +0x18
    NSString * _title; // +0x20
    UIView * _containerView; // +0x28
    UIScrollView * _itemListView; // +0x30
    double _maxHeight; // +0x38
    double _tabBarHeight; // +0x40
    double _itemContentHeight; // +0x48
    double _newViewY; // +0x50
}
- (id)initWithTitle:(id)arg1;
- (void)initConfigs;
- (void)initView;
- (void)addItemView:(id)arg1;
- (void)onItemViewTap:(id)arg1;
- (void)onCloseMenu:(id)arg1;
- (void)show;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)screenWidth;
- (void)setScreenWidth:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)itemListView;
- (void)setItemListView:(id)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (double)tabBarHeight;
- (void)setTabBarHeight:(double)arg1;
- (double)itemContentHeight;
- (void)setItemContentHeight:(double)arg1;
- (double)newViewY;
- (void)setNewViewY:(double)arg1;
- (int)itemCount;
- (void)setItemCount:(int)arg1;
- (void).cxx_destruct;
@end
