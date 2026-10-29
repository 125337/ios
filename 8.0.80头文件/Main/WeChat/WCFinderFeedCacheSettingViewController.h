@interface WCFinderFeedCacheSettingViewController : MMUIViewController
{
    id <WCFinderFeedCacheSettingViewControllerDelegate> _delegate; // +0x70
    unsigned long long _source; // +0x78
    WCTableViewManager * _tableViewManager; // +0x80
    FinderNetOffModeConfig * _netOffConfig; // +0x88
    FinderNetOffModeConfig_ItemConfig * _selectConfig; // +0x90
    UIView * _pageFooterView; // +0x98
    UILabel * _footerLine1Label; // +0xa0
    UILabel * _footerLine2Label; // +0xa8
}
- (void)viewDidLoad;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)updatePageFooterLayout;
- (id)createCellWithTitle:(id)arg1 subTitle:(id)arg2 isSelected:(BOOL)arg3;
- (void)onReturn;
- (void)onDone;
- (void)clickCellAction:(id)arg1;
- (id)pageFooterView;
- (id)genPageFooterLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)netOffConfig;
- (void)setNetOffConfig:(id)arg1;
- (id)selectConfig;
- (void)setSelectConfig:(id)arg1;
- (void)setPageFooterView:(id)arg1;
- (id)footerLine1Label;
- (void)setFooterLine1Label:(id)arg1;
- (id)footerLine2Label;
- (void)setFooterLine2Label:(id)arg1;
- (void).cxx_destruct;
@end
