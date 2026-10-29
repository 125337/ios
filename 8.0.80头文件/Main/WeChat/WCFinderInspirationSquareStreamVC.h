@interface WCFinderInspirationSquareStreamVC : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderArbitraryPageViewDataSource, WCFinderArbitraryPageViewDataDelegate, WCFinderInspirationSquareStreamViewModelDelegate, WCFinderPostMgrDelegate, WCFinderInspirationSquareHeaderDelegate>
{
    BOOL _isOnPostLoading; // +0x70
    int _flowCommentScene; // +0x74
    int _listCommentScene; // +0x78
    WCFinderTabPageView * _tabPageView; // +0x80
    WCFinderAnimationLoadingView * _loadingView; // +0x88
    WCFinderArbitraryPageView * _pageView; // +0x90
    WCFinderPostMgr * _postMgr; // +0x98
    WCFinderInspirationSquareHeader * _headerView; // +0xa0
    WCFinderPostPlayInfo * _postPlayInfo; // +0xa8
    unsigned long long _stayTimeMs; // +0xb0
    unsigned long long _recommendDuration; // +0xb8
    unsigned long long _newDuration; // +0xc0
    WCFinderInspirationSquareStreamViewModel * _firstTabViewModel; // +0xc8
    WCFinderFeedAudioHelper * _feedAudioHelper; // +0xd0
    RecommendedMusicInfo * _patMusicInfo; // +0xd8
    WCFinderDataItem * _anchorDataItem; // +0xe0
}
- (id)initWithPlayInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateLayoutForFlowView:(id)arg1 contentInset:(UIEdgeInsets)arg2 minSize:(CGSize)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)feedAudioHelper;
- (id)getAnchorFeedId;
- (id)getAnchorSessionBuffer;
- (BOOL)enableAnchorDataItemAsSource;
- (id)getSourceFeedId;
- (id)getSourceSessionBuffer;
- (id)bgmMusicInfoModel;
- (void)syncPlayInfoSourceInfoWithAnchorDataItemIfNeeded;
- (void)updatePatMusicInfoByInfo:(id)arg1;
- (void)prepareAnchorPatMusicWithCompletion:(id /* block */)arg1;
- (void)checkShouldDownloadFirstVideo;
- (id)navigationBarBackgroundColor;
- (id)arbitraryTabView:(id)arg1 pageTabNameForIdentifier:(id)arg2 index:(long long)arg3;
- (id)arbitraryTabView:(id)arg1 pageViewController:(id)arg2 index:(long long)arg3;
- (void)arbitraryTabView:(id)arg1 expectPageContentInset:(UIEdgeInsets)arg2 minSize:(CGSize)arg3 forIndex:(long long)arg4 pageView:(id)arg5 pageVC:(id)arg6 identifier:(id)arg7;
- (id)arbitraryTabView:(id)arg1 innerScrollViewForPageView:(id)arg2;
- (void)arbitraryTabView:(id)arg1 didDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (void)arbitraryTabView:(id)arg1 didEndDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (void)inspirationSquareStreamViewModelFirstPageSuccessful:(id)arg1;
- (void)inspirationSquareHeaderClickPostAction:(id)arg1;
- (void)inspirationSquareHeaderClickFavAction:(id)arg1;
- (BOOL)checkContactSilent;
- (id)postMgrGetPostPlayInfo:(id)arg1;
- (void)onPostMergeSession:(id)arg1;
- (id)onPostFollowTemplateFeedId;
- (id)copySourceInfoFromPlayInfo;
- (id)postMgrSourceInfo:(id)arg1;
- (id)getRefDataItemForExtStatsReport;
- (id)onPostMusicIds:(id)arg1;
- (id)postMgrGetMusicInfo;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(BOOL)arg1 postMgr:(id)arg2;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)onPostFollowMusicFeedId:(id)arg1;
- (void)triggerPostActionByCheckAudioTrack:(id)arg1;
- (BOOL)postMgrEnableOpenAlbum:(id)arg1;
- (void)postMgrWillOpenAlbum:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)tabPageView;
- (void)setTabPageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (id)postMgr;
- (void)setPostMgr:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)postPlayInfo;
- (void)setPostPlayInfo:(id)arg1;
- (int)flowCommentScene;
- (void)setFlowCommentScene:(int)arg1;
- (int)listCommentScene;
- (void)setListCommentScene:(int)arg1;
- (unsigned long long)stayTimeMs;
- (void)setStayTimeMs:(unsigned long long)arg1;
- (unsigned long long)recommendDuration;
- (void)setRecommendDuration:(unsigned long long)arg1;
- (unsigned long long)newDuration;
- (void)setNewDuration:(unsigned long long)arg1;
- (id)firstTabViewModel;
- (void)setFirstTabViewModel:(id)arg1;
- (void)setFeedAudioHelper:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (BOOL)isOnPostLoading;
- (void)setIsOnPostLoading:(BOOL)arg1;
- (id)anchorDataItem;
- (void)setAnchorDataItem:(id)arg1;
- (void).cxx_destruct;
@end
