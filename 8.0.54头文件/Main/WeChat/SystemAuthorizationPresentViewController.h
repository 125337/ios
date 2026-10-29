@interface SystemAuthorizationPresentViewController : MMUIViewController <MMNavBarInteractiveDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    NSMutableArray * m_authItems; // +0x70
    UIStackView * _tableHeaderView; // +0x78
    UIStackView * _tableFooterView; // +0x80
    UIView * _emptyView; // +0x88
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)initItems;
- (void)initInteractiveNavi;
- (id)tableHeaderView;
- (id)tableFooterView;
- (id)emptyView;
- (void)reloadTableData;
- (void)onTapCell:(id)arg1;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void)jumpToSystemPrivacySetting;
- (void)setTableHeaderView:(id)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)setEmptyView:(id)arg1;
- (void).cxx_destruct;
@end

