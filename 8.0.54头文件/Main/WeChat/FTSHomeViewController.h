@interface FTSHomeViewController : FTSBaseViewController <MMTListAdapterDataSource, UITextFieldDelegate, FTSResultPage, FTSDataChangeBroadCast, UITableViewDelegate, WSInputProviderDelegate, _TtP6WeChat36WSNativeHotListContainerViewDelegate_, FTSHomePage>
{
    BOOL _isFromVoice; // +0x68
    id <FTSHomeViewControllerDelegate> _delegate; // +0x70
    MMTListAdapter * _listAdapter; // +0x78
    FTSVoiceSearchBarController * _presenter; // +0x80
    id <WSHotListTeachView> _guideView; // +0x88
    UITableView * _tableView; // +0x90
    NSArray * _sectionData; // +0x98
    WCWebSearchInputProvider * _inputProvider; // +0xa0
    _TtC6WeChat19FTSHomePageReporter * _reporter; // +0xa8
}
- (void)registerYReportSdk;
- (void)viewDidLoad;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initGuideView;
- (void)onNavigationCancelItemClick;
- (void)visionStyleDismissPage;
- (id)customSearchBar;
- (void)doWebSearchWithQuery:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)applyTextFieldBlur;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)updateFooterView;
- (void)setLoadingStatus;
- (BOOL)isNativeGuideView;
- (void)reloadList;
- (id)searchBarText;
- (id)searchTextField;
- (void)exitPageWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)resignSearchFirstResponder;
- (id)resultListView;
- (void)onSelectSearchResult;
- (void)onContactsModified;
- (void)onGetTextInput:(id)arg1 isFromVoice:(BOOL)arg2;
- (id)inputProvider;
- (void)onEndInteractivePop:(BOOL)arg1;
- (id)homePageReporer;
- (void)onFTSHomePageSearchDone;
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
- (id)sectionData;
- (void)setSectionData:(id)arg1;
- (void)setInputProvider:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)isFromVoice;
- (void)setIsFromVoice:(BOOL)arg1;
- (void).cxx_destruct;
@end

