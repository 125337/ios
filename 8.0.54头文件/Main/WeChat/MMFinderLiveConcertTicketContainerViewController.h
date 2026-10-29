@interface MMFinderLiveConcertTicketContainerViewController : MMCPUIViewController <MMFinderLiveConcertTicketViewControllerDelegate>
{
    BOOL _showingLoadingToast; // +0x68
    id /* block */ _ticketFetchBlock; // +0x70
    ConcertTicketInfo * _ticketModel; // +0x78
    NSArray * _ticketStyleItems; // +0x80
    unsigned long long _currentStyleIndex; // +0x88
    NSString * _selectedStyleResouceId; // +0x90
    MMFinderLiveConcertTicketViewController * _currentTicketViewController; // +0x98
    NSMutableDictionary * _readyTicketViewControllers; // +0xa0
    NSMutableDictionary * _loadingTicketViewControllers; // +0xa8
    UIView * _ticketContainerView; // +0xb0
    MMUIButton * _closeButton; // +0xb8
    UIView * _loadingContainerView; // +0xc0
    UIImageView * _loadingRingView; // +0xc8
    UILabel * _loadingLabelView; // +0xd0
    MMFinderLiveConcertTicketFailureView * _failureView; // +0xd8
    unsigned long long _displayState; // +0xe0
    unsigned long long _sourceScene; // +0xe8
    MMFinderLiveConcertTicketViewControllerReportingContext * _reportingContext; // +0xf0
}
- (id)initWithSourceScene:(unsigned long long)arg1 reportingContext:(id)arg2;
- (id)initWithLiveTaskId:(id)arg1 sourceScene:(unsigned long long)arg2 reportingContext:(id)arg3;
- (id)initWithLiveNoticeId:(id)arg1 activityId:(id)arg2 sourceScene:(unsigned long long)arg3 reportingContext:(id)arg4;
- (id)initWithActivityId:(id)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3 ticketReceivingScene:(unsigned int)arg4 sourceScene:(unsigned long long)arg5 reportingContext:(id)arg6;
- (void)dealloc;
- (void)setDisplayState:(unsigned long long)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onCloseButtonTapped;
- (void)onResigningActive;
- (void)onTicketViewControllerReadyForDisplay:(id)arg1;
- (void)onTicketViewControllerLoadFailed:(id)arg1;
- (void)onTicketViewControllerNextStyleRequested:(id)arg1;
- (void)onTicketViewControllerSaveCurrentStyleRequested:(id)arg1;
- (void)onTicketViewControllerExternalNavigationRequested:(id)arg1;
- (id)onTicketViewControllerShareActionSheetHostingViewRequested:(id)arg1;
- (BOOL)updateWithTicketModel:(id)arg1;
- (void)showLoadingView;
- (void)startLoadingAnimation;
- (void)showFailurePrompt;
- (void)retryLoading;
- (void)loadTicketViewControllerForStyleItem:(id)arg1 hasOtherStyles:(BOOL)arg2 showLoadingToast:(BOOL)arg3;
- (void)switchCurrentTicketViewControllerTo:(id)arg1;
- (void)nextStyle;
- (id)currentStyle;
- (void)saveCurrentStyleSelection;
- (id /* block */)ticketFetchBlock;
- (void)setTicketFetchBlock:(id /* block */)arg1;
- (id)ticketModel;
- (void)setTicketModel:(id)arg1;
- (id)ticketStyleItems;
- (void)setTicketStyleItems:(id)arg1;
- (unsigned long long)currentStyleIndex;
- (void)setCurrentStyleIndex:(unsigned long long)arg1;
- (id)selectedStyleResouceId;
- (void)setSelectedStyleResouceId:(id)arg1;
- (id)currentTicketViewController;
- (void)setCurrentTicketViewController:(id)arg1;
- (id)readyTicketViewControllers;
- (void)setReadyTicketViewControllers:(id)arg1;
- (id)loadingTicketViewControllers;
- (void)setLoadingTicketViewControllers:(id)arg1;
- (id)ticketContainerView;
- (void)setTicketContainerView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)loadingContainerView;
- (void)setLoadingContainerView:(id)arg1;
- (id)loadingRingView;
- (void)setLoadingRingView:(id)arg1;
- (id)loadingLabelView;
- (void)setLoadingLabelView:(id)arg1;
- (BOOL)showingLoadingToast;
- (void)setShowingLoadingToast:(BOOL)arg1;
- (id)failureView;
- (void)setFailureView:(id)arg1;
- (unsigned long long)displayState;
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (id)reportingContext;
- (void)setReportingContext:(id)arg1;
- (void).cxx_destruct;
@end

