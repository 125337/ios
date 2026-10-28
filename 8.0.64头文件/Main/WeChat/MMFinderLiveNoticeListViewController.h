@interface MMFinderLiveNoticeListViewController : MMUIHalfScreenViewController <UITableViewDataSource, UITableViewDelegate, MMFinderLiveNoticeListViewModelDelegate, MMFinderLiveNoticeInfoCellDelegate, MMFinderLiveNoticeNextLiveCellDelegate, MMFinderLiveNoticeDetailsViewControllerDelegate, WCFinderStreamProfileDragBarViewDelegate, MMUIViewControllerOverrideOrientationMaskProtocol>
{
    BOOL _canShowNextLiveNoticeInfo; // +0x70
    id /* block */ _onReserved; // +0x78
    id /* block */ _onRequireBecomeMemberBeforeReserveNotice; // +0x80
    id /* block */ _onClickCreateNotice; // +0x88
    unsigned long long _overrideOrientationMask; // +0x90
    id /* block */ _onRequireRotatePortrait; // +0x98
    id /* block */ _onRequireRecoverOrientation; // +0xa0
    MMFinderLiveNoticeListViewModel * _viewModel; // +0xa8
    MMFinderLiveNoticeInfoViewItem * _targetInfoViewItem; // +0xb0
    NSIndexPath * _targetInfoIndexPath; // +0xb8
    UITableView * _tableView; // +0xc0
    UILabel * _emptyContentLabel; // +0xc8
    UILabel * _nextLiveNoticeTitleLabel; // +0xd0
    UILabel * _regularNoticeTitleLabel; // +0xd8
    MMUIButton * _operateAllButton; // +0xe0
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0xe8
    WCFinderStreamProfileDragBarView * _dragBarView; // +0xf0
}
- (id)initWithViewModel:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (BOOL)needCloseOnOrientationChanged;
- (double)getMaxHeight;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadTopViews;
- (void)loadSectionHeaders;
- (void)loadTableView;
- (void)loadEmptyContentView;
- (void)updateSectionHeaders;
- (void)showConfirmAlertForCancellingReserveNoticeInfo:(id)arg1;
- (void)reserveNoticeInfo:(id)arg1;
- (void)cancelReservingNoticeInfo:(id)arg1;
- (void)showConfirmAlertForCancellingReserveAllNotices;
- (void)reserveAllNotices;
- (void)cancelReservingAllNotices;
- (void)reserveNextLiveNotice:(id)arg1;
- (void)realReserveNextLiveWithNoticeView:(id)arg1 isReserve:(BOOL)arg2;
- (void)dragBarViewWillBegin:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (void)reloadDataInNoticeListViewModel:(id)arg1;
- (void)batchUpdateDataWithRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 updatedIndexes:(id)arg3 inNoticeListViewModel:(id)arg4;
- (void)reloadReserveStatusInNoticeListViewModel:(id)arg1;
- (void)reloadTopStatusInNoticeListViewModel:(id)arg1;
- (void)noticeInfoCellDidViewNotice:(id)arg1;
- (void)noticeInfoCellDidChangeReservation:(id)arg1;
- (void)noticeInfoDidChangeReservation:(id)arg1;
- (void)noticeInfoCellDidTopNotice:(id)arg1;
- (void)onClickFreeLiveNoticeView:(id)arg1;
- (void)onClickNeedPayLiveNoticeView:(id)arg1;
- (void)closeTicketHandle:(BOOL)arg1;
- (id)ticketHandle;
- (void)actionForReserveNoticeInfo:(id)arg1;
- (void)reserveNoticeInfoForConcert:(id)arg1;
- (void)checkAndPresentConcertTicketForNoticeInfo:(id)arg1;
- (void)presentConcertTicketForNoticeInfo:(id)arg1;
- (void)nextLiveNoticeCellDidChangeReservation:(id)arg1;
- (void)operateAllButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)heightForTableViewHeaderInSection:(long long)arg1;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(id)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeTopChanged:(id)arg1 noticeInfo:(id)arg2;
- (void)noticeQRCodePreviewViewControllerNoticeStatusChanged:(id)arg1;
- (void)didFinishModLiveNoticeWithInfo:(id)arg1;
- (id /* block */)onReserved;
- (void)setOnReserved:(id /* block */)arg1;
- (id /* block */)onRequireBecomeMemberBeforeReserveNotice;
- (void)setOnRequireBecomeMemberBeforeReserveNotice:(id /* block */)arg1;
- (id /* block */)onClickCreateNotice;
- (void)setOnClickCreateNotice:(id /* block */)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (id /* block */)onRequireRotatePortrait;
- (void)setOnRequireRotatePortrait:(id /* block */)arg1;
- (id /* block */)onRequireRecoverOrientation;
- (void)setOnRequireRecoverOrientation:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)targetInfoViewItem;
- (void)setTargetInfoViewItem:(id)arg1;
- (id)targetInfoIndexPath;
- (void)setTargetInfoIndexPath:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)emptyContentLabel;
- (void)setEmptyContentLabel:(id)arg1;
- (id)nextLiveNoticeTitleLabel;
- (void)setNextLiveNoticeTitleLabel:(id)arg1;
- (id)regularNoticeTitleLabel;
- (void)setRegularNoticeTitleLabel:(id)arg1;
- (id)operateAllButton;
- (void)setOperateAllButton:(id)arg1;
- (void)setTicketHandle:(id)arg1;
- (id)dragBarView;
- (void)setDragBarView:(id)arg1;
- (BOOL)canShowNextLiveNoticeInfo;
- (void)setCanShowNextLiveNoticeInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
