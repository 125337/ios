@interface EmoticonManagePrivacySettingViewController : MMUIViewController <ILinkEventExt>
{
    WCTableViewManager * _tableViewMgr; // +0x70
}
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)initTableView;
- (void)reloadSectionInfo;
- (void)initFooterView;
- (void)showPrivacyHintPageSheetIfNeeded;
- (void)onRemoteRecommendSwitchChanged:(id)arg1;
- (void)onPersonalizedRecommendSwitchChanged:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)tableViewMgr;
- (void)setTableViewMgr:(id)arg1;
- (void).cxx_destruct;
@end
