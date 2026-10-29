@interface WCSetPermissionsViewController : ContactBaseSetPermissionsViewController <WCFacadeExt>
{
    NSDate * m_pushInDate; // +0x68
    unsigned int m_permissionOpCode; // +0x70
    BOOL m_showPermissionsCell; // +0x74
    id <WCSetPermissionsViewControllerDelegate> _delegate; // +0x78
    CContact * m_contact; // +0x80
    long long _scene; // +0x88
    NSString * _publishId; // +0x90
    NSString * _userName; // +0x98
    WCOpLog * _wcOpLog; // +0xa0
    MMTableViewInfo * _tableViewInfo; // +0xa8
}
- (id)initWithUserName:(id)arg1;
- (void)onDissmiss;
- (void)viewDidLoad;
- (void)initView;
- (void)reloadTableView;
- (void)addPermissionSection;
- (void)addPermissionSectionWithClicfgSetDefaultChatonly;
- (void)showPermissionsCell;
- (void)opOutsider:(id)arg1;
- (void)opWCBlacklist:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)becomeOutsider:(BOOL)arg1;
- (void)becomeWCBlacklist:(BOOL)arg1;
- (void)onWCGroupModMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupAddMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(BOOL)arg1 group:(id)arg2;
- (unsigned int)getContactVerifyPermissionOpCode;
- (void)reportPermissions;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)publishId;
- (void)setPublishId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)wcOpLog;
- (void)setWcOpLog:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end

