@interface WCFinderLiveMoreLiveCityViewController : MMCPUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderNearbyMoreLivePageViewManagerDelegate>
{
    BOOL _hasRefreshLiveTabInfo; // +0x68
    int _reportScene; // +0x6c
    WCFinderNearbyMoreLivePageViewManager * _pageViewManger; // +0x70
    WCFinderLiveTabInfo * _cityTabInfo; // +0x78
    WCFinderLivePageStayReporter * _exposeReporter; // +0x80
}
- (id)initWithLiveTabInfo:(id)arg1 fromScene:(int)arg2;
- (void)dealloc;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)reloadFeedFlowView;
- (void)reportExpose:(BOOL)arg1;
- (id)cityTabInfo;
- (void)setLiveTabInfo:(id)arg1;
- (id)finderMoreLiveFeedViewBgColor;
- (void)finderMoreLivePageViewMangerEnterLive:(id)arg1 dataItem:(id)arg2 isFold:(BOOL)arg3 index:(unsigned long long)arg4 isAutoPlaying:(BOOL)arg5;
- (id)finderMoreLivePageViewMangerChannelExtra:(id)arg1 tid:(id)arg2 isFold:(BOOL)arg3 index:(unsigned long long)arg4;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)registerYReportSdk;
- (id)pageViewManger;
- (void)setPageViewManger:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (void)setCityTabInfo:(id)arg1;
- (BOOL)hasRefreshLiveTabInfo;
- (void)setHasRefreshLiveTabInfo:(BOOL)arg1;
- (id)exposeReporter;
- (void)setExposeReporter:(id)arg1;
- (void).cxx_destruct;
@end

