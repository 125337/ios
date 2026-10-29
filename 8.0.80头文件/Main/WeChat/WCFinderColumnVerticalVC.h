@interface WCFinderColumnVerticalVC : WCFinderFeedListViewController <WCFinderFeedListTransitionVerticalGestureBehavior>
{
    BOOL _singleFeedMode; // +0x70
    BOOL _hasReportedPageIn; // +0x71
    BOOL _hasReportedPageOut; // +0x72
    long long _enterFocusIdnex; // +0x78
    unsigned long long _feedColumnId; // +0x80
    NSString * _columnTraceId; // +0x88
    unsigned long long _columnDetailOutType; // +0x90
    unsigned long long _pageEnterTimeMs; // +0x98
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)onClickBackButton;
- (void)configVerticalScrollToMinimize;
- (double)bottomOffset;
- (id)currentFocusContentVMWithIsInitiator:(BOOL)arg1;
- (void)verticalCloseGestureDidConfirmSlideUp:(BOOL)arg1;
- (void)updateColumnDetailOutTypeForActiveGestureIfNeeded;
- (BOOL)isSwipeBackGestureActive;
- (BOOL)isGestureActive:(id)arg1;
- (BOOL)needReportColumnDetailPage;
- (void)reportColumnDetailPageInIfNeeded;
- (void)reportColumnDetailPageOutIfNeeded;
- (id)columnDetailReportParams;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)_checkAndAdaptToLandscapeIfNeeded;
- (long long)enterFocusIdnex;
- (void)setEnterFocusIdnex:(long long)arg1;
- (BOOL)singleFeedMode;
- (void)setSingleFeedMode:(BOOL)arg1;
- (unsigned long long)feedColumnId;
- (void)setFeedColumnId:(unsigned long long)arg1;
- (id)columnTraceId;
- (void)setColumnTraceId:(id)arg1;
- (unsigned long long)columnDetailOutType;
- (void)setColumnDetailOutType:(unsigned long long)arg1;
- (unsigned long long)pageEnterTimeMs;
- (void)setPageEnterTimeMs:(unsigned long long)arg1;
- (BOOL)hasReportedPageIn;
- (void)setHasReportedPageIn:(BOOL)arg1;
- (BOOL)hasReportedPageOut;
- (void)setHasReportedPageOut:(BOOL)arg1;
- (void).cxx_destruct;
@end
