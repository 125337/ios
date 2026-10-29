@interface MJShootComposingTemplatePanelViewModel : NSObject <MJShootComposingTemplateSinglePageViewModelTabDataSource>
{
    BOOL _isInSingleTemplateShowingMode; // +0x8
    BOOL _shouldHideNoneTemplateShootEntry; // +0x9
    BOOL _shouldShowMoreEntryToTemplatesPanel; // +0xa
    BOOL _shouldLimitTemplateDisplayCount; // +0xb
    unsigned long long _camEffectBizScene; // +0x10
    MJShootComposingViewModel * _shootComposingVM; // +0x18
    MJPublisherEffectReporter * _editingEffectReporter; // +0x20
    unsigned long long _selectedTabID; // +0x28
    NSString * _selectedTemplateID; // +0x30
    NSString * _username; // +0x38
    WCGetCameraTemplateListParams * _cgiParams; // +0x40
    NSArray * _tabInfos; // +0x48
    NSMutableArray * _templateItemsForListView; // +0x50
    NSArray * _originalDefaultTemplates; // +0x58
    NSString * _downloadingTemplateID; // +0x60
    UBDictionarySignal * _templateDownloadingProgressDidChangeSignal; // +0x68
    UBDictionarySignal * _templateDownloadingDidFinishSignal; // +0x70
    UBDictionarySignal * _templatePanelDidLocalUpdateFavTabSignal; // +0x78
    id <MJShootComposingTemplatePanelViewModelDelegate> _delegate; // +0x80
    unsigned long long _enterScene; // +0x88
    NSMutableSet * _loadedTemplateItemReportModels; // +0x90
    NSMutableSet * _displayedTemplateItemReportModels; // +0x98
    unsigned long long _currentTabID; // +0xa0
    MJShootTemplateItemReportModel * _userSelectedTemplateItemReportModel; // +0xa8
    MMCameraTemplateItem * _emptyItem; // +0xb0
    MJShootComposingTemplateSearchViewModel * _searchViewModel; // +0xb8
    NSArray * _singlePageVMs; // +0xc0
    NSMutableDictionary * _downloadTemplateIDByRequestID; // +0xc8
    MJShootComposingTemplateSinglePageViewModel * _defaultTabVM; // +0xd0
    long long _favTabIndex; // +0xd8
    NSArray * _templateItemsForDefaultTab; // +0xe0
}
+ (id)createDummyFavTabInfo;
+ (long long)createDummyFavTabIndex;
+ (id)favTabInfoInTabs:(id)arg1;
+ (long long)favTabIndexInTabs:(id)arg1;
- (id)initWithUsername:(id)arg1 cgiParams:(id)arg2 camEffectBizScene:(unsigned long long)arg3;
- (BOOL)shouldDelegateTemplateDownload;
- (id)templatePageViewModels;
- (void)fetchTemplateItemsForDefaultTab;
- (void)fetchTemplateItemWithShortURL:(id)arg1;
- (void)fetchTemplateItemWithID:(id)arg1 notUseCache:(BOOL)arg2;
- (BOOL)shouldShowTemplateSearchEntry;
- (id)tabIDKeyWithID:(unsigned long long)arg1;
- (BOOL)isTemplateLoadedWithItem:(id)arg1;
- (void)startDownloadingTemplateWithItem:(id)arg1;
- (void)didFinishCurrentTemplateItemDownloading;
- (void)handleTemplateDownloadAfterPanelSelection:(id)arg1;
- (void)templateSinglePageViewModel:(id)arg1 didFetchTabInfos:(id)arg2 currentTabInfo:(id)arg3 itemsForDefaultTab:(id)arg4;
- (void)templateSinglePageViewModel:(id)arg1 didUpdateTemplateItems:(id)arg2;
- (void)loadMoreTemplateItemsForDefaultTab;
- (unsigned long long)getTemplateScene;
- (void)addTemplateToFavoritesWithItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)onDidAddFavTemplateItem:(id)arg1;
- (void)removeTemplateFromFavoritesWithItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)onDidRemoveFavTemplateItem:(id)arg1;
- (BOOL)updateTemplateItemFavoriteStatus:(id)arg1;
- (void)insertFavTabWithInfo:(id)arg1 atIndex:(long long)arg2;
- (void)removeFavTabAtIndex:(long long)arg1;
- (id)createTemplateSinglePageViewModelWithTabID:(unsigned long long)arg1 tabType:(unsigned int)arg2;
- (unsigned long long)realTemplatePositionAtIndex:(unsigned long long)arg1;
- (id)buildNonEmptyTemplateItemsForListView;
- (id)buildTemplateItemsForListViewWithTemplateItems:(id)arg1;
- (void)updateOriginalDefaultTemplates:(id)arg1;
- (unsigned long long)camEffectBizScene;
- (id)shootComposingVM;
- (void)setShootComposingVM:(id)arg1;
- (id)editingEffectReporter;
- (void)setEditingEffectReporter:(id)arg1;
- (unsigned long long)selectedTabID;
- (void)setSelectedTabID:(unsigned long long)arg1;
- (id)selectedTemplateID;
- (void)setSelectedTemplateID:(id)arg1;
- (BOOL)isInSingleTemplateShowingMode;
- (void)setIsInSingleTemplateShowingMode:(BOOL)arg1;
- (id)username;
- (id)cgiParams;
- (id)tabInfos;
- (void)setTabInfos:(id)arg1;
- (id)templateItemsForListView;
- (void)setTemplateItemsForListView:(id)arg1;
- (id)originalDefaultTemplates;
- (void)setOriginalDefaultTemplates:(id)arg1;
- (id)downloadingTemplateID;
- (void)setDownloadingTemplateID:(id)arg1;
- (id)templateDownloadingProgressDidChangeSignal;
- (id)templateDownloadingDidFinishSignal;
- (id)templatePanelDidLocalUpdateFavTabSignal;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)loadedTemplateItemReportModels;
- (void)setLoadedTemplateItemReportModels:(id)arg1;
- (id)displayedTemplateItemReportModels;
- (void)setDisplayedTemplateItemReportModels:(id)arg1;
- (unsigned long long)currentTabID;
- (void)setCurrentTabID:(unsigned long long)arg1;
- (id)userSelectedTemplateItemReportModel;
- (void)setUserSelectedTemplateItemReportModel:(id)arg1;
- (BOOL)shouldHideNoneTemplateShootEntry;
- (void)setShouldHideNoneTemplateShootEntry:(BOOL)arg1;
- (BOOL)shouldShowMoreEntryToTemplatesPanel;
- (void)setShouldShowMoreEntryToTemplatesPanel:(BOOL)arg1;
- (BOOL)shouldLimitTemplateDisplayCount;
- (void)setShouldLimitTemplateDisplayCount:(BOOL)arg1;
- (id)emptyItem;
- (id)searchViewModel;
- (id)singlePageVMs;
- (void)setSinglePageVMs:(id)arg1;
- (id)downloadTemplateIDByRequestID;
- (id)defaultTabVM;
- (void)setDefaultTabVM:(id)arg1;
- (long long)favTabIndex;
- (void)setFavTabIndex:(long long)arg1;
- (id)templateItemsForDefaultTab;
- (void)setTemplateItemsForDefaultTab:(id)arg1;
- (void).cxx_destruct;
@end
