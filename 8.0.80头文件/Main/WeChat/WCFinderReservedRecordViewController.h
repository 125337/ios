@interface WCFinderReservedRecordViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMFinderLiveNoticeInfoCellDelegate, MMFinderLiveReservedRecordNoticeInfoCellDelegate, MMFinderLiveReservedRecordNextLiveCellDelegate, MMFinderLiveNoticeDetailsViewControllerDelegate, MMFinderLiveReservedRecordViewModelDelegate>
{
    id /* block */ _onReserved; // +0x70
    id /* block */ _onRequireBecomeMemberBeforeReserveNotice; // +0x78
    id /* block */ _onRequireRotatePortrait; // +0x80
    id /* block */ _onRequireRecoverOrientation; // +0x88
    MMTableView * _reservedRecordTableView; // +0x90
    FinderLivePersonalCenterPrepareInfo * _info; // +0x98
    MMFinderLiveReservedRecordViewModel * _reservedRecordViewModel; // +0xa0
    WCTimeLineFooterView * _footerView; // +0xa8
    MMFinderLiveReserveNoticeLogic * _reserveNoticeLogic; // +0xb0
    UILabel * _emptyLabel; // +0xb8
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)layoutContentView;
- (void)reloadData;
- (void)setupTableView;
- (void)setupData;
- (void)setupUI;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showEmptyView;
- (void)hideEmptyView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onLiveReservedRecordUpdate:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onReservedRecordViewModelStartFetching;
- (void)onReservedRecordViewModelUpdated:(BOOL)arg1 hasMoreData:(BOOL)arg2;
- (void)noticeInfoCellDidViewNotice:(id)arg1;
- (void)noticeInfoCellDidChangeReservation:(id)arg1;
- (void)onMMLiveReservedRecordAnchorInfoClicked:(id)arg1;
- (void)gotoFinderBrandLiveSubscribeProfile:(id)arg1;
- (void)onClickFreeLiveNoticeView:(id)arg1 anchorContact:(id)arg2;
- (void)onClickNeedPayLiveNoticeView:(id)arg1 anchorContact:(id)arg2;
- (void)actionForReserveNoticeInfo:(id)arg1 anchorContact:(id)arg2;
- (void)showConfirmAlertForCancellingReserveNoticeInfo:(id)arg1 anchorContact:(id)arg2;
- (void)reserveNoticeInfo:(id)arg1 anchorContact:(id)arg2;
- (void)presentConcertTicketForNoticeInfo:(id)arg1;
- (id)reserveNoticeLogic;
- (void)closeTicketHandle:(BOOL)arg1;
- (void)cancelReservingNoticeInfo:(id)arg1 anchorContact:(id)arg2;
- (void)checkAndPresentConcertTicketForNoticeInfo:(id)arg1;
- (void)nextLiveNoticeCellDidChangeReservation:(id)arg1;
- (void)reserveNextLiveNotice:(id)arg1 anchorContact:(id)arg2;
- (void)realReserveNextLiveWithNoticeView:(id)arg1 isReserve:(BOOL)arg2 anchorContact:(id)arg3;
- (void)onNextLiveNoticeChanged:(id)arg1 forAnchor:(id)arg2;
- (id /* block */)onReserved;
- (void)setOnReserved:(id /* block */)arg1;
- (id /* block */)onRequireBecomeMemberBeforeReserveNotice;
- (void)setOnRequireBecomeMemberBeforeReserveNotice:(id /* block */)arg1;
- (id /* block */)onRequireRotatePortrait;
- (void)setOnRequireRotatePortrait:(id /* block */)arg1;
- (id /* block */)onRequireRecoverOrientation;
- (void)setOnRequireRecoverOrientation:(id /* block */)arg1;
- (id)reservedRecordTableView;
- (void)setReservedRecordTableView:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)reservedRecordViewModel;
- (void)setReservedRecordViewModel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setReserveNoticeLogic:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (void).cxx_destruct;
@end
