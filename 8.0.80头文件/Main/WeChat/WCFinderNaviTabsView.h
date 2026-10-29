@interface WCFinderNaviTabsView : UIView <UIScrollViewDelegate>
{
    id /* block */ _selectionHandler; // +0x8
    id /* block */ _doubleSelectionHandler; // +0x10
    UIScrollView * _scrollView; // +0x18
    UIView * _tabUnderLine; // +0x20
    NSArray * _tabButtons; // +0x28
    UIColor * _normalColor; // +0x30
    UIColor * _highlightColor; // +0x38
    double _lastCursorValue; // +0x40
}
- (id)initWithTabTitles:(id)arg1;
- (id)initWithTabItems:(id)arg1;
- (void)setupWithTabItems:(id)arg1;
- (void)setTabItems:(id)arg1;
- (BOOL)isSmallPhoneCase;
- (double)buttonMargin;
- (double)horizontalPadding;
- (double)widthForButton:(id)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setTabItemNormalColor:(id)arg1 highlightColor:(id)arg2;
- (void)setTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)tabViewAtIndex:(unsigned long long)arg1;
- (void)setTabItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)tabButtonClicked:(id)arg1;
- (void)setDoubleTapEnabled:(BOOL)arg1 atIndex:(unsigned long long)arg2 minimumInterval:(double)arg3 maximumInterval:(double)arg4;
- (void)tabButtonDoubleClicked:(id)arg1;
- (CGRect)underlineFrameForButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSlideProgress:(double)arg1;
- (void)makeButtonVisible:(id)arg1 progress:(double)arg2;
- (void)updateEdgeMask;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElements;
- (BOOL)shouldGroupAccessibilityChildren;
- (id /* block */)selectionHandler;
- (void)setSelectionHandler:(id /* block */)arg1;
- (id /* block */)doubleSelectionHandler;
- (void)setDoubleSelectionHandler:(id /* block */)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)tabUnderLine;
- (void)setTabUnderLine:(id)arg1;
- (id)tabButtons;
- (void)setTabButtons:(id)arg1;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (id)highlightColor;
- (void)setHighlightColor:(id)arg1;
- (double)lastCursorValue;
- (void)setLastCursorValue:(double)arg1;
- (void).cxx_destruct;
@end
