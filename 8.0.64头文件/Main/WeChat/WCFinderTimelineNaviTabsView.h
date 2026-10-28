@interface WCFinderTimelineNaviTabsView : UIView <WCFinderTLTabButtonDelegate, UIScrollViewDelegate>
{
    id <WCFinderTimelineNaviTabsViewDelegate> _delegate; // +0x8
    id <WCFinderTimelineNaviTabsViewDataSource> _dataSource; // +0x10
    UIScrollView * _scrollView; // +0x18
    UIView * _tabUnderLine; // +0x20
    NSMutableArray * _tabButtons; // +0x28
    NSArray * _tabListData; // +0x30
    double _lastCursorValue; // +0x38
}
+ (BOOL)isLessThan400WidthScreen;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 dataSource:(id)arg3;
- (void)setTabItemNormalColor:(id)arg1 highlightColor:(id)arg2;
- (void)layoutSubviews;
- (void)refreshTabSubViews;
- (void)resetTabButtonsSize;
- (id)viewWithTabType:(long long)arg1;
- (BOOL)configTabList:(id)arg1;
- (void)updateButtonImageForConfig:(id)arg1 btn:(id)arg2;
- (void)updateTabButtonsLayout;
- (void)setUpTabButtons;
- (BOOL)isSmallPhoneCase;
- (double)getCurrentButtonMargin;
- (double)getCurrentLeftRightPadding;
- (long long)timelineTabCount;
- (long long)getTabIndexFromTabType:(long long)arg1;
- (long long)getTimelineTabTypeFromIndex:(long long)arg1;
- (double)getUILabelWidthWithTips:(id)arg1;
- (void)adjustTabButtonExpandHitTestArea;
- (void)tabButtonSingleClicked:(id)arg1;
- (void)tabButtonDoubleClicked:(id)arg1;
- (BOOL)configRedDotUIWithTabType:(long long)arg1 showInfo:(id)arg2;
- (id)getTabButtonByTabType:(long long)arg1;
- (void)updateSlideProgress:(double)arg1;
- (void)updateNaviLeftRighMastkState;
- (void)makeTargetBtnVisible:(id)arg1 visibleProgress:(double)arg2;
- (void)refreshTabGesture;
- (long long)getCurrentMaxAreaTabType;
- (CGRect)tabUnderLineFrameForButton:(id)arg1;
- (void)onSelectScrollDidEndWithTabType:(long long)arg1 toTabType:(long long)arg2;
- (void)refreshTabGestureToTabType:(long long)arg1;
- (void)onTLTabButtonCleanLeftIconForButton:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)tabUnderLine;
- (void)setTabUnderLine:(id)arg1;
- (id)tabButtons;
- (void)setTabButtons:(id)arg1;
- (id)tabListData;
- (void)setTabListData:(id)arg1;
- (double)lastCursorValue;
- (void)setLastCursorValue:(double)arg1;
- (void).cxx_destruct;
@end
