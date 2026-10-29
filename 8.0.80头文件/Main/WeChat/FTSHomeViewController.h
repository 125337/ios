@interface FTSHomeViewController : FTSBaseViewController <MMTListAdapterDataSource, UITextFieldDelegate, FTSResultPage, FTSDataChangeBroadCast, UITableViewDelegate, WCSearchBarDelegate, WSInputProviderDelegate, _TtP6WeChat36WSNativeHotListContainerViewDelegate_, FTSWebSearchAdViewDelegate, FTSFloatingVoiceInputViewDelegate, MMDictationLogicIconDelegate, MMDictationLogicObserver, FTSHomePage>
{
    BOOL _isCurrentInDeepThinking; // +0x70
    BOOL _isSearchBarHasText; // +0x71
    BOOL _jumpToSearchByVoiceInputInDeepThinking; // +0x72
    BOOL _hasVoiceButtonV3Reported; // +0x73
    BOOL _enableFeedback; // +0x74
    BOOL _isHistoryViewUnfold; // +0x75
    BOOL _isHistoryViewEditing; // +0x76
    BOOL _isApplyingSearchGreenMicResult; // +0x77
    BOOL _searchGreenMicActivatedBefore; // +0x78
    BOOL _searchGreenMicAutoStartConsumed; // +0x79
    BOOL _searchGreenMicAutoStartPendingAfterAuthorization; // +0x7a
    BOOL _searchGreenMicExposed; // +0x7b
    BOOL _searchGreenMicActualRecordStarted; // +0x7c
    BOOL _searchGreenMicSessionInvalidated; // +0x7d
    BOOL _searchGreenMicSearchBoxStopRequested; // +0x7e
    BOOL _searchGreenMicSearchBoxStopReported; // +0x7f
    BOOL _searchGreenMicManuallyStopped; // +0x80
    BOOL _searchGreenMicSettingInputBoxFocus; // +0x81
    BOOL _searchGreenMicExperimentResolved; // +0x82
    BOOL _searchGreenMicExperimentEnabled; // +0x83
    unsigned int _isFromVoice; // +0x84
    id <FTSHomeViewControllerDelegate> _delegate; // +0x88
    MMTListAdapter * _listAdapter; // +0x90
    FTSVoiceSearchBarController * _presenter; // +0x98
    id <WSHotListTeachView> _guideView; // +0xa0
    UITableView * _tableView; // +0xa8
    UIButton * _settingButton; // +0xb0
    UIButton * _feedbackButton; // +0xb8
    NSArray * _sectionData; // +0xc0
    WCWebSearchInputProvider * _inputProvider; // +0xc8
    _TtC6WeChat19FTSHomePageReporter * _reporter; // +0xd0
    GlobalSearchInputConfig * _globalSearchInputConfig; // +0xd8
    long long _currReportLocalSessionId; // +0xe0
    long long _currReportLocalSearchId; // +0xe8
    long long _currReportRequestId; // +0xf0
    FTSFloatingVoiceInputView * _floatingVoiceInputView; // +0xf8
    double _lastAppliedFloatingButtonBottomSpace; // +0x100
    UIButton * _voiceButtonV3; // +0x108
    UIView * _deepThinkTouchView; // +0x110
    NSString * _voiceId; // +0x118
    FTSAISearchTipsView * _aiTipsView; // +0x120
    NSString * _aiTipsClickID; // +0x128
    FTSAITipsManager * _aiTipsManager; // +0x130
    MMDictationLogicIcon * _searchGreenMicIcon; // +0x138
    NSString * _searchGreenMicSearchBoxStopQuery; // +0x140
    UIEdgeInsets _contentExtraInsets; // +0x148
}
- (void)dealloc;
- (void)resolveSearchGreenMicExperimentIfNeeded;
- (BOOL)isSearchGreenMicEnabled;
- (void)startSearchGreenMicIfNeeded;
- (void)tryStartSearchGreenMicAfterAuthorizationIfNeeded;
- (BOOL)shouldShowSearchGreenMic;
- (void)setSearchGreenMicVisible:(BOOL)arg1;
- (void)reportGreenMicVoiceWithActionID:(unsigned long long)arg1;
- (void)invalidateSearchGreenMicSession;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)stopSearchGreenMicForOtherInputIfNeeded;
- (void)updateSearchGreenMicVisibility;
- (void)setupSearchGreenMicIfNeeded;
- (void)registerYReportSdk;
- (void)viewDidLoad;
- (void)updateVoiceInputViewStatus;
- (void)addVoiceInputViewWhenNeed;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)refreshFloatingButtonBottomSpaceIfNeeded;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)forceQuit;
- (void)initGuideView;
- (void)updateBackgroundColor;
- (BOOL)shouldSyncExtendedContentBackground;
- (BOOL)shouldAlignSearchRowWithNavigationBar;
- (BOOL)shouldAdaptDuoSearchBarHorizontalMargins;
- (UIEdgeInsets)computeContentExtraInsets;
- (void)searchBarHorizontalLayoutDidUpdate;
- (double)searchRowCenterOffsetInSearchBar;
- (void)setupSettingButton;
- (void)setupFeedbackButton;
- (double)getFloatingButtonBottomSpace:(double)arg1;
- (double)getFloatingButtonBottomSpaceOrigin:(double)arg1;
- (double)getFloatingButtonBottomSpaceWhenTapStyle:(double)arg1;
- (void)onNavigationCancelItemClick;
- (void)visionStyleDismissPage;
- (id)globalSearchInputConfig;
- (id)customSearchBar;
- (double)searchBarHeight;
- (void)doSearch;
- (void)report26897:(unsigned long long)arg1 actionType:(unsigned long long)arg2;
- (void)report26897:(unsigned long long)arg1 actionType:(unsigned long long)arg2 docInfo:(id)arg3;
- (void)report25118:(unsigned long long)arg1 itemInfo:(id)arg2 docInfo:(id)arg3 scene:(unsigned long long)arg4 businessType:(long long)arg5;
- (void)shouldReturnStartSearch;
- (void)onPageSettingItemClick;
- (void)mmInputBoxClear;
- (void)mmInputBoxFirstResponder;
- (void)mmInputBoxTextChanged:(id)arg1 text:(id)arg2;
- (void)mmInputBoxSearchButtonClick;
- (void)mmInputBoxKeyBoardClick;
- (void)mmJumpToResultPage:(id)arg1;
- (void)mmReport26897:(unsigned long long)arg1 actionType:(unsigned long long)arg2;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)MMDictation_touchesBegan:(CGPoint)arg1;
- (void)MMDictation_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMDictation_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMDictation_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)MMDictationLogicIconDidExpose;
- (void)MMDictationLogicIconDidClickStopIntent;
- (void)MMDictationLogicIconWillStart;
- (void)MMDictationLogicIconWillStop;
- (void)onDictationBegan:(id)arg1;
- (void)onDictationRecordStopped:(id)arg1 reason:(long long)arg2;
- (void)MMDictationLogicIconDidEnd;
- (_NSRange)MMDictationLogicIcon_selectedRange;
- (void)MMDictationLogicIcon_replaceRange:(_NSRange)arg1 withText:(id)arg2;
- (id)MMDictationLogicIcon_getPrefixContent;
- (id)MMDictationLogicIcon_getSuffixContent;
- (id)MMDictationLogicIcon_getContent;
- (id)MMDictationLogicIcon_getChatName;
- (id)MMDictationLogicIcon_getFullText;
- (void)onJumpToAISearchWithTitle:(id)arg1 scene:(unsigned long long)arg2 businessType:(long long)arg3 hideSearchBar:(BOOL)arg4 hideNavBar:(BOOL)arg5 extParams:(id)arg6;
- (void)onJumpToAdWithAid:(id)arg1;
- (void)onNotifyNegativeWithAid:(id)arg1;
- (void)onChangeAISearchShowStatusWithShow:(BOOL)arg1;
- (void)onChangeVoiceSearchShowStatusWithShow:(BOOL)arg1;
- (void)onChangeAdShowStatusWithShow:(BOOL)arg1;
- (double)minimumFloatingButtonBottomSpaceAboveSettingButton;
- (void)onUpdateLayout;
- (void)applyTextFieldBlur;
- (void)onTapUnfoldHistoryWithIsUnfold:(BOOL)arg1;
- (void)onTapEditHistoryWithIsEditing:(BOOL)arg1;
- (double)getKeyBoardHeight;
- (double)getFloatingButtonOcclusionHeight;
- (BOOL)isFloatingVoiceButtonVisible;
- (BOOL)getCheckBoxStatusWithKey:(id)arg1;
- (id)getCheckBoxes;
- (id)getExtInfo;
- (BOOL)isCheckBoxKeyWithKey:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)updateInputStatus:(id)arg1;
- (void)updateViewHideStates:(BOOL)arg1;
- (void)updateCheckBoxHideState:(id)arg1;
- (void)updateFooterView;
- (void)updateConentViewHiddenStatus:(BOOL)arg1;
- (void)setLoadingStatus;
- (BOOL)isNativeGuideView;
- (void)voiceSearchVerifiedSearchType:(BOOL)arg1;
- (void)voiceSearchStartWebSearch;
- (void)localSearchComplete;
- (void)localSearchFail;
- (void)reloadList;
- (id)searchBarText;
- (void)setSearchBarText:(id)arg1 isReplace:(BOOL)arg2;
- (id)searchTextField;
- (void)exitPageWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)reloadSugList;
- (void)updateFTSHomeUI;
- (void)resignSearchFirstResponder;
- (id)resultListView;
- (void)onSelectSearchResult;
- (id)latestVoiceId;
- (void)onContactsModified;
- (void)onGetTextInput:(id)arg1 isFromVoice:(unsigned int)arg2;
- (void)onGetTextInputFromNewVoice:(id)arg1 voiceId:(id)arg2;
- (id)inputProvider;
- (void)onEndInteractivePop:(BOOL)arg1;
- (id)homePageReporer;
- (void)onFTSHomePageSearchDone;
- (BOOL)isLargeInputBox;
- (BOOL)resultPageHideSearchBar;
- (BOOL)resultPageHideNavBar;
- (void)appendLocalAccountExtParms:(id)arg1;
- (void)appendExtParms:(id)arg1;
- (void)appendExtParms:(id)arg1 hideSearchBar:(BOOL)arg2 hideNavBar:(BOOL)arg3;
- (void)resetReportSession;
- (void)jumpToAISearch:(id)arg1 scene:(unsigned long long)arg2 businessType:(int)arg3 hideSearchBar:(BOOL)arg4 hideNavBar:(BOOL)arg5 extParams:(id)arg6;
- (void)onTapAdItem:(id)arg1;
- (void)onTapHint:(id)arg1;
- (void)onStartPressVoiceInput;
- (void)onConfirmSearch:(id)arg1 voiceId:(id)arg2;
- (void)onRecordingViewShow;
- (void)onRecordingViewHide;
- (id)getFloatingVoiceInputView;
- (id)getSettingButton;
- (void)setupAITips;
- (void)updateAITipsViewWithItems:(id)arg1;
- (void)handleAITipsLabelTapped:(id)arg1;
- (id)prepareParentSearchID:(id)arg1;
- (void)layoutAITipsView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)listAdapter;
- (void)setListAdapter:(id)arg1;
- (id)presenter;
- (void)setPresenter:(id)arg1;
- (id)guideView;
- (void)setGuideView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)settingButton;
- (void)setSettingButton:(id)arg1;
- (id)feedbackButton;
- (void)setFeedbackButton:(id)arg1;
- (id)sectionData;
- (void)setSectionData:(id)arg1;
- (void)setInputProvider:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void)setGlobalSearchInputConfig:(id)arg1;
- (unsigned int)isFromVoice;
- (void)setIsFromVoice:(unsigned int)arg1;
- (long long)currReportLocalSessionId;
- (void)setCurrReportLocalSessionId:(long long)arg1;
- (long long)currReportLocalSearchId;
- (void)setCurrReportLocalSearchId:(long long)arg1;
- (long long)currReportRequestId;
- (void)setCurrReportRequestId:(long long)arg1;
- (id)floatingVoiceInputView;
- (void)setFloatingVoiceInputView:(id)arg1;
- (double)lastAppliedFloatingButtonBottomSpace;
- (void)setLastAppliedFloatingButtonBottomSpace:(double)arg1;
- (id)voiceButtonV3;
- (void)setVoiceButtonV3:(id)arg1;
- (id)deepThinkTouchView;
- (void)setDeepThinkTouchView:(id)arg1;
- (BOOL)isCurrentInDeepThinking;
- (void)setIsCurrentInDeepThinking:(BOOL)arg1;
- (BOOL)isSearchBarHasText;
- (void)setIsSearchBarHasText:(BOOL)arg1;
- (BOOL)jumpToSearchByVoiceInputInDeepThinking;
- (void)setJumpToSearchByVoiceInputInDeepThinking:(BOOL)arg1;
- (BOOL)hasVoiceButtonV3Reported;
- (void)setHasVoiceButtonV3Reported:(BOOL)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (BOOL)enableFeedback;
- (void)setEnableFeedback:(BOOL)arg1;
- (id)aiTipsView;
- (void)setAiTipsView:(id)arg1;
- (id)aiTipsClickID;
- (void)setAiTipsClickID:(id)arg1;
- (id)aiTipsManager;
- (void)setAiTipsManager:(id)arg1;
- (BOOL)isHistoryViewUnfold;
- (void)setIsHistoryViewUnfold:(BOOL)arg1;
- (BOOL)isHistoryViewEditing;
- (void)setIsHistoryViewEditing:(BOOL)arg1;
- (UIEdgeInsets)contentExtraInsets;
- (void)setContentExtraInsets:(UIEdgeInsets)arg1;
- (id)searchGreenMicIcon;
- (void)setSearchGreenMicIcon:(id)arg1;
- (BOOL)isApplyingSearchGreenMicResult;
- (void)setIsApplyingSearchGreenMicResult:(BOOL)arg1;
- (BOOL)searchGreenMicActivatedBefore;
- (void)setSearchGreenMicActivatedBefore:(BOOL)arg1;
- (BOOL)searchGreenMicAutoStartConsumed;
- (void)setSearchGreenMicAutoStartConsumed:(BOOL)arg1;
- (BOOL)searchGreenMicAutoStartPendingAfterAuthorization;
- (void)setSearchGreenMicAutoStartPendingAfterAuthorization:(BOOL)arg1;
- (BOOL)searchGreenMicExposed;
- (void)setSearchGreenMicExposed:(BOOL)arg1;
- (BOOL)searchGreenMicActualRecordStarted;
- (void)setSearchGreenMicActualRecordStarted:(BOOL)arg1;
- (BOOL)searchGreenMicSessionInvalidated;
- (void)setSearchGreenMicSessionInvalidated:(BOOL)arg1;
- (BOOL)searchGreenMicSearchBoxStopRequested;
- (void)setSearchGreenMicSearchBoxStopRequested:(BOOL)arg1;
- (BOOL)searchGreenMicSearchBoxStopReported;
- (void)setSearchGreenMicSearchBoxStopReported:(BOOL)arg1;
- (id)searchGreenMicSearchBoxStopQuery;
- (void)setSearchGreenMicSearchBoxStopQuery:(id)arg1;
- (BOOL)searchGreenMicManuallyStopped;
- (void)setSearchGreenMicManuallyStopped:(BOOL)arg1;
- (BOOL)searchGreenMicSettingInputBoxFocus;
- (void)setSearchGreenMicSettingInputBoxFocus:(BOOL)arg1;
- (BOOL)searchGreenMicExperimentResolved;
- (void)setSearchGreenMicExperimentResolved:(BOOL)arg1;
- (BOOL)searchGreenMicExperimentEnabled;
- (void)setSearchGreenMicExperimentEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
