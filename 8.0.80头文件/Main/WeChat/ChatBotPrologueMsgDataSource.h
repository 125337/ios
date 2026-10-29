@interface ChatBotPrologueMsgDataSource : NSObject <UITableViewDelegate, UITableViewDataSource, ICBTPrologueMsgExt, UIScrollViewDelegate>
{
    id <ChatBotPrologueMsgDataSourceDelegate> _delegate; // +0x8
    UITableView * _tableView; // +0x10
    NSString * _headHint; // +0x18
    NSMutableArray * _allMsgList; // +0x20
    NSMutableDictionary * _sectionInfoDic; // +0x28
    NSMutableArray * _orderedTypeList; // +0x30
    NSMutableDictionary * _cellHeightDict; // +0x38
    NSMutableDictionary * _sectionMetaInfoDic; // +0x40
}
- (id)init;
- (void)loadMetaInfo;
- (unsigned long long)getMsgCount;
- (BOOL)isHistoryList;
- (void)setupTableView:(id)arg1;
- (void)layoutTableHeaderView;
- (void)reloadAllData;
- (void)updateData;
- (unsigned long long)getDefaultUnfoldCountForSection:(unsigned long long)arg1;
- (unsigned long long)getExpandCountForSection:(unsigned long long)arg1;
- (unsigned long long)getTypeInsertLocation:(id)arg1;
- (double)calMsgCellHeight:(id)arg1;
- (void)insertMsg:(id)arg1 insertIndex:(unsigned long long *)arg2;
- (void)addMsgList:(id)arg1 isFromSync:(BOOL)arg2;
- (void)updateMsgWithList:(id)arg1;
- (void)deletemsgWithMsgIdList:(id)arg1;
- (id)getSectionInfoForSection:(long long)arg1;
- (id)getPrologueMsgWithSectionIndex:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getCellIDWithIndexPath:(id)arg1;
- (id)getCellIDWithMsg:(id)arg1;
- (id)cellIdentifierForPrologueMsgType:(int)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)onExpandBtnClick:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onPrologueMsgUpdateWithAddMsgList:(id)arg1 updateMsgList:(id)arg2;
- (void)onDeletePrologueMsg:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)headHint;
- (void)setHeadHint:(id)arg1;
- (id)allMsgList;
- (void)setAllMsgList:(id)arg1;
- (id)sectionInfoDic;
- (void)setSectionInfoDic:(id)arg1;
- (id)orderedTypeList;
- (void)setOrderedTypeList:(id)arg1;
- (id)cellHeightDict;
- (void)setCellHeightDict:(id)arg1;
- (id)sectionMetaInfoDic;
- (void)setSectionMetaInfoDic:(id)arg1;
- (void).cxx_destruct;
@end
