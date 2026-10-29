@interface MMFinderLiveNoticeDetailsViewController : MMCPUIViewController <MMFinderLiveNoticeDetailsViewDelegate, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCActionSheetDelegate, MMWebViewDelegate, LiveNoticeModReminderViewDelegate, MMFinderLiveCreateNoticeViewControllerDelegate, MMFinderLivePosterEditPanelDelegate>
{
    BOOL _editingFromPreviewState; // +0x70
    id <MMFinderLiveNoticeDetailsViewControllerDelegate> _delegate; // +0x78
    FinderLiveNoticeInfo * _noticeInfo; // +0x80
    unsigned long long _role; // +0x88
    WCFinderContact * _anchorContact; // +0x90
    MMFinderLiveNoticeDetailsReservationParameters * _reservationParams; // +0x98
    MMFinderLiveNoticePosterModel * _posterModel; // +0xa0
    NSString * _selectedStyleId; // +0xa8
    unsigned long long _state; // +0xb0
    unsigned long long _sourceScene; // +0xb8
    UIView * _editorLandingStateCommandsContainer; // +0xc0
    UILabel * _editorEditStyleLabel; // +0xc8
    UIView * _barLabel1; // +0xd0
    UILabel * _editorEditNoticeLabel; // +0xd8
    UIView * _barLabel2; // +0xe0
    UILabel * _editorEditRemindLabel; // +0xe8
    UIBarButtonItem * _editorRevokeNoticeNavigationBarItem; // +0xf0
    UIView * _editingStateCommandsContainer; // +0xf8
    MMFinderLivePosterEditPanel * _posterEditPanel; // +0x100
    MMUIButton * _shareToFriendButton; // +0x108
    MMUIButton * _editingAdvanceStyleButton; // +0x110
    UIView * _readerStateCommandsContainer; // +0x118
    MMLiveIconButton * _readerReserveButton; // +0x120
    MMUIButton * _readerBindItemButton; // +0x128
    MMUIButton * _readerShareButton; // +0x130
    MMFinderLiveNoticeDetailsView * _noticeDetailsView; // +0x138
    MMScrollActionSheet * _shareActionSheet; // +0x140
    ForwardMessageLogicController * _forwardLogic; // +0x148
    MMFinderLiveCancelNoticeView * _cancelNoticeView; // +0x150
    MMFinderLiveReserveNoticeLogic * _reserveNoticeLogic; // +0x158
    WCFinderLiveAudienceNoticeReporter * _reservationReporter; // +0x160
    MMUIButton * _editingCommitButton; // +0x168
    MMUIButton * _columnButton; // +0x170
    MMFinderLiveNoticeDetailsPreviewModel * _previewModel; // +0x178
    WCFinderCreateLiveViewModel * _createLiveVM; // +0x180
    MMFinderLiveCreateNoticeReporter * _noticeCreationReporter; // +0x188
}
- (id)initWithRole:(unsigned long long)arg1;
- (id)shareActionSheet;
- (id)cancelNoticeView;
- (void)setState:(unsigned long long)arg1;
- (id)reserveNoticeLogic;
- (id)reservationReporter;
- (long long)noticeSceneForReport;
- (void)updateWithAnchorFinderContact:(id)arg1 previewModel:(id)arg2;
- (void)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2 sourceScene:(unsigned long long)arg3 reservationParams:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)onMoreButtonTapped;
- (void)onBindItemButtonTapped;
- (void)openBlueGiftProductPage;
- (void)onShareButtonTapped;
- (void)onAdvanceStyleButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onEnterEditingButtonTapped;
- (void)onEnterEditingButtonTappedFromPreview;
- (void)onEditImageButtonTapped;
- (void)onEditingCommitButtonTapped;
- (void)onReserveButtonTapped;
- (void)onBackButtonTapped;
- (void)onColumnButtonTapped;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)onPosterEditPanelEditImage;
- (void)onPosterEditPanelCommitEdit;
- (void)onPosterEditPanelSelectStyle:(long long)arg1;
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
- (void)updateReaderBindItemButton;
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
- (void)modLiveNoticeTriggerStateWithNotice;
- (BOOL)columnButtonAvailable;
- (void)handleColumnOperation:(BOOL)arg1;
- (void)modLiveNoticeAddColumnWithNotice:(id)arg1 opType:(int)arg2;
- (void)handleLiveNoticeAddColumn:(int)arg1;
- (void)openWebViewController:(id)arg1 fromNav:(id)arg2 closeCompletion:(id /* block */)arg3;
- (void)reloadData;
- (void)reportColumnButtonAction:(BOOL)arg1;
- (BOOL)canEditNotice;
- (BOOL)canEditRemind;
- (void)changeNotice;
- (void)viewController:(id)arg1 didFinishModLiveNoticeWithInfo:(id)arg2;
- (void)triggerAiAssistantSubAction:(long long)arg1;
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
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (id)editorLandingStateCommandsContainer;
- (void)setEditorLandingStateCommandsContainer:(id)arg1;
- (id)editorEditStyleLabel;
- (void)setEditorEditStyleLabel:(id)arg1;
- (id)barLabel1;
- (void)setBarLabel1:(id)arg1;
- (id)editorEditNoticeLabel;
- (void)setEditorEditNoticeLabel:(id)arg1;
- (id)barLabel2;
- (void)setBarLabel2:(id)arg1;
- (id)editorEditRemindLabel;
- (void)setEditorEditRemindLabel:(id)arg1;
- (id)editorRevokeNoticeNavigationBarItem;
- (void)setEditorRevokeNoticeNavigationBarItem:(id)arg1;
- (BOOL)editingFromPreviewState;
- (void)setEditingFromPreviewState:(BOOL)arg1;
- (id)editingStateCommandsContainer;
- (void)setEditingStateCommandsContainer:(id)arg1;
- (id)posterEditPanel;
- (void)setPosterEditPanel:(id)arg1;
- (id)shareToFriendButton;
- (void)setShareToFriendButton:(id)arg1;
- (id)editingAdvanceStyleButton;
- (void)setEditingAdvanceStyleButton:(id)arg1;
- (id)readerStateCommandsContainer;
- (void)setReaderStateCommandsContainer:(id)arg1;
- (id)readerReserveButton;
- (void)setReaderReserveButton:(id)arg1;
- (id)readerBindItemButton;
- (void)setReaderBindItemButton:(id)arg1;
- (id)readerShareButton;
- (void)setReaderShareButton:(id)arg1;
- (id)noticeDetailsView;
- (void)setNoticeDetailsView:(id)arg1;
- (void)setShareActionSheet:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (void)setCancelNoticeView:(id)arg1;
- (void)setReserveNoticeLogic:(id)arg1;
- (void)setReservationReporter:(id)arg1;
- (id)editingCommitButton;
- (void)setEditingCommitButton:(id)arg1;
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
