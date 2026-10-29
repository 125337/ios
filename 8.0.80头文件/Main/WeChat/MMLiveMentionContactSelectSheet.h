@interface MMLiveMentionContactSelectSheet : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMLiveHalfScreenTitleBarViewDelegate, WCFinderLiveExt>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    MMLiveMentionContactSelectSheetOpenParams * _openParams; // +0x10
    id /* block */ _onSelectBlock; // +0x18
    MMLiveHalfScreenTitleBarView * _titleBar; // +0x20
    MMUIButton * _infoButton; // +0x28
    MMTableView * _tableView; // +0x30
    NSArray * _sections; // +0x38
    long long _loadState; // +0x40
    MMUIActivityIndicatorView * _loadingIndicator; // +0x48
    UIView * _emptyOrErrorView; // +0x50
    MMUILabel * _emptyOrErrorLabel; // +0x58
}
+ (id)showWithTaskId:(id)arg1 openParams:(id)arg2 onSelect:(id /* block */)arg3;
- (id)initWithTaskId:(id)arg1 openParams:(id)arg2 onSelect:(id /* block */)arg3;
- (void)setupData;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)sheetContentHeight;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (void)fetchMentionContactsIfNeeded;
- (void)onFetchMentionContactsSuccess:(id)arg1;
- (void)onFetchMentionContactsFailed:(id)arg1;
- (id)buildSectionsFromContacts:(id)arg1;
- (void)transitionToLoadState:(long long)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onInfoButtonClicked:(id)arg1;
- (void)onRetryTapped:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onFinderGetLiveOnlineMember:(id)arg1 taskId:(id)arg2 boardType:(unsigned int)arg3 onlineMemberResult:(id)arg4;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)openParams;
- (void)setOpenParams:(id)arg1;
- (id /* block */)onSelectBlock;
- (void)setOnSelectBlock:(id /* block */)arg1;
- (id)titleBar;
- (void)setTitleBar:(id)arg1;
- (id)infoButton;
- (void)setInfoButton:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (long long)loadState;
- (void)setLoadState:(long long)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)emptyOrErrorView;
- (void)setEmptyOrErrorView:(id)arg1;
- (id)emptyOrErrorLabel;
- (void)setEmptyOrErrorLabel:(id)arg1;
- (void).cxx_destruct;
@end
