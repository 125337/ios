@interface CBTAsstMoreTabView : UIView
{
    id <CBTAsstMoreTabViewDelegate> _delegate; // +0x8
    NSArray * _titles; // +0x10
    NSMutableArray * _buttonList; // +0x18
    UIView * _indicatorView; // +0x20
    unsigned long long _selectedIndex; // +0x28
}
- (id)initWithTitles:(id)arg1;
- (void)buildSubviews;
- (void)layoutSubviews;
- (void)onTabButtonTap:(id)arg1;
- (void)updateSelectedIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)updateIndicatorAnimated:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titles;
- (void)setTitles:(id)arg1;
- (id)buttonList;
- (void)setButtonList:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
