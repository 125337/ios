@interface EmoticonManagePrivacySettingViewController : MMUIViewController <ILinkEventExt>
{
    WCTableViewManager * _tableViewMgr; // +0x70
    UIView * _contentView; // +0x78
}
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)reloadSectionInfo;
- (void)initFooterView;
- (void)showPrivacyHintPageSheetIfNeeded;
- (void)onRemoteRecommendSwitchChanged:(id)arg1;
- (void)onPersonalizedRecommendSwitchChanged:(id)arg1;
- (void)onChatContextRecommendSwitchChanged:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)tableViewMgr;
- (void)setTableViewMgr:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
