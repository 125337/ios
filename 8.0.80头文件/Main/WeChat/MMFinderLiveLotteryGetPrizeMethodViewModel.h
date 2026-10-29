@interface MMFinderLiveLotteryGetPrizeMethodViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _tableView; // +0x8
    id <MMFinderLiveLotteryGetPrizeMethodDelegate> _dataDelegate; // +0x10
    NSMutableArray * _lotteryMethodDataArray; // +0x18
    NSIndexPath * _selectIndexPath; // +0x20
}
- (id)initWithTableView:(id)arg1;
- (id)createData;
- (void)appendLotteryMethodData:(id)arg1;
- (double)getLotteryTableHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)lotteryMethodDataArray;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (void)setLotteryMethodDataArray:(id)arg1;
- (id)selectIndexPath;
- (void)setSelectIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
