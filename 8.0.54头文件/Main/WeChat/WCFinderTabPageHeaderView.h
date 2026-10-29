@interface WCFinderTabPageHeaderView : UIView <WCFinderTabViewDelegate, WCFinderTabFilterViewDelegate, UIScrollViewDelegate, WCFinderTabPageViewBasicProtocol>
{
    BOOL _fixWidth; // +0x8
    id <WCFinderTabPageViewBasicViewDelegate> delegate; // +0x10
    UIScrollView * _tabScrollView; // +0x18
    UIView * _lineView; // +0x20
    long long _alignment; // +0x28
    double _leftMargin; // +0x30
    double _rightMargin; // +0x38
    double _topMargin; // +0x40
    NSMutableArray * _tabViewArray; // +0x48
    UIView<WCFinderTabViewProtocol> * _currentSelectTabView; // +0x50
    UIView * _tabBGView; // +0x58
    double _tabMargin; // +0x60
    UIColor * _lineColor; // +0x68
    double _lineHeight; // +0x70
    double _lineMargin; // +0x78
    double _bottomMargin; // +0x80
    WCFinderTabFilterView * _filterView; // +0x88
    unsigned long long _selectFilterIndex; // +0x90
    CAGradientLayer * _gradientMaskLayer; // +0x98
}
- (id)initWithTabNameArray:(id)arg1;
- (id)initWithTabViewArray:(id)arg1;
- (id)initWithTabViewArray:(id)arg1 alignment:(long long)arg2;
- (id)genDefaultTabViewArrayWithTabNameArray:(id)arg1;
- (void)addTabWithName:(id)arg1;
- (void)addTabWithTabView:(id)arg1;
- (BOOL)removeTabAtIndex:(unsigned long long)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setBottomMargin:(double)arg1;
- (void)setTopMargin:(double)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setTabMargin:(double)arg1;
- (void)setTabName:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setLineColor:(id)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setLineMargin:(double)arg1;
- (void)setFilterNameArray:(id)arg1;
- (void)setSelectFilterIndex:(unsigned long long)arg1;
- (double)tabScrollViewMaxWidth;
- (double)viewMaxWidth;
- (BOOL)hasFilter;
- (void)adjustFilterView;
- (void)adjustTabView;
- (void)initGradientMaskLayer;
- (void)updateGradientMaskLayer;
- (void)setFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)adjustFrame;
- (void)adjustLineViewWithTabView:(id)arg1;
- (void)adjustContentOffsetWithTabView:(id)arg1;
- (void)setCurrentSelectTabView:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)selectTabView:(id)arg1 isTriggerByUer:(BOOL)arg2;
- (void)setSelectIndex:(unsigned long long)arg1;
- (unsigned long long)currentSelectIndex;
- (void)updateButtonColor;
- (void)adjustTabViewFrame;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderTabFilterView:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (void)finderTabPageTabView:(id)arg1 changeToWidth:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabScrollView;
- (void)setTabScrollView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (BOOL)fixWidth;
- (void)setFixWidth:(BOOL)arg1;
- (long long)alignment;
- (void)setAlignment:(long long)arg1;
- (double)leftMargin;
- (double)rightMargin;
- (double)topMargin;
- (id)tabViewArray;
- (void)setTabViewArray:(id)arg1;
- (id)currentSelectTabView;
- (id)tabBGView;
- (void)setTabBGView:(id)arg1;
- (double)tabMargin;
- (id)lineColor;
- (double)lineHeight;
- (double)lineMargin;
- (double)bottomMargin;
- (id)filterView;
- (void)setFilterView:(id)arg1;
- (unsigned long long)selectFilterIndex;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end

