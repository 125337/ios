@interface MMMsgSearchTabViewContainer : UIView <MMMsgSearchTabViewDelegate>
{
    id <MMMsgSearchTabPageViewDelegate> delegate; // +0x8
    UIScrollView * _tabContainer; // +0x10
    NSMutableArray * _tabViewArray; // +0x18
    unsigned long long _selectIndex; // +0x20
    UIView * _tabUnderLine; // +0x28
}
- (id)initWithTabViewArray:(id)arg1;
- (void)initView;
- (void)setFrame:(CGRect)arg1;
- (double)calculateHeight;
- (double)calculateTabContainerHeight;
- (void)setupUI;
- (void)setSelectIndex:(unsigned long long)arg1;
- (unsigned long long)getSelectIndex;
- (void)adjustTabViewFrame;
- (unsigned int)getMsgSearchType;
- (void)selectTabWithMsgSearchType:(unsigned int)arg1;
- (BOOL)checkHadMsgSearchType:(unsigned int)arg1;
- (void)reloadSearchTabViewContainerWithTabViewArray:(id)arg1;
- (void)setTabLodeTypeWithMsgSearchType:(unsigned int)arg1 msgSearchLoadingType:(unsigned int)arg2 loadingAddNumber:(unsigned int)arg3;
- (void)updateTabViewContainerLayout;
- (void)handleTapGesture:(id)arg1;
- (void)adjustContentOffsetWithTabView:(id)arg1;
- (CGRect)tabUnderLineFrameForTabView:(id)arg1;
- (id)tabContainer;
- (void)searchTabPageTabView:(id)arg1 changeToWidth:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTabContainer:(id)arg1;
- (id)tabViewArray;
- (void)setTabViewArray:(id)arg1;
- (unsigned long long)selectIndex;
- (id)tabUnderLine;
- (void)setTabUnderLine:(id)arg1;
- (void).cxx_destruct;
@end

