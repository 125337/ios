@interface WCFinderRecommendTabsView : UIView <WCFinderTLTabButtonDelegate>
{
    id <WCFinderRecommendTabsViewDelegate> _delegate; // +0x8
    UIView * _tabUnderLine; // +0x10
    NSMutableArray * _tabButtons; // +0x18
    NSArray * _tabListData; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTabItemNormalColor:(id)arg1 highlightColor:(id)arg2;
- (void)layoutSubviews;
- (void)refreshTabSubViews;
- (void)resetTabButtonsSize;
- (id)viewWithCategory:(long long)arg1;
- (BOOL)configTabList:(id)arg1;
- (void)updateButtonImageForConfig:(id)arg1 btn:(id)arg2;
- (void)updateTabButtonsLayout;
- (void)judgeShouldUseLeftAlignmentLayoutStyle:(double)arg1;
- (void)adjustTabButtonToCenterLayout:(double)arg1;
- (void)adjustTabButtonToSameFont;
- (double)getTabsButtonMinButtonFontMinification;
- (double)getUILabelWidthWithTips:(id)arg1;
- (void)adjustTabButtonToLeftSpace:(double)arg1;
- (void)adjustTabButtonToRightSpace:(double)arg1;
- (void)adjustTabButtonExpandHitTestArea;
- (void)tabButtonSingleClicked:(id)arg1;
- (void)tabButtonDoubleClicked:(id)arg1;
- (BOOL)configRedDotUIWithCategory:(long long)arg1 showInfo:(id)arg2;
- (id)getTabButtonByCategory:(long long)arg1;
- (void)updateRecommendCursorValue:(double)arg1;
- (void)refreshTabGesture;
- (long long)getCurrentMaxAreaTabType;
- (CGRect)tabUnderLineFrameForButton:(id)arg1;
- (void)onSelectScrollDidEndWithTabType:(long long)arg1 toTabType:(long long)arg2;
- (void)refreshTabGestureToTabType:(long long)arg1;
- (void)onTLTabButtonCleanLeftIconForButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabUnderLine;
- (void)setTabUnderLine:(id)arg1;
- (id)tabButtons;
- (void)setTabButtons:(id)arg1;
- (id)tabListData;
- (void)setTabListData:(id)arg1;
- (void).cxx_destruct;
@end

