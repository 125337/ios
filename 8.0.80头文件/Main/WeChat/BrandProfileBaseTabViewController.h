@interface BrandProfileBaseTabViewController : UITableViewController <BrandProfileMsgCellDelegate, BrandProfileTipsCellDelegate, MMRefreshTableFooterDelegate, MMImageLoaderObserver, BrandProfileTabVCProtocol>
{
    BizProfileV2Resp * _cacheItem; // +0x8
    BrandProfileCgiContext * _cgiContext; // +0x10
    NSMutableArray * _sectionDataList; // +0x18
    NSMutableArray * _visibleViewModelList; // +0x20
    NSMutableSet * m_setFastLoadTemplateType; // +0x28
    WCTimeLineFooterView * _footerView; // +0x30
    BrandProfileFixedTopSectionData * _fixedTopSectionData; // +0x38
    UIView * _mountedFixedTopView; // +0x40
    BOOL _hasReportedAllTabJumpExpose; // +0x48
    BOOL _preloadCoverImageEnable; // +0x49
    id <BrandProfileBaseTabViewControllerDelegate> _delegate; // +0x50
    BrandProfileReporter * _reporter; // +0x58
    MMLoadingView * _loadingView; // +0x60
    BrandProfileEnterInfo * _bpeInfo; // +0x68
}
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)loadingView;
- (void)loadCacheItem:(id)arg1;
- (void)setupTableView;
- (void)configTableView;
- (void)setupFooterView;
- (void)handleTipsWording;
- (void)onFetchBizProfile:(id)arg1 resp:(id)arg2 action:(int)arg3 userInfo:(id)arg4;
- (void)handleFirstPkgFail;
- (void)handleFirstPkgResp:(id)arg1;
- (void)handleNextPkgResp:(id)arg1;
- (void)tableViewReloadData;
- (void)layoutFixedTopViewIfNeeded;
- (id)getTipsWordingForResp:(id)arg1;
- (id)getFooterWordingForResp:(id)arg1;
- (BOOL)appendMsgList:(id)arg1;
- (BOOL)appendGroupMsgList:(id)arg1 isFeature:(BOOL)arg2;
- (BOOL)appendGroupMessage:(id)arg1 groupIndex:(unsigned long long)arg2 isFeature:(BOOL)arg3;
- (BOOL)shouldDeduplicateGroupMessages;
- (void)appendSectionData:(id)arg1;
- (void)updateOutboxMsgList:(id)arg1;
- (void)advanceUpdateMPPageDataWithSectionData:(id)arg1;
- (id)preloadItemMessagesForSectionData:(id)arg1;
- (id)preloadSourceUserNameForItemMessage:(id)arg1;
- (void)reportFeatureMsgExpose;
- (void)updateSectionWidthInSectionDataList;
- (long long)isMessageExistInSectionDataList:(id)arg1;
- (long long)isExistInSectionDataList:(id)arg1;
- (id)indexesOfSectionDataListWithAppMsgId:(unsigned int)arg1;
- (void)preDownloadCoverImageIfNeed:(id)arg1;
- (double)calcuateSectionWidth;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)shouldEnableItemLongPress;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)handleMsgSectionDataWillDisplay:(id)arg1;
- (void)openWebView:(id)arg1 extraInfo:(id)arg2 hasItemShowType:(BOOL)arg3 itemShowType:(unsigned int)arg4 fromFeature:(BOOL)arg5;
- (id)genWebViewExtraInfoFromSourceMessage;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)fetchProfileNextPkg;
- (void)onReloadItemCellView:(id)arg1;
- (void)onMsgSectionHeightChange:(id)arg1;
- (void)onFooterUnfold:(id)arg1;
- (void)onFeatureMsgUnfold:(id)arg1;
- (void)onPicModuleSelectItem:(id)arg1;
- (void)onPicModuleLike:(id)arg1 liked:(BOOL)arg2;
- (void)onPicModuleShowAll;
- (id)getViewController;
- (id)getBrandContact;
- (void)onSelectItemViewModel:(id)arg1;
- (id)getOpenWebviewExtraInfoWithItemMsg:(id)arg1;
- (id)getOpenWebviewExtraInfoWithItemViewModel:(id)arg1;
- (void)internalOpenWebViewWithItemViewModel:(id)arg1;
- (void)openWebViewWithItemViewModel:(id)arg1;
- (void)openUsingTempURLWithViewModel:(id)arg1;
- (void)onWebUrlClicked:(id)arg1;
- (void)updateTemplateFile;
- (void)handleVisibleViewModelList;
- (BOOL)isInVisibleViewModelList:(id)arg1;
- (void)addToVisibleViewModelList:(id)arg1;
- (void)removeFromVisibleViewModelList:(id)arg1;
- (void)handleExposuredViewModel:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)updateCeilingBackgroundWithFeatured:(BOOL)arg1;
- (void)updateCeilingBackgroundForTopVerticalPic:(id)arg1;
- (unsigned long long)tabType;
- (int)cgiReqActionType;
- (id)cgiRespMessageList:(id)arg1;
- (void)loadOutboxMessageCache;
- (id)outboxMessageList;
- (BOOL)shouldOverrideExistSectionData:(id)arg1;
- (int)cgiRespFuncFlag;
- (void)setContentOffset:(CGPoint)arg1;
- (id)tabTitle;
- (id)viewController;
- (void)setExternalGestureRecognizer:(id)arg1;
- (void)deleteSection:(id)arg1;
- (void)deleteItem:(id)arg1 inSection:(id)arg2;
- (id)allSections;
- (id)allMessageSections;
- (id)fixedTopView;
- (double)fixedTopViewHeight;
- (double)fixedTopViewVerticalSpacing;
- (id)currentCacheItem;
- (int)serviceProxyType;
- (unsigned int)reportFromTab;
- (BOOL)shouldFetchNextPage;
- (BOOL)shouldShowLoadMoreFooter;
- (unsigned int)profileBrandModeScene;
- (void)onLongPressItemViewModel:(id)arg1;
- (void)resumeEditingViewModel:(id)arg1;
- (void)updateProfileMessages:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)bpeInfo;
- (void)setBpeInfo:(id)arg1;
- (BOOL)preloadCoverImageEnable;
- (void)setPreloadCoverImageEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
