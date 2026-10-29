@interface CustomMenuToolView : MMUIView <MMHorizontalTableViewDelegate, MMHorizontalTableViewDataSource, UIScrollViewDelegate>
{
    NSMutableArray * m_menuList; // +0x8
    UIButton * _changeBtn; // +0x10
    MMHorizontalTableView * m_tableView; // +0x18
    UIButton * m_pageBtn; // +0x20
    long long lastClickMenuIndex; // +0x28
    id <CustomMenuToolViewDelegate> m_delegate; // +0x30
    UIView * _bgView; // +0x38
}
- (void)dealloc;
- (id)title;
- (id)initWithMenuList:(id)arg1;
- (void)layoutSubviews;
- (void)loadSubView;
- (void)preloadWeAppTaskIfNeeded;
- (unsigned long long)numberOfColumnsInHorizontalTableView:(id)arg1;
- (double)horizontalTableView:(id)arg1 widthForColumnAtIndex:(unsigned long long)arg2;
- (id)horizontalTableView:(id)arg1 viewForColumnAtIndex:(unsigned long long)arg2;
- (void)horizontalTableView:(id)arg1 didSelectColumnAtIndex:(unsigned long long)arg2;
- (void)onMenuButtonClick:(id)arg1;
- (void)onPageBtnClick:(id)arg1;
- (void)onChangeBtnClick:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)isMenusNumerous;
- (void)resetLastClickMenuIndex;
- (BOOL)isInCollAssistSession;
- (BOOL)isInWeChatPaySession;
- (BOOL)isPayRelatedSession;
- (BOOL)shouldShowRedDotWithMenuKey:(id)arg1;
- (void)reportMenuClickWithName:(id)arg1;
- (void)reportWCPayMenuClickWithScene:(int)arg1 name:(id)arg2 reddot:(int)arg3 expose:(int)arg4;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_menuList;
- (void)setM_menuList:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_pageBtn;
- (void)setM_pageBtn:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (void).cxx_destruct;
@end

