@interface CBTAsstContactSelectViewController : MMUIViewController <CBTAsstContactSelectViewDelegate, ContactsSelectionPreviewViewControllerDelegate>
{
    id <CBTAsstContactSelectViewControllerDelegate> _delegate; // +0x70
    CBTAsstContactSelectView * _selectView; // +0x78
    ContactSelectToolView * _toolView; // +0x80
    BOOL _pendingLoading; // +0x88
    BOOL _isLoadingActive; // +0x89
    BOOL _customNavBarSafeAreaResyncScheduled; // +0x8a
    BOOL _isInviteBtnEnabled; // +0x8b
    unsigned long long _maxSelectCount; // +0x90
    NSArray * _preSelectedUsernames; // +0x98
    NSString * _reportNegScreenSessionId; // +0xa0
    long long _reportXiaoweiSessionEnterScene; // +0xa8
    NSString * _reportInviteQuotaReddotId; // +0xb0
    ContactsSelectionPreviewViewController * _previewViewController; // +0xb8
}
- (id)initWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)scheduleCustomNavigationBarSafeAreaResync;
- (void)initTitleArea;
- (void)initSelectView;
- (id)buildExistContactDict;
- (void)initBottomArea;
- (void)beginLoadingCandidates;
- (void)finishLoadingWithInvitedUsernames:(id)arg1;
- (void)failLoadingAndDismiss;
- (void)onCancelBack:(id)arg1;
- (void)onDone;
- (void)onSelectContact:(id)arg1;
- (BOOL)onShouldSelectContact:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)getSafeSearchViewController;
- (id)getViewController;
- (void)onRejectSelectContactDueToLimit:(id)arg1;
- (void)updateToolView;
- (id)buildCompleteBarButtonItemWithCount:(unsigned long long)arg1;
- (void)onPreviewCompleteButtonPlaceholder:(id)arg1;
- (void)showAllSelectedContacts;
- (id)cellForSelectionPreviewViewTable:(id)arg1 contact:(id)arg2;
- (double)heightForSelectionPreviewViewTable;
- (void)didSelectionPreviewViewTableSelectContact:(id)arg1;
- (BOOL)isSelectionPreviewAllSelected;
- (void)onSelectionPreviewViewControllerDidSelectAll;
- (void)onSelectionPreviewViewControllerDidDeselectAll;
- (void)onSelectionPreviewDone;
- (BOOL)shouldEnableXiaoWeiReport;
- (void)reportInviteBtnEvent:(id)arg1;
- (double)getSafeBottomInset;
- (unsigned long long)maxSelectCount;
- (void)setMaxSelectCount:(unsigned long long)arg1;
- (id)preSelectedUsernames;
- (void)setPreSelectedUsernames:(id)arg1;
- (id)reportNegScreenSessionId;
- (void)setReportNegScreenSessionId:(id)arg1;
- (long long)reportXiaoweiSessionEnterScene;
- (void)setReportXiaoweiSessionEnterScene:(long long)arg1;
- (id)reportInviteQuotaReddotId;
- (void)setReportInviteQuotaReddotId:(id)arg1;
- (id)previewViewController;
- (void)setPreviewViewController:(id)arg1;
- (BOOL)pendingLoading;
- (void)setPendingLoading:(BOOL)arg1;
- (BOOL)isLoadingActive;
- (void)setIsLoadingActive:(BOOL)arg1;
- (BOOL)customNavBarSafeAreaResyncScheduled;
- (void)setCustomNavBarSafeAreaResyncScheduled:(BOOL)arg1;
- (BOOL)isInviteBtnEnabled;
- (void)setIsInviteBtnEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
