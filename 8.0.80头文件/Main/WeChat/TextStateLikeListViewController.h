@interface TextStateLikeListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, TextStateLikeCellContentViewDelegate, MMRefreshTableFooterDelegate>
{
    BOOL _isDarkMode; // +0x70
    BOOL _isRemoteData; // +0x71
    BOOL _isLoadingData; // +0x72
    BOOL _isShowLoading; // +0x73
    double _cellHeight; // +0x78
    UITableView * _tableView; // +0x80
    NSString * _statusID; // +0x88
    UILabel * _emptyLabel; // +0x90
    WCTimeLineFooterView * _footerView; // +0x98
    TextStatusGetSelfLikedsResp * _currentSelfLikedsResp; // +0xa0
    NSMutableArray * _arrInfo; // +0xa8
    WCFinderAnimationLoadingView * _loadingView; // +0xb0
}
- (void)showAsHalfPageIn:(id)arg1;
- (id)initWithTextStatusID:(id)arg1;
- (id)loadingView;
- (void)startLoadigView;
- (void)stopLoadingView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)tableView;
- (id)emptyLabel;
- (void)initFooterView;
- (void)initView;
- (void)initData;
- (void)loadMoreHistoryData;
- (void)onRecieveLikedsRespWithInfos:(id)arg1;
- (void)onNoMoreData;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)overrideUserInterfaceStyle;
- (void)onClickHeadImageWithInfo:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)isDarkMode;
- (void)setIsDarkMode:(BOOL)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (BOOL)isRemoteData;
- (void)setIsRemoteData:(BOOL)arg1;
- (BOOL)isLoadingData;
- (void)setIsLoadingData:(BOOL)arg1;
- (void)setTableView:(id)arg1;
- (id)statusID;
- (void)setStatusID:(id)arg1;
- (void)setEmptyLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)currentSelfLikedsResp;
- (void)setCurrentSelfLikedsResp:(id)arg1;
- (id)arrInfo;
- (void)setArrInfo:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (BOOL)isShowLoading;
- (void)setIsShowLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
