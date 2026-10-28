@interface FacebookViewController : AccountBaseViewController <IMMFacebookMgrExt>
{
    UIButton * m_bindBtn; // +0x70
    UIButton * m_unBindBtn; // +0x78
    UIButton * m_doneBtn; // +0x80
    MMTableViewInfo * m_tableViewInfo; // +0x88
    id <FacebookViewControllerDelegate> m_delegate; // +0x90
}
- (void)updateView;
- (void)disMiss;
- (void)dealloc;
- (void)initHeaderView;
- (void)initFooterView;
- (void)updateTableCell;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)bind;
- (void)onUnBindAccount;
- (void)done;
- (void)onUnbind;
- (void)autoDismis;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
