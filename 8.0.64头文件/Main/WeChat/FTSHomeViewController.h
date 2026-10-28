@interface FTSHomeViewController : FTSBaseViewController <MMTListAdapterDataSource, UITextFieldDelegate, FTSResultPage, FTSDataChangeBroadCast, UITableViewDelegate, WCSearchBarDelegate, WSInputProviderDelegate, _TtP6WeChat36WSNativeHotListContainerViewDelegate_, FTSWebSearchAdViewDelegate, FTSFloatingVoiceInputViewDelegate, FTSHomePage>
{
    BOOL _isFromVoice; // +0x70
    BOOL _isCurrentInDeepThinking; // +0x71
    BOOL _isSearchBarHasText; // +0x72
    BOOL _jumpToSearchByVoiceInputInDeepThinking; // +0x73
    id <FTSHomeViewControllerDelegate> _delegate; // +0x78
    MMTListAdapter * _listAdapter; // +0x80
    FTSVoiceSearchBarController * _presenter; // +0x88
    id <WSHotListTeachView> _guideView; // +0x90
    UITableView * _tableView; // +0x98
    UIButton * _settingButton; // +0xa0
    NSArray * _sectionData; // +0xa8
    WCWebSearchInputProvider * _inputProvider; // +0xb0
    _TtC6WeChat19FTSHomePageReporter * _reporter; // +0xb8
    GlobalSearchInputConfig * _globalSearchInputConfig; // +0xc0
    long long _currReportLocalSessionId; // +0xc8
    long long _currReportLocalSearchId; // +0xd0
    long long _currReportRequestId; // +0xd8
    FTSFloatingVoiceInputView * _floatingVoiceInputView; // +0xe0
    UIButton * _voiceButtonV3; // +0xe8
    UIView * _deepThinkTouchView; // +0xf0
}
- (void)registerYReportSdk;
- (void)viewDidLoad;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)forceQuit;
- (void)initGuideView;
- (void)setupSettingButton;
- (double)getFloatingButtonBottomSpace:(double)arg1;
- (void)onNavigationCancelItemClick;
- (void)visionStyleDismissPage;
- (id)globalSearchInputConfig;
- (id)customSearchBar;
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
- (void)onJumpToAISearchWithTitle:(id)arg1 scene:(unsigned long long)arg2 businessType:(long long)arg3 hideSearchBar:(BOOL)arg4 hideNavBar:(BOOL)arg5 extParams:(id)arg6;
- (void)onJumpToAdWithAid:(id)arg1;
- (void)onNotifyNegativeWithAid:(id)arg1;
- (void)onChangeAISearchShowStatusWithShow:(BOOL)arg1;
- (void)onChangeAdShowStatusWithShow:(BOOL)arg1;
- (void)applyTextFieldBlur;
- (double)getKeyBoardHeight;
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
- (void)reloadList;
- (id)searchBarText;
- (void)setSearchBarText:(id)arg1 isReplace:(BOOL)arg2;
- (id)searchTextField;
- (void)exitPageWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)resignSearchFirstResponder;
- (id)resultListView;
- (void)onSelectSearchResult;
- (void)onContactsModified;
- (void)onGetTextInput:(id)arg1 isFromVoice:(BOOL)arg2;
- (void)onGetTextInputFromNewVoice:(id)arg1;
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
- (void)onConfirmSearch:(id)arg1;
- (void)onRecordingViewShow;
- (void)onRecordingViewHide;
- (id)getFloatingVoiceInputView;
- (id)getSettingButton;
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
- (id)sectionData;
- (void)setSectionData:(id)arg1;
- (void)setInputProvider:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void)setGlobalSearchInputConfig:(id)arg1;
- (BOOL)isFromVoice;
- (void)setIsFromVoice:(BOOL)arg1;
- (long long)currReportLocalSessionId;
- (void)setCurrReportLocalSessionId:(long long)arg1;
- (long long)currReportLocalSearchId;
- (void)setCurrReportLocalSearchId:(long long)arg1;
- (long long)currReportRequestId;
- (void)setCurrReportRequestId:(long long)arg1;
- (id)floatingVoiceInputView;
- (void)setFloatingVoiceInputView:(id)arg1;
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
- (void).cxx_destruct;
@end
