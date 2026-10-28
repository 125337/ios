@interface MMMusicPostVideoTabView : UIView
{
    id <MMMusicPostVideoTabViewDelegate> _delegate; // +0x8
    UIView * _tabUnderLine; // +0x10
    NSMutableArray * _tabButtons; // +0x18
    NSArray * _tabListData; // +0x20
    unsigned long long _currentIndex; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)refreshTabLanguage;
- (BOOL)configTabList:(id)arg1;
- (void)updateTabButtonsLayout;
- (double)getUILabelWidthWithTips:(id)arg1;
- (void)selectTabAtIndex:(long long)arg1 manualyTappedType:(unsigned long long)arg2;
- (void)updateTabButtonState:(long long)arg1 needAnim:(BOOL)arg2;
- (void)updateButtonSelectedState:(unsigned long long)arg1;
- (void)setButtonSelectedState:(unsigned long long)arg1;
- (void)revertButtonSelectedState:(unsigned long long)arg1;
- (void)tabButtonClicked:(id)arg1;
- (void)tabButtonSelected:(id)arg1 index:(long long)arg2 manualyTappedType:(unsigned long long)arg3;
- (unsigned long long)getCurrentButtonIndex;
- (void)widthToFit;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabUnderLine;
- (void)setTabUnderLine:(id)arg1;
- (id)tabButtons;
- (void)setTabButtons:(id)arg1;
- (id)tabListData;
- (void)setTabListData:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
