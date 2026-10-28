@interface RingToneHistoryViewController : MMUIViewController <MMRefreshTableFooterDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, RingToneHistoryViewCellDelegate, IVOIPWindowExt, WCActionSheetDelegate, RingBackAddToTingSheetViewDelegate>
{
    BOOL _isFetchingData; // +0x70
    unsigned long long _setType; // +0x78
    RingToneMixPlayer * _player; // +0x80
    MMTableView * _tableView; // +0x88
    RingToneHistoryModel * _model; // +0x90
    WCTimeLineFooterView * _footerView; // +0x98
    unsigned long long _dataStatus; // +0xa0
    RingToneRecommendReporter_23604 * _reporter; // +0xa8
    UILabel * _clearLabel; // +0xb0
    RingBackAddToTingSheetView * _sheetView; // +0xb8
    unsigned long long _cliMinSeq; // +0xc0
    unsigned long long _totalScanRingBackCount; // +0xc8
    unsigned long long _totalSendRingBackCount; // +0xd0
}
+ (void)report25858Data:(unsigned long long)arg1 feedID:(id)arg2 type:(unsigned long long)arg3;
- (id)init;
- (void)initReporter;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)footerView;
- (id)tableView;
- (id)clearLabel;
- (id)model;
- (void)layoutSubviews;
- (void)viewDidLoad;
- (void)onClickMore:(id)arg1;
- (void)fetchNextPage:(BOOL)arg1;
- (void)openTingPageSheetView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onClearBarItemClick;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)jumpToAuthorPage:(id)arg1;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(BOOL)arg2;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2;
- (void)stopAllPlay;
- (void)onVoipWindowDidAppear;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)getDataStatus;
- (void)reportClickAddBtn;
- (void)reportRingsSyncToTing:(unsigned long long)arg1;
- (void)showTingTips;
- (void)syncRingsToTingAlbumByNet:(id)arg1 categoryID:(id)arg2;
- (unsigned long long)setType;
- (void)setSetType:(unsigned long long)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setFooterView:(id)arg1;
- (unsigned long long)dataStatus;
- (void)setDataStatus:(unsigned long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void)setClearLabel:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (unsigned long long)cliMinSeq;
- (void)setCliMinSeq:(unsigned long long)arg1;
- (unsigned long long)totalScanRingBackCount;
- (void)setTotalScanRingBackCount:(unsigned long long)arg1;
- (unsigned long long)totalSendRingBackCount;
- (void)setTotalSendRingBackCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
