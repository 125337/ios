@interface MMFinderLiveFansGroupMemberListPanel : MMPageSheetBaseView <MMRefreshTableFooterDelegate, MMFinderLiveFansGroupMemberTableViewDelegate>
{
    long long _openMode; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    UIView * _contentView; // +0x18
    MMTableView * _fansGroupMemberTableView; // +0x20
    MMUILabel * _noMemberTipLabel; // +0x28
    WCTimeLineFooterView * _footerView; // +0x30
    MMFinderLiveFansGroupMemberTableViewModel * _fansGroupMemberTableViewModel; // +0x38
    MMFinderLiveFansGroupMemberLogic * _fetchLogic; // +0x40
    MMFinderLiveFansGroupMemberSelfIntimacyView * _selfIntimacyView; // +0x48
    MMUIMaskContainerView * _tableViewContainerView; // +0x50
}
- (id)initWithTaskId:(id)arg1 openMode:(long long)arg2;
- (void)setupPageSheetConfig;
- (void)createFetchLogic;
- (BOOL)shouldAdaptToDarkLight;
- (id)getCurrentLeftButton;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutSelfIntimacyView;
- (void)layoutFansGroupMemberTableView;
- (id)createFansGroupMemberTableFooterView;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)layoutNoMemberTipLabel;
- (void)createNoMemberTipLabel;
- (void)showNoMemberTipLabel;
- (void)hideNoMemberTipLabel;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (id)fansGroupMemberTableViewModel;
- (id)liveTask;
- (void)refreshFansGroupMemberList;
- (void)leftButtonAction;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onFansGroupMemberTableDidScroll;
- (void)onFansGroupMemberTableNeedRefreshWithMemberType:(unsigned long long)arg1 groupType:(unsigned long long)arg2;
- (unsigned long long)getFilterType;
- (unsigned long long)getSortType;
- (void)reportForPanelExpose;
- (id)audienceLogReporter;
- (long long)openMode;
- (void)setOpenMode:(long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)fansGroupMemberTableView;
- (void)setFansGroupMemberTableView:(id)arg1;
- (id)noMemberTipLabel;
- (void)setNoMemberTipLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setFansGroupMemberTableViewModel:(id)arg1;
- (id)fetchLogic;
- (void)setFetchLogic:(id)arg1;
- (id)selfIntimacyView;
- (void)setSelfIntimacyView:(id)arg1;
- (id)tableViewContainerView;
- (void)setTableViewContainerView:(id)arg1;
- (void).cxx_destruct;
@end

