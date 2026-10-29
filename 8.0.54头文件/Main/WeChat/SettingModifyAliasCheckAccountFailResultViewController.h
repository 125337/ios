@interface SettingModifyAliasCheckAccountFailResultViewController : MMAcceptAgreementBaseViewController
{
    UIButton * m_helpCenterButton; // +0x68
    NSMutableDictionary * m_cacheHeightDic; // +0x70
    double m_tableContentHeight; // +0x78
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x80
    MMTableViewInfo * m_tableViewInfo; // +0x88
    MMTableView * m_tableView; // +0x90
    NSArray * _m_arrCheckCanSetAliasResult; // +0x98
    NSString * _m_ssesionID; // +0xa0
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)layoutHelpCenterButton;
- (void)reloadTableData;
- (void)reloadFootView;
- (id)genHeaderView;
- (void)makeCheckCanSetAliasResultCell:(id)arg1 cellInfo:(id)arg2;
- (void)OnSettingAccountModifyAliasHelpCenter;
- (void)onBackButtonClicked:(id)arg1;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_arrCheckCanSetAliasResult;
- (void)setM_arrCheckCanSetAliasResult:(id)arg1;
- (id)m_ssesionID;
- (void)setM_ssesionID:(id)arg1;
- (void).cxx_destruct;
@end

