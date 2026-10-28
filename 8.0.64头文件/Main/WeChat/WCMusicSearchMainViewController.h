@interface WCMusicSearchMainViewController : WCMusicSearchTextFieldController <WCStateMachineDelegate, WCMusicListenHistoryViewControllerDelegate, WCMusicSmartBoxViewControllerDelegate, WCMusicSearchContentViewControllerDelegate, MMPageSheetAdapterDelegate>
{
    BOOL _isEmbededMode; // +0x70
    MMPageSheetAdapter * _adapter; // +0x78
    id /* block */ _sendMusicHandler; // +0x80
    id /* block */ _musicPlayStopHandler; // +0x88
    id /* block */ _viewDidBePopedOrDismissedHandler; // +0x90
    WCMusicSearchContext * _searchContext; // +0x98
    WCStateMachine * _stateMachine; // +0xa0
    MMMusicInfo * _playingMusicInfo; // +0xa8
    UIViewController * _currentDisplayingViewController; // +0xb0
    WCMusicSearchContentViewController * _searchViewController; // +0xb8
    WCMusicSmartBoxViewController * _smartBoxViewController; // +0xc0
    WCMusicListenHistoryViewController * _historyViewController; // +0xc8
    NSArray * _viewControllers; // +0xd0
    WCMusicSearchReporter * _reporter; // +0xd8
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupStateMachine;
- (void)cancelLastSearch;
- (void)showAsHalfScreen;
- (id)generateAdapter;
- (void)pushFromAdapter:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)setupViewControllers;
- (void)doSearch;
- (void)lazySearch:(id)arg1;
- (void)onTextChanged:(id)arg1;
- (void)onTextCleared;
- (void)onDoneButtonClicked;
- (void)displayViewController:(id)arg1;
- (void)showHistoryView;
- (void)showSearchView;
- (void)showSuggestionView;
- (void)updateQuery:(id)arg1;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)playOrStopWithMusicInfo:(id)arg1;
- (void)stopPlayingIfNeeded;
- (BOOL)isCurrentPlayingSameMusicInfo:(id)arg1;
- (void)setupChatUsername:(id)arg1;
- (void)musicSearchContentViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 musicInfo:(id)arg3 responseInfo:(id)arg4;
- (void)musicSearchContentViewController:(id)arg1 didClickSendWithMusicInfo:(id)arg2 coverImageData:(id)arg3 responseInfo:(id)arg4;
- (void)musicSearchContentViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)musicListenHistoryViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)musicListenHistoryViewController:(id)arg1 didSelectItemWithMusicInfo:(id)arg2 indexPath:(id)arg3;
- (void)musicSmartBoxViewController:(id)arg1 didSelectItemWithInfo:(id)arg2 indexPath:(id)arg3;
- (void)musicSmartBoxViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (id)stateMachine;
- (id)searchViewController;
- (id)smartBoxViewController;
- (id)historyViewController;
- (id)viewControllers;
- (id)reporter;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id /* block */)sendMusicHandler;
- (void)setSendMusicHandler:(id /* block */)arg1;
- (id /* block */)musicPlayStopHandler;
- (void)setMusicPlayStopHandler:(id /* block */)arg1;
- (id /* block */)viewDidBePopedOrDismissedHandler;
- (void)setViewDidBePopedOrDismissedHandler:(id /* block */)arg1;
- (BOOL)isEmbededMode;
- (void)setIsEmbededMode:(BOOL)arg1;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (id)playingMusicInfo;
- (void)setPlayingMusicInfo:(id)arg1;
- (id)currentDisplayingViewController;
- (void)setCurrentDisplayingViewController:(id)arg1;
- (void)setSearchViewController:(id)arg1;
- (void)setSmartBoxViewController:(id)arg1;
- (void)setHistoryViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
