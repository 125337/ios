@interface WCAccountLoginUsersViewController : WCAccountBaseViewController <WCAccountCloseMainFrameExt>
{
    id <WCAccountLoginUsersViewControllerDelegate> m_delegate; // +0x80
    UIView * m_headerView; // +0x88
    UIImageView * m_logoImageView; // +0x90
    CTRichTextView * m_headerTip; // +0x98
    CTRichTextView * m_headerEditTip; // +0xa0
    UIView * m_lineView; // +0xa8
    MMUILabel * m_editTip; // +0xb0
    NSMutableArray * m_cellViewModels; // +0xb8
    LoginUserCellViewModel * m_curLoginLoadingViewModel; // +0xc0
    BOOL m_isEditing; // +0xc8
    BOOL _hideDefaultLoadingView; // +0xc9
}
- (void)reportOpCode:(unsigned int)arg1;
- (BOOL)useGrayBackgroundColor;
- (BOOL)useTableView;
- (id)navigationBarBackgroundColor;
- (BOOL)hasUserLogined;
- (id)getNewHeaderView:(id)arg1;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)reloadLoginUserCells;
- (void)makeAccountCell:(id)arg1 cellInfo:(id)arg2;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)setDelegate:(id)arg1;
- (void)onLoginErrorWithIsNetworkError:(BOOL)arg1;
- (void)onUpdateLoginUsers;
- (void)tryLoginUserWithUserName:(id)arg1;
- (void)onSwitchMainViewToLoginView;
- (void)onClickLoginUserCell:(id)arg1;
- (void)onClickAddLoginInfo;
- (void)onClickDeleteLoginUser:(id)arg1;
- (void)onRealDeleteLoginUser:(id)arg1;
- (void)onEditLoginUserInfo;
- (void)onCancelEditLoginUserInfo;
- (BOOL)hideDefaultLoadingView;
- (void)setHideDefaultLoadingView:(BOOL)arg1;
- (void).cxx_destruct;
@end
