@interface FinderBulletBlackWordViewController : MMUIViewController <WCFinderEmptyTipsViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
     store; // +0x8
     objectID; // +0x10
     originContentID; // +0x20
     reportContext; // +0x30
     viewState; // +0x44
     wordRows; // +0x48
     deletingWord; // +0x50
     blockingLoadingCount; // +0x60
     $__lazy_storage_$_tableView; // +0x68
     emptyTipsView; // +0x70
}
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
