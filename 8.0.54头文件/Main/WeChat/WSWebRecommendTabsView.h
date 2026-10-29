@interface WSWebRecommendTabsView : UIView
{
    id <WSWebRecommendTabsViewDelegate> _delegate; // +0x8
    UIView * _tabUnderLine; // +0x10
    NSMutableArray * _tabButtons; // +0x18
    NSMutableDictionary * _reddotStatusDic; // +0x20
    NSArray * _tabListData; // +0x28
    long long _currentIndex; // +0x30
}
+ (BOOL)isHasNewLifeTab:(id)arg1;
+ (double)getTabBarItemWidth:(id)arg1;
+ (double)tabViewBottomMargin;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)refreshTabLanguage;
- (double)getHorizolMargin:(id)arg1;
- (BOOL)configTabList:(id)arg1;
- (id)tabViewForInfo:(id)arg1;
- (long long)outsideCallTabSelectedWithCategory:(long long)arg1;
- (void)outsideCallTabSelected:(long long)arg1 reason:(unsigned long long)arg2;
- (void)updateTabButtonState:(long long)arg1 needAnim:(BOOL)arg2;
- (void)tabButtonClicked:(id)arg1;
- (void)tabButtonSelected:(id)arg1 index:(long long)arg2 reason:(unsigned long long)arg3;
- (void)refreshReddotLayout;
- (void)clearReddotStatus;
- (void)innerConfigContentReddot;
- (void)configContentReddot:(BOOL)arg1 numberReddot:(long long)arg2 withCategory:(long long)arg3;
- (void)configContentUI:(BOOL)arg1 numberOnRedDot:(long long)arg2 withCategory:(long long)arg3;
- (id)outsideGetTabsReddotInfoDic;
- (void)scrollToPosition:(double)arg1;
- (void)updateUnderLinePos:(double)arg1;
- (void)updateButtonColor:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabUnderLine;
- (void)setTabUnderLine:(id)arg1;
- (id)tabButtons;
- (void)setTabButtons:(id)arg1;
- (id)reddotStatusDic;
- (void)setReddotStatusDic:(id)arg1;
- (id)tabListData;
- (void)setTabListData:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (void).cxx_destruct;
@end

