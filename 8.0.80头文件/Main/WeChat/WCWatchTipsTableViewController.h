@interface WCWatchTipsTableViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray * _tips; // +0x70
    NSTimer * _animationTimer; // +0x78
    MMTableView * _mainTableView; // +0x80
}
- (void)viewDidLoad;
- (void)layoutUI;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setupCell:(id)arg1 withTitle:(id)arg2 andSubTitle:(id)arg3 andContent:(id)arg4;
- (void)setupWatchFace:(id)arg1 atRow:(long long)arg2;
- (void)starPageSwithAnimation:(id)arg1;
- (long long)caculateCellHeightWithTitle:(id)arg1 andSubTitle:(id)arg2 andContent:(id)arg3;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)animationTimer;
- (void)setAnimationTimer:(id)arg1;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (void).cxx_destruct;
@end
