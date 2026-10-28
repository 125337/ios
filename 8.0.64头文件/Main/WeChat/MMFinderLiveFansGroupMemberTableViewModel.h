@interface MMFinderLiveFansGroupMemberTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * _tableView; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    id <MMFinderLiveFansGroupMemberTableViewDelegate> _tableDelegate; // +0x18
    unsigned long long _memberType; // +0x20
    unsigned long long _groupType; // +0x28
    MMFinderLiveFansGroupMemberSectionInfo * _fansGroupMemberSectionInfo; // +0x30
    MMFinderLiveFansGroupMemberTableSectionHeaderView * _memberSectionHeaderView; // +0x38
}
- (id)initWithTableView:(id)arg1;
- (void)updateFansGroupMemberSectionInfo:(id)arg1;
- (void)updateFansGroupMemberSectionInfo:(id)arg1 memberType:(unsigned long long)arg2 groupType:(unsigned long long)arg3;
- (id)getTableHeaderView;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)allFansMemberTitle;
- (id)superfanMemberTitle;
- (id)getMemberTitleForAnchor;
- (id)getWarmTitleForAnchor;
- (void)openMemberTypeActionSheet;
- (void)openGroupTypeActionSheet;
- (id)memberSectionHeaderView;
- (void)setMemberType:(unsigned long long)arg1;
- (void)setGroupType:(unsigned long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)tableDelegate;
- (void)setTableDelegate:(id)arg1;
- (unsigned long long)memberType;
- (unsigned long long)groupType;
- (id)fansGroupMemberSectionInfo;
- (void)setFansGroupMemberSectionInfo:(id)arg1;
- (void)setMemberSectionHeaderView:(id)arg1;
- (void).cxx_destruct;
@end
