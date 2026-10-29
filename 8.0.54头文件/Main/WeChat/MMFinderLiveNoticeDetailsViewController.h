@interface MMFinderLiveNoticeDetailsViewController : MMCPUIViewController <MMFinderLiveNoticeDetailsViewDelegate, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCActionSheetDelegate, MMWebViewDelegate, LiveNoticeModReminderViewDelegate, MMFinderLiveCreateNoticeViewControllerDelegate>
{
    id <MMFinderLiveNoticeDetailsViewControllerDelegate> _delegate; // +0x68
    FinderLiveNoticeInfo * _noticeInfo; // +0x70
    unsigned long long _role; // +0x78
    WCFinderContact * _anchorContact; // +0x80
    MMFinderLiveNoticeDetailsReservationParameters * _reservationParams; // +0x88
    MMFinderLiveNoticePosterModel * _posterModel; // +0x90
    NSString * _selectedStyleId; // +0x98
    unsigned long long _state; // +0xa0
    UIView * _editorLandingStateCommandsContainer; // +0xa8
    MMLiveVerticalTextButtonView * _editorEnterEditingButton; // +0xb0
    MMLiveVerticalTextButtonView * _editorSaveImageButton; // +0xb8
    MMLiveVerticalTextButtonView * _editorShareButton; // +0xc0
    UIBarButtonItem * _editorRevokeNoticeNavigationBarItem; // +0xc8
    UIView * _editingStateCommandsContainer; // +0xd0
    MMUIButton * _editingCommitButton; // +0xd8
    MMUIButton * _editingAdvanceStyleButton; // +0xe0
    UIView * _readerStateCommandsContainer; // +0xe8
    MMLiveIconButton * _readerReserveButton; // +0xf0
    MMUIButton * _readerCouponButton; // +0xf8
    MMUIButton * _readerShareButton; // +0x100
    MMFinderLiveNoticeDetailsView * _noticeDetailsView; // +0x108
    MMScrollActionSheet * _shareActionSheet; // +0x110
    ForwardMessageLogicController * _forwardLogic; // +0x118
    MMFinderLiveCancelNoticeView * _cancelNoticeView; // +0x120
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0x128
    WCFinderLiveAudienceNoticeReporter * _reservationReporter; // +0x130
    MMUIButton * _columnButton; // +0x138
    MMFinderLiveNoticeDetailsPreviewModel * _previewModel; // +0x140
    WCFinderCreateLiveViewModel * _createLiveVM; // +0x148
    MMFinderLiveCreateNoticeReporter * _noticeCreationReporter; // +0x150
}
- (id)initWithRole:(unsigned long long)arg1;
- (id)shareActionSheet;
- (id)cancelNoticeView;
- (void)setState:(unsigned long long)arg1;
- (id)ticketHandle;
- (id)reservationReporter;
- (long long)noticeSceneForReport;
- (void)updateWithAnchorFinderContact:(id)arg1 previewModel:(id)arg2;
- (void)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2 reservationParams:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)onMoreButtonTapped;
- (void)onCouponButtonTapped;
- (void)onShareButtonTapped;
- (void)onAdvanceStyleButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onEnterEditingButtonTapped;
- (void)onEditingCommitButtonTapped;
- (void)onReserveButtonTapped;
- (void)onBackButtonTapped;
- (void)onColumnButtonTapped;
- (void)onLiveNoticeDetailsViewBackgroundImageChangeRequested:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onModReminderViewCompleteWithLiveNoticeInfo:(id)arg1 selectType:(int)arg2;
- (void)onLiveNoticeReserveStateChanged:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)initializeComponents;
- (void)updateReaderCouponButton;
- (void)updateReaderReserveButton;
- (void)initializeShareActionSheet;
- (void)handleRevokeNotice;
- (void)revokeNotice:(id)arg1;
- (void)didRevokeNoticeWithResult:(BOOL)arg1 errorMessage:(id)arg2;
- (void)shareToChat:(id)arg1;
- (void)shareToMoment;
- (void)addToFavorites;
- (void)createNoticeWithCompletion:(id /* block */)arg1;
- (void)commitPosterChangesWithCompletionBlock:(id /* block */)arg1;
- (void)revertPosterChangesWithCompletionBlock:(id /* block */)arg1;
- (void)setPreviewBackgroundImage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(id /* block */)arg1;
- (void)handleFreeLiveNoticeReservation:(id)arg1;
- (void)handlePaidLiveNoticeReservation:(id)arg1;
- (void)reserveNoticeInfoEx:(id)arg1;
- (void)showCancelReservationActionSheet:(id)arg1;
- (void)cancelReserveNoticeInfoEx:(id)arg1;
- (id)baseAudienceNoticeReportParams:(id)arg1;
- (void)modLiveNoticeTopStateWithNotice:(id)arg1;
- (void)modLiveNoticeTriggerStateWithNotice:(id)arg1;
- (BOOL)columnButtonAvailable;
- (void)handleColumnOperation:(BOOL)arg1;
- (void)modLiveNoticeAddColumnWithNotice:(id)arg1 opType:(int)arg2;
- (void)handleLiveNoticeAddColumn:(int)arg1;
- (void)openWebViewController:(id)arg1 fromNav:(id)arg2 closeCompletion:(id /* block */)arg3;
- (void)reloadData;
- (void)reportColumnButtonAction:(BOOL)arg1;
- (void)setupChangeNoticeActionsheet:(id)arg1;
- (void)changeNotice;
- (void)didFinishModLiveNoticeWithInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (unsigned long long)role;
- (void)setRole:(unsigned long long)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)reservationParams;
- (void)setReservationParams:(id)arg1;
- (id)posterModel;
- (void)setPosterModel:(id)arg1;
- (id)selectedStyleId;
- (void)setSelectedStyleId:(id)arg1;
- (unsigned long long)state;
- (id)editorLandingStateCommandsContainer;
- (void)setEditorLandingStateCommandsContainer:(id)arg1;
- (id)editorEnterEditingButton;
- (void)setEditorEnterEditingButton:(id)arg1;
- (id)editorSaveImageButton;
- (void)setEditorSaveImageButton:(id)arg1;
- (id)editorShareButton;
- (void)setEditorShareButton:(id)arg1;
- (id)editorRevokeNoticeNavigationBarItem;
- (void)setEditorRevokeNoticeNavigationBarItem:(id)arg1;
- (id)editingStateCommandsContainer;
- (void)setEditingStateCommandsContainer:(id)arg1;
- (id)editingCommitButton;
- (void)setEditingCommitButton:(id)arg1;
- (id)editingAdvanceStyleButton;
- (void)setEditingAdvanceStyleButton:(id)arg1;
- (id)readerStateCommandsContainer;
- (void)setReaderStateCommandsContainer:(id)arg1;
- (id)readerReserveButton;
- (void)setReaderReserveButton:(id)arg1;
- (id)readerCouponButton;
- (void)setReaderCouponButton:(id)arg1;
- (id)readerShareButton;
- (void)setReaderShareButton:(id)arg1;
- (id)noticeDetailsView;
- (void)setNoticeDetailsView:(id)arg1;
- (void)setShareActionSheet:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (void)setCancelNoticeView:(id)arg1;
- (void)setTicketHandle:(id)arg1;
- (void)setReservationReporter:(id)arg1;
- (id)columnButton;
- (void)setColumnButton:(id)arg1;
- (id)previewModel;
- (void)setPreviewModel:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (id)noticeCreationReporter;
- (void)setNoticeCreationReporter:(id)arg1;
- (void).cxx_destruct;
@end

