@interface MMLiveMoreFunctionBaseManager : NSObject <UITableViewDelegate, UITableViewDataSource, MMFinderLiveMoreFunctionBaseCellDelegate>
{
    BOOL _isGameLive; // +0x8
    id <MMLiveMoreFunctionManagerDelegate> _delegate; // +0x10
    NSMutableArray * _dataArray; // +0x18
    MMLiveAnchorMoreFunctionOperationView * _operationView; // +0x20
    unsigned long long _operationViewType; // +0x28
    MMFinderLiveTaskId * _liveTaskId; // +0x30
    double _customHeight; // +0x38
    long long _fromSrc; // +0x40
    id /* block */ _redDotQueryBlock; // +0x48
    id /* block */ _redDotExposeBlock; // +0x50
    id /* block */ _redDotClickBlock; // +0x58
}
+ (id)getMoreFunctionItemsWithTaskId:(id)arg1 viewType:(unsigned long long)arg2 isGameLive:(BOOL)arg3;
- (void)showMoreFunctionOperationViewWithTaskId:(id)arg1 operationViewType:(unsigned long long)arg2 isGameLive:(BOOL)arg3 customHeight:(double)arg4 inView:(id)arg5 fromSrc:(long long)arg6;
- (void)hideMoreFunctionOperationView;
- (void)reloadOperationView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)canDidSelectWithItem:(id)arg1;
- (void)moreFunctionIndexPath:(id)arg1 item:(id)arg2 isOn:(BOOL)arg3;
- (void)invokePushToVC:(id)arg1 naviBarHidden:(BOOL)arg2 fromItem:(id)arg3;
- (void)onReportOperationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (id)getAnchorMoreFunctionOperationView;
- (void)onOperationViewWillDisappear;
- (id)createData:(unsigned long long)arg1;
- (id)dataArray;
- (id)getCurrentTitle:(unsigned long long)arg1;
- (double)getCurrentSectionHeight:(id)arg1;
- (long long)getCurrentSectionCount:(long long)arg1;
- (BOOL)isCanUseSectionArray:(id)arg1;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (unsigned long long)getCellRetCorner:(id)arg1 dataArray:(id)arg2;
- (double)getDetailStringHeightWithItem:(id)arg1;
- (double)getTitleStringHeightWithItem:(id)arg1;
- (id)getFunctionItemForRowAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDataArray:(id)arg1;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (unsigned long long)operationViewType;
- (void)setOperationViewType:(unsigned long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (BOOL)isGameLive;
- (void)setIsGameLive:(BOOL)arg1;
- (double)customHeight;
- (void)setCustomHeight:(double)arg1;
- (long long)fromSrc;
- (void)setFromSrc:(long long)arg1;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (id /* block */)redDotExposeBlock;
- (void)setRedDotExposeBlock:(id /* block */)arg1;
- (id /* block */)redDotClickBlock;
- (void)setRedDotClickBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

