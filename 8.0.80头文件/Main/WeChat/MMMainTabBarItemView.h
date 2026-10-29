@interface MMMainTabBarItemView : WCTabBarItemView
{
    MMTabBarItemView * _itemView; // +0x8
    MMTabbarItem * _legacyItem; // +0x10
}
- (id)initWithItem:(id)arg1 legacyItem:(id)arg2;
- (id)accessibilityValue;
- (void)setSelected:(BOOL)arg1;
- (void)copyTransitionVisualStateFromView:(id)arg1;
- (id)itemView;
- (id)legacyItem;
- (void).cxx_destruct;
@end
