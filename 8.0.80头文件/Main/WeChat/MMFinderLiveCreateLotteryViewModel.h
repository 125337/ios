@interface MMFinderLiveCreateLotteryViewModel : NSObject <MMFinderLiveCreateLotteryOperationViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isFromStaterVC; // +0x8
    BOOL _isGameLive; // +0x9
    BOOL _isLotteryRunning; // +0xa
    MMFinderLiveTaskId * _taskID; // +0x10
    id <MMFinderLiveCreateLotteryViewModelDelegate> _delegate; // +0x18
    MMFinderLiveCreateLotteryOperationView * _createLotteryOperationView; // +0x20
    long long _locationId; // +0x28
    long long _dataVersion; // +0x30
    NSMutableArray * _dataArray; // +0x38
    NSMutableArray * _showArray; // +0x40
    NSArray * _originArray; // +0x48
}
- (id)initWithTaskID:(id)arg1;
- (void)onUpdateLotteryIsGameMode:(BOOL)arg1;
- (void)onUpdateLotteryRunning:(BOOL)arg1;
- (void)onUpdateFreeGameTeamUpLottery;
- (BOOL)needFilterLotteryDataItem:(id)arg1;
- (void)showCreateLotteryOperationView;
- (void)hideCreateLotteryOperationViewWithCompletion:(id /* block */)arg1;
- (id)createData;
- (void)appendLotteryMethodData:(id)arg1;
- (void)updateSingleModel:(id)arg1;
- (long long)currentLoadDataCount;
- (double)getLotteryTableHeight;
- (void)createLotteryClick;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)actionButtonClick:(id)arg1;
- (void)hoverClick:(id)arg1 textItem:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)dataArray;
- (id)showArray;
- (id)getCreateLotteryOperationView;
- (void)onLiveLotteryRecordClick;
- (id)getScrollToRowAtIndexPath;
- (BOOL)isComeFromStaterVC;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)createLotteryOperationView;
- (void)setCreateLotteryOperationView:(id)arg1;
- (BOOL)isFromStaterVC;
- (void)setIsFromStaterVC:(BOOL)arg1;
- (long long)locationId;
- (void)setLocationId:(long long)arg1;
- (long long)dataVersion;
- (void)setDataVersion:(long long)arg1;
- (BOOL)isGameLive;
- (void)setIsGameLive:(BOOL)arg1;
- (BOOL)isLotteryRunning;
- (void)setIsLotteryRunning:(BOOL)arg1;
- (void)setDataArray:(id)arg1;
- (void)setShowArray:(id)arg1;
- (id)originArray;
- (void)setOriginArray:(id)arg1;
- (void).cxx_destruct;
@end
