@interface EmoticonSetManageViewController : MMUIViewController <IEmoticonPackageMgrExt, UITableViewDelegate, UITableViewDataSource, EmoticonManageCellDelegate, StoreEmotionReplaceMyPanelListCgiDelegate>
{
    BOOL _isDeleteMode; // +0x70
    BOOL _hasUndownload; // +0x71
    EmoticonManageSectionInfo * _sectionInfo; // +0x78
    EmoticonManageDataLogic * _dataLogic; // +0x80
    EmoticonManageDataObject * _dataObj; // +0x88
    MMTableView * _tableView; // +0x90
    StoreEmotionReplaceMyPanelListCgi * _replaceCgi; // +0x98
}
- (id)initWithDataObj:(id)arg1 andDataLogic:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initView;
- (void)viewDidTransitionToNewSize;
- (void)updateNavigationBarConfig;
- (void)loadData;
- (void)configSessionInfoArray;
- (void)updateEditButtonStatus;
- (void)onGotoDeleteMode;
- (void)OnCancel;
- (void)onSaveEdit;
- (void)onGotoNormalMode;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)arg1 WithPid:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)isEmoticonManageCellDeleteMode;
- (void)onUnstallButtonClickWithPid:(id)arg1 index:(unsigned long long)arg2;
- (void)onStoreEmotionReplaceMyPanelListCgiOKWithPids:(id)arg1;
- (void)onStoreEmotionReplaceMyPanelListCgiFailed;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)dataObj;
- (void)setDataObj:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)isDeleteMode;
- (void)setIsDeleteMode:(BOOL)arg1;
- (BOOL)hasUndownload;
- (void)setHasUndownload:(BOOL)arg1;
- (id)replaceCgi;
- (void)setReplaceCgi:(id)arg1;
- (void).cxx_destruct;
@end
