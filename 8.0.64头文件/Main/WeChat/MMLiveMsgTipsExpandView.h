@interface MMLiveMsgTipsExpandView : MMMsgTipsExpandView <UITableViewDelegate, UITableViewDataSource, MMLiveMgrExt, MMLiveTaskMgrExt, MMLiveMsgTipsExpandViewCellDelegate>
{
    id <MMLiveMsgTipsExpandViewDelegate> _delegate; // +0x8
    CContact * _groupContact; // +0x10
    NSMutableArray * _viewModelList; // +0x18
    MMTableView * _bannerItemTableView; // +0x20
}
- (id)init;
- (void)layoutSubviews;
- (void)initViews;
- (void)layoutUI;
- (void)setupData;
- (void)reloadData;
- (void)updateWithContact:(id)arg1;
- (void)fetchLiveInfoIfNeed;
- (unsigned long long)maxDisplayCellCount;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onMMLiveMsgTipsExpandViewCellCloseLive:(id)arg1;
- (void)onLiveCountChanged:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)groupContact;
- (void)setGroupContact:(id)arg1;
- (id)viewModelList;
- (void)setViewModelList:(id)arg1;
- (id)bannerItemTableView;
- (void)setBannerItemTableView:(id)arg1;
- (void).cxx_destruct;
@end
