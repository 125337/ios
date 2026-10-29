@interface MMTabbarItem : UITabBarItem <WCTabBarItemProvider>
{
    NSString * _normalTitle; // +0x8
    UIColor * _normalTitleColor; // +0x10
    UIColor * _selectedTitleColor; // +0x18
    UIImage * _normalImage; // +0x20
    UIImage * _highlightImage; // +0x28
    NSURL * _normalImageUrl; // +0x30
    NSURL * _normalImageDarkUrl; // +0x38
    NSURL * _highlightImageUrl; // +0x40
    NSURL * _highlightImageDarkUrl; // +0x48
    long long _index; // +0x50
    NSValue * _customSize; // +0x58
    long long _tabIndex; // +0x60
}
- (id)customTabBarItem;
- (id)tabBarItemViewWithItem:(id)arg1;
- (id)initWithTitle:(id)arg1 normalImage:(id)arg2 selectedImage:(id)arg3;
- (id)initWithTitle:(id)arg1 normalImageUrl:(id)arg2 normalImageDarkUrL:(id)arg3 selectedImageUrl:(id)arg4 selectedImageDarkUrl:(id)arg5;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)normalTitle;
- (void)setNormalTitle:(id)arg1;
- (id)normalTitleColor;
- (void)setNormalTitleColor:(id)arg1;
- (id)selectedTitleColor;
- (void)setSelectedTitleColor:(id)arg1;
- (id)normalImage;
- (void)setNormalImage:(id)arg1;
- (id)highlightImage;
- (void)setHighlightImage:(id)arg1;
- (id)normalImageUrl;
- (void)setNormalImageUrl:(id)arg1;
- (id)normalImageDarkUrl;
- (void)setNormalImageDarkUrl:(id)arg1;
- (id)highlightImageUrl;
- (void)setHighlightImageUrl:(id)arg1;
- (id)highlightImageDarkUrl;
- (void)setHighlightImageDarkUrl:(id)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)customSize;
- (void)setCustomSize:(id)arg1;
- (long long)tabIndex;
- (void)setTabIndex:(long long)arg1;
- (void).cxx_destruct;
@end
