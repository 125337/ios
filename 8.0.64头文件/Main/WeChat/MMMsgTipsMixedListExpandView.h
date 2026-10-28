@interface MMMsgTipsMixedListExpandView : MMMsgTipsExpandView <UITableViewDelegate, UITableViewDataSource, TipsViewDelegate>
{
    BOOL _isRowAnimating; // +0x8
    id <TipsViewDelegate> _tipsViewDelegate; // +0x10
    NSArray * _tipsBarList; // +0x18
    NSMutableArray * _tipsViews; // +0x20
    MMTableView * _tableView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)doLayout;
- (void)updateTipsBarList:(id)arg1;
- (void)makeTipsViews;
- (id)tipsViewForItem:(id)arg1;
- (CGRect)getRectInWindowWithTipsItem:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)totalHeight;
- (void)removeTipsView:(id)arg1;
- (void)onExpandViewDisappear;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resetWaitingForConfirmForAllTipsView;
- (void)resetWaitingForConfirmExceptTipsView:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onPerformIconAction:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)onTipsViewHideAtTimeout:(id)arg1;
- (void)onMenuControllerVisible:(id)arg1;
- (void)onTipsViewHeightChanged:(id)arg1;
- (void)onTipsViewDidShow:(id)arg1;
- (void)onRightButtonWaitingForConfirm:(id)arg1;
- (id)tipsViewDelegate;
- (void)setTipsViewDelegate:(id)arg1;
- (id)tipsBarList;
- (void)setTipsBarList:(id)arg1;
- (id)tipsViews;
- (void)setTipsViews:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)isRowAnimating;
- (void)setIsRowAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
