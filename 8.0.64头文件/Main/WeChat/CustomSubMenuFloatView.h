@interface CustomSubMenuFloatView : MMUIButton <UITableViewDelegate, UITableViewDataSource>
{
    UIView * m_contentView; // +0x8
    MMTableView * m_tableView; // +0x10
    NSMutableArray * m_btnList; // +0x18
    double m_tableCellWidth; // +0x20
    id <CustomSubMenuFloatViewDelegate> m_delegate; // +0x28
}
- (void)dealloc;
- (id)initWithList:(id)arg1 ArrowX:(double)arg2 delegate:(id)arg3;
- (void)loadContentViewWithArrowX:(double)arg1;
- (void)onTapScreenBtn;
- (void)onTableViewButtonDown:(id)arg1;
- (void)animatePresentContentView;
- (void)animateDismissContentView;
- (void)onRemoveFloatView;
- (double)getFontSize;
- (double)getTableCellWidth;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)isSubMenuListHasIcon;
- (long long)storage2ShowIndex:(long long)arg1;
- (long long)show2StorageIndex:(long long)arg1;
- (void)dumpView:(id)arg1 atIndent:(int)arg2 into:(id)arg3;
- (id)displayViews:(id)arg1;
- (void)preloadWeAppTaskIfNeeded;
- (BOOL)isPayRelatedSession;
- (BOOL)isInCollAssistSession;
- (BOOL)isInWeChatPaySession;
- (BOOL)shouldShowRedDotWithMenuKey:(id)arg1;
- (void)tryReportChatBotClickEvent:(id)arg1;
- (void)reportMenuClickWithName:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_contentView;
- (void)setM_contentView:(id)arg1;
- (id)m_btnList;
- (void)setM_btnList:(id)arg1;
- (void).cxx_destruct;
@end
