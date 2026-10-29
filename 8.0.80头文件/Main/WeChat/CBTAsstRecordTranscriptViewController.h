@interface CBTAsstRecordTranscriptViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _loading; // +0x70
    BOOL _hasMore; // +0x71
    BOOL _isFetchingMore; // +0x72
    unsigned int _nextIndex; // +0x74
    id <CBTAsstRecordTranscriptViewControllerDelegate> _delegate; // +0x78
    NSString * _meetingId; // +0x80
    MMTableView * _tableView; // +0x88
    UIActivityIndicatorView * _loadingIndicator; // +0x90
    NSMutableArray * _segments; // +0x98
}
- (id)init;
- (void)viewDidLoad;
- (void)fetchTranscriptData;
- (void)scheduleRetry;
- (void)fetchMoreIfNeeded;
- (id)navigationBarBackgroundColor;
- (id)navigationTitleColor;
- (BOOL)useBlackStatusbar;
- (void)setupNavigationBar;
- (void)setupTableView;
- (void)viewDidLayoutSubviews;
- (void)setupLoadingIndicator;
- (void)setLoading:(BOOL)arg1;
- (void)addSegmentWithSpeaker:(id)arg1 speakerTag:(unsigned int)arg2 content:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onBackButtonTap;
- (void)presentRenameSheetForSpeaker:(id)arg1 speakerTag:(unsigned int)arg2;
- (void)sendRenameSpeakerCGI:(id)arg1 newName:(id)arg2 speakerTag:(unsigned int)arg3;
- (void)applyLocalRenameWithSpeakerTag:(unsigned int)arg1 newName:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)meetingId;
- (void)setMeetingId:(id)arg1;
- (BOOL)loading;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (unsigned int)nextIndex;
- (void)setNextIndex:(unsigned int)arg1;
- (BOOL)isFetchingMore;
- (void)setIsFetchingMore:(BOOL)arg1;
- (id)segments;
- (void)setSegments:(id)arg1;
- (void).cxx_destruct;
@end
