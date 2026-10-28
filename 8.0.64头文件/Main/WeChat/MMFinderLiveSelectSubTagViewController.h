@interface MMFinderLiveSelectSubTagViewController : MMUILandscapeSheetViewController <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _postAfterSelect; // +0x70
    id <MMFinderLiveSelectSubTagViewControllerDelegate> _actionDelegate; // +0x78
    FinderLiveTagInfo * _selectedTagInfo; // +0x80
    MMTableView * _tableView; // +0x88
}
- (id)initWithSelectedTagInfo:(id)arg1 postAfterSelect:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)cellIdentifier;
- (id)subTagInfos;
- (void)onTapDone;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)selectedTagInfo;
- (void)setSelectedTagInfo:(id)arg1;
- (BOOL)postAfterSelect;
- (void)setPostAfterSelect:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
