@interface MMFinderLiveSelectTagViewController : MMUILandscapeSheetViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveSelectSubTagViewControllerDelegate>
{
    BOOL _postAfterSelect; // +0x70
    id <MMFinderLiveSelectTagViewControllerDelegate> _actionDelegate; // +0x78
    NSArray * _tagInfos; // +0x80
    FinderLiveTagInfo * _lastSelectedTagInfo; // +0x88
    FinderLiveTagInfo * _selectedTagInfo; // +0x90
    MMTableView * _tableView; // +0x98
}
- (id)initWithTagInfos:(id)arg1 selectedTag:(id)arg2 postAfterSelect:(BOOL)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)cellIdentifier;
- (void)onTapCancel;
- (void)onTapDone;
- (void)onFinderLiveSelectSubTagViewControllerSelectTagInfo:(id)arg1;
- (void)onFinderLiveSelectSubTagViewControllerTapDone;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getSeparatorView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)tagInfos;
- (void)setTagInfos:(id)arg1;
- (id)lastSelectedTagInfo;
- (void)setLastSelectedTagInfo:(id)arg1;
- (id)selectedTagInfo;
- (void)setSelectedTagInfo:(id)arg1;
- (BOOL)postAfterSelect;
- (void)setPostAfterSelect:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
