@interface MMFinderLiveNoticeListViewController : MMUIHalfScreenViewController <UITableViewDataSource, UITableViewDelegate, MMFinderLiveNoticeListViewModelDelegate, MMFinderLiveNoticeInfoCellDelegate, MMFinderLiveNoticeNextLiveCellDelegate, MMFinderLiveNoticeDetailsViewControllerDelegate, WCFinderStreamProfileDragBarViewDelegate, MMUIViewControllerOverrideOrientationMaskProtocol>
{
    BOOL _isFromPersonalCenter; // +0x70
    BOOL _showsHistoryNoticeTip; // +0x71
    BOOL _canShowNextLiveNoticeInfo; // +0x72
    BOOL _allReserveButtonExposed; // +0x73
    id /* block */ _onReserved; // +0x78
    id /* block */ _onCancelReservation; // +0x80
    id /* block */ _onRequireBecomeMemberBeforeReserveNotice; // +0x88
    id /* block */ _onClickCreateNotice; // +0x90
    unsigned long long _overrideOrientationMask; // +0x98
    id /* block */ _onRequireRotatePortrait; // +0xa0
    id /* block */ _onRequireRecoverOrientation; // +0xa8
    MMFinderLiveNoticeListViewModel * _viewModel; // +0xb0
    MMFinderLiveNoticeInfoViewItem * _targetInfoViewItem; // +0xb8
    NSIndexPath * _targetInfoIndexPath; // +0xc0
    UITableView * _tableView; // +0xc8
    UILabel * _emptyContentLabel; // +0xd0
    UIView * _historyNoticeFooterView; // +0xd8
    MMGradientView * _historyNoticeGradientView; // +0xe0
    UILabel * _historyNoticeLabel; // +0xe8
    UILabel * _nextLiveNoticeTitleLabel; // +0xf0
    UILabel * _regularNoticeTitleLabel; // +0xf8
    MMUIButton * _operateAllButton; // +0x100
    MMFinderLiveReserveNoticeLogic * _reserveNoticeLogic; // +0x108
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x110
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
- (void)loadHistoryNoticeViews;
- (void)configureNoticeTipLabel:(id)arg1 wording:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)updatePersonalCenterNoticeViews;
- (void)layoutNoticeTipViews;
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
- (void)showNoticeDetailWithNoticeInfo:(id)arg1 anchorContact:(id)arg2;
- (void)noticeInfoCellDidChangeReservation:(id)arg1;
- (void)noticeInfoDidChangeReservation:(id)arg1;
- (void)noticeInfoCellDidTopNotice:(id)arg1;
- (void)onClickFreeLiveNoticeView:(id)arg1;
- (void)onClickNeedPayLiveNoticeView:(id)arg1;
- (void)closeTicketHandle:(BOOL)arg1;
- (id)reserveNoticeLogic;
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
- (void)didFinishModLiveNoticeFromViewController:(id)arg1 noticeInfo:(id)arg2;
- (id)allReserveButtonEid;
- (long long)allReserveButtonReportSourceScene;
- (void)reportAllReserveButtonExposeIfNeeded;
- (void)reportAllReserveButtonClick:(BOOL)arg1;
- (id /* block */)onReserved;
- (void)setOnReserved:(id /* block */)arg1;
- (id /* block */)onCancelReservation;
- (void)setOnCancelReservation:(id /* block */)arg1;
- (id /* block */)onRequireBecomeMemberBeforeReserveNotice;
- (void)setOnRequireBecomeMemberBeforeReserveNotice:(id /* block */)arg1;
- (id /* block */)onClickCreateNotice;
- (void)setOnClickCreateNotice:(id /* block */)arg1;
- (BOOL)isFromPersonalCenter;
- (void)setIsFromPersonalCenter:(BOOL)arg1;
- (BOOL)showsHistoryNoticeTip;
- (void)setShowsHistoryNoticeTip:(BOOL)arg1;
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
- (id)historyNoticeFooterView;
- (void)setHistoryNoticeFooterView:(id)arg1;
- (id)historyNoticeGradientView;
- (void)setHistoryNoticeGradientView:(id)arg1;
- (id)historyNoticeLabel;
- (void)setHistoryNoticeLabel:(id)arg1;
- (id)nextLiveNoticeTitleLabel;
- (void)setNextLiveNoticeTitleLabel:(id)arg1;
- (id)regularNoticeTitleLabel;
- (void)setRegularNoticeTitleLabel:(id)arg1;
- (id)operateAllButton;
- (void)setOperateAllButton:(id)arg1;
- (void)setReserveNoticeLogic:(id)arg1;
- (id)dragBarView;
- (void)setDragBarView:(id)arg1;
- (BOOL)canShowNextLiveNoticeInfo;
- (void)setCanShowNextLiveNoticeInfo:(BOOL)arg1;
- (BOOL)allReserveButtonExposed;
- (void)setAllReserveButtonExposed:(BOOL)arg1;
- (void).cxx_destruct;
@end
