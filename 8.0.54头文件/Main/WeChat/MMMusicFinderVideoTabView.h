@interface MMMusicFinderVideoTabView : UIView
{
    id <MMMusicFinderVideoTabViewDelegate> _delegate; // +0x8
    NSMutableArray * _tabButtons; // +0x10
    NSMutableArray * _tabTitles; // +0x18
    unsigned long long _currentIndex; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateTabButtonState:(long long)arg1;
- (void)updateButtonSelectedState:(unsigned long long)arg1;
- (void)setButtonSelectedState:(unsigned long long)arg1;
- (void)revertButtonSelectedState:(unsigned long long)arg1;
- (void)tabButtonClicked:(id)arg1;
- (void)tabButtonSelected:(id)arg1 index:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabButtons;
- (void)setTabButtons:(id)arg1;
- (id)tabTitles;
- (void)setTabTitles:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

