@interface EmoticonManageViewController : MMUIViewController <IEmoticonPackageMgrExt, UITableViewDelegate, UITableViewDataSource, EmoticonManageCellDelegate, StoreEmotionReplaceMyPanelListCgiDelegate>
{
    BOOL _isDeleteMode; // +0x70
    BOOL _isFromStore; // +0x71
    NSMutableArray * _sectionInfoArray; // +0x78
    EmoticonManageDataLogic * _dataLogic; // +0x80
    MMTableView * _tableView; // +0x88
    StoreEmotionReplaceMyPanelListCgi * _m_replaceCgi; // +0x90
}
- (id)init;
- (id)initWithIsFromStore:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadData;
- (void)configSessionInfoArray;
- (void)initView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)updateNavigationBarConfig;
- (void)updateEditButtonStatus;
- (void)onGotoDeleteMode;
- (void)OnCancel;
- (void)onSaveEdit;
- (void)onGotoNormalMode;
- (void)onClickPrivacyCell;
- (void)onClickPurchasedCell;
- (void)onClickManageCustomEmoticonCell;
- (void)onClickManageCameraEmoticonCell;
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
- (void)onUninstallIPSetWithObj:(id)arg1;
- (void)loopUninstallIPSetPackagesIn:(id)arg1 failedUninstallPids:(id)arg2;
- (void)reportEvent:(id)arg1 eventId:(id)arg2 params:(id)arg3;
- (void)onStoreEmotionReplaceMyPanelListCgiOKWithPids:(id)arg1;
- (void)onStoreEmotionReplaceMyPanelListCgiFailed;
- (id)sectionInfoArray;
- (void)setSectionInfoArray:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)isDeleteMode;
- (void)setIsDeleteMode:(BOOL)arg1;
- (BOOL)isFromStore;
- (void)setIsFromStore:(BOOL)arg1;
- (id)m_replaceCgi;
- (void)setM_replaceCgi:(id)arg1;
- (void).cxx_destruct;
@end
