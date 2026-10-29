@interface MMUnderlineTabsView : UIControl
{
    BOOL _disableBottomLine; // +0x8
    UIColor * _underlineDefaultColor; // +0x10
    double _underlineOffset; // +0x18
    double _tabSpacing; // +0x20
    unsigned long long _selectedTabIndex; // +0x28
    UIColor * _underlineColor; // +0x30
    UIView * _backgroundView; // +0x38
    UIView * _contentView; // +0x40
    UIView * _underlineView; // +0x48
    NSArray * _tabItems; // +0x50
    NSMutableArray * _itemInfoList; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (unsigned long long)numberOfTabItems;
- (double)preferWidth;
- (id)tabItemAtIndex:(unsigned long long)arg1;
- (void)updateWithTabItems:(id)arg1;
- (void)layoutTabViewWithTabInfo:(id)arg1;
- (void)setContentViewBackgroundColor:(id)arg1;
- (void)setUnderlineColor:(id)arg1;
- (void)layoutUnderlineViewWithTabInfo:(id)arg1;
- (void)layoutSubviews;
- (void)setSelectedTabIndex:(unsigned long long)arg1;
- (void)setSelectedTabIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)underlineDefaultColor;
- (void)setUnderlineDefaultColor:(id)arg1;
- (double)underlineOffset;
- (void)setUnderlineOffset:(double)arg1;
- (double)tabSpacing;
- (void)setTabSpacing:(double)arg1;
- (BOOL)disableBottomLine;
- (void)setDisableBottomLine:(BOOL)arg1;
- (unsigned long long)selectedTabIndex;
- (id)underlineColor;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)underlineView;
- (void)setUnderlineView:(id)arg1;
- (id)tabItems;
- (void)setTabItems:(id)arg1;
- (id)itemInfoList;
- (void)setItemInfoList:(id)arg1;
- (void).cxx_destruct;
@end
