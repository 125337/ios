@interface MMLimitedModeAuthorizeRequestDisplayViewController : MMAcceptAgreementBaseViewController <MMLimitedModeGuardianLogicDelegate>
{
    UIButton * m_operateButton; // +0x70
    CContact * m_guardianContact; // +0x78
    BOOL m_needReload; // +0x80
    MMLimitedModeGuardianLogic * m_guardianLogic; // +0x88
    MMLimitedModeAuthorizationUtilLogic * m_authorizationUtilLogic; // +0x90
    BOOL m_bAcceptOperate; // +0x98
    BOOL _m_bCanAccessory; // +0x99
    BOOL _m_bHiddenOperateButton; // +0x9a
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0xa0
    MMTableViewInfo * m_tableViewInfo; // +0xa8
    MMTableView * m_tableView; // +0xb0
    CMessageWrap * m_authorizeRequestMessageWrap; // +0xb8
    UIImage * _m_svgImage; // +0xc0
    NSString * _m_nsTitle; // +0xc8
    NSString * _m_nsDesc; // +0xd0
    NSString * _m_nsSessionFootTitle; // +0xd8
    id /* block */ _m_resultActionBlock; // +0xe0
    UIColor * _m_navigationBarBackgroundColor; // +0xe8
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initData;
- (void)layoutOperateButton;
- (double)getCellHeight;
- (void)reloadTableData;
- (void)reloadFootView;
- (void)reloadForwardPreview;
- (BOOL)canAccessory;
- (id)genHeaderView;
- (void)makeAuthorizeRequestDisplayCell:(id)arg1;
- (void)tapAuthorizeRequestDisplayCell;
- (void)didOperateButton;
- (void)didClickLeftCloseBarButton;
- (void)onAgreeTeenagerModeAuthorization:(id)arg1 businessType:(unsigned int)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (id)navigationBarBackgroundColor;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_authorizeRequestMessageWrap;
- (void)setM_authorizeRequestMessageWrap:(id)arg1;
- (BOOL)m_bAcceptOperate;
- (void)setM_bAcceptOperate:(BOOL)arg1;
- (id)m_svgImage;
- (void)setM_svgImage:(id)arg1;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (id)m_nsDesc;
- (void)setM_nsDesc:(id)arg1;
- (id)m_nsSessionFootTitle;
- (void)setM_nsSessionFootTitle:(id)arg1;
- (BOOL)m_bCanAccessory;
- (void)setM_bCanAccessory:(BOOL)arg1;
- (BOOL)m_bHiddenOperateButton;
- (void)setM_bHiddenOperateButton:(BOOL)arg1;
- (id /* block */)m_resultActionBlock;
- (void)setM_resultActionBlock:(id /* block */)arg1;
- (id)m_navigationBarBackgroundColor;
- (void)setM_navigationBarBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end
