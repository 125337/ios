@interface MMFinderLiveConnectMicAnchorContainerView : MMFinderLiveConnectMicBaseContainerView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _forceDisableApplySectionCellButton; // +0x8
    BOOL _footerViewHasBeenExposed; // +0x9
    NSArray * connectMicUserList; // +0x10
    NSMutableArray * _candicateAnchorList; // +0x18
    NSArray * _connectingAnchorUserList; // +0x20
    MMTableView * _tableView; // +0x28
    UILabel * _tipsLabel; // +0x30
    MMFinderLiveConnectMicRandomHintTableFooterView * _footerView; // +0x38
    UITableViewDiffableDataSource * _diffableDataSource; // +0x40
    NSMutableArray * _sections; // +0x48
    NSArray * _originCandicateAnchorList; // +0x50
}
- (void)updateWithConnectMicUserList:(id)arg1 connectingAnchorUserList:(id)arg2 forceDisableApplySectionCellButton:(BOOL)arg3 animted:(BOOL)arg4;
- (void)layoutContentView;
- (void)layoutTableView;
- (void)checkFooterViewExposedAndReport;
- (void)setupDataSourceIfNeeded;
- (void)applyDiffSnapshot:(BOOL)arg1;
- (id)makeInviteAnchorButtonWithFrame:(CGRect)arg1;
- (id)makeRandomMatchButtonWithFrame:(CGRect)arg1;
- (void)showTipsLabelWithTips:(id)arg1 topAreaHeight:(double)arg2;
- (void)resetCandicateAnchorList;
- (void)tryFetchCandicateAnchorList;
- (BOOL)handleFilterCandicateAnchorList;
- (void)updateApplySection;
- (void)updateCandicateSection;
- (void)updateConnectingAnchorSection;
- (id)mainScrollView;
- (id)sections;
- (id)displaySections;
- (void)onContainerDidShow;
- (void)onContainerWillHide;
- (void)onContainerWillDisappear;
- (void)onClickInviteAnchorButton:(id)arg1;
- (void)onClickRandomMatchButton:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)connectMicUserList;
- (void)setConnectMicUserList:(id)arg1;
- (id)candicateAnchorList;
- (void)setCandicateAnchorList:(id)arg1;
- (id)connectingAnchorUserList;
- (void)setConnectingAnchorUserList:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)diffableDataSource;
- (void)setDiffableDataSource:(id)arg1;
- (void)setSections:(id)arg1;
- (id)originCandicateAnchorList;
- (void)setOriginCandicateAnchorList:(id)arg1;
- (BOOL)forceDisableApplySectionCellButton;
- (void)setForceDisableApplySectionCellButton:(BOOL)arg1;
- (BOOL)footerViewHasBeenExposed;
- (void)setFooterViewHasBeenExposed:(BOOL)arg1;
- (void).cxx_destruct;
@end

