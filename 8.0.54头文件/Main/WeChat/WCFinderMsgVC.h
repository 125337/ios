@interface WCFinderMsgVC : MMUIViewController <WCFinderPrivacySettingHelperDelegate>
{
    WCFinderContact * _contact; // +0x68
    WCTableViewManager * _tableViewManager; // +0x70
    WCTableViewSectionManager * _msgSwitchSection; // +0x78
    WCFinderPrivacySettingHelper * _helper; // +0x80
}
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (id)makeSectionSeparator;
- (void)reloadTableView;
- (id)privacySettingSection;
- (void)requestReloadTableView;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)msgSwitchSection;
- (void)setMsgSwitchSection:(id)arg1;
- (id)helper;
- (void)setHelper:(id)arg1;
- (void).cxx_destruct;
@end

