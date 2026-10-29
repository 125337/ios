@interface MMFinderLiveNoticePromoteListPanel : MMPageSheetBaseView <MMFinderLiveNoticeDetailsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, MMFinderLiveNoticePromoteListTableViewCellDelegate, MMRefreshTableFooterDelegate>
{
    BOOL _hasMoreNotices; // +0x8
    unsigned int _totalNoticeCount; // +0xc
    id <MMFinderLiveNoticePromoteListPanelDelegate> _delegate; // +0x10
    MMFinderLiveCreateNoticeReporter * _createNoticeReporter; // +0x18
    WCFinderContact * _anchorContact; // +0x20
    NSMutableSet * _addedNoticeIds; // +0x28
    NSMutableArray * _noticeInfoList; // +0x30
    NSMutableDictionary * _noticeToIndexDict; // +0x38
    double _estimatedRowHeight; // +0x40
    MMUIActivityIndicatorView * _loadingIndicator; // +0x48
    UITableView * _noticeTableView; // +0x50
    MMRefreshTableFooterView * _refreshFooterView; // +0x58
    MMFinderLiveTask * _liveTask; // +0x60
}
- (id)initWithAddedNoticeIds:(id)arg1 liveTask:(id)arg2;
- (void)addAddedNoticeId:(id)arg1;
- (void)removeAddedNoticeId:(id)arg1;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)noticeQRCodePreviewViewControllerNoticeTopChanged:(id)arg1 noticeInfo:(id)arg2;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(id)arg1;
- (void)didFinishModLiveNoticeWithInfo:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onAddButtonTappedForCell:(id)arg1 liveNotice:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)setupPageSheetConfig;
- (void)updatePageSheetTitle;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (id)getLastNoticeInfo;
- (void)fetchData:(BOOL)arg1;
- (id)appendNoticeInfoItems:(id)arg1;
- (id)indexPathOfRowWithNoticeId:(id)arg1;
- (void)reloadRowWithNoticeId:(id)arg1;
- (void)rebuildNoticeToIndexDictFromIndex:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)createNoticeReporter;
- (void)setCreateNoticeReporter:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)addedNoticeIds;
- (void)setAddedNoticeIds:(id)arg1;
- (id)noticeInfoList;
- (void)setNoticeInfoList:(id)arg1;
- (id)noticeToIndexDict;
- (void)setNoticeToIndexDict:(id)arg1;
- (unsigned int)totalNoticeCount;
- (void)setTotalNoticeCount:(unsigned int)arg1;
- (BOOL)hasMoreNotices;
- (void)setHasMoreNotices:(BOOL)arg1;
- (double)estimatedRowHeight;
- (void)setEstimatedRowHeight:(double)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)noticeTableView;
- (void)setNoticeTableView:(id)arg1;
- (id)refreshFooterView;
- (void)setRefreshFooterView:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (void).cxx_destruct;
@end

