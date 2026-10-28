@interface ContactBaseSetPermissionsViewController : MMUIViewController <IOplogExt>
{
    BOOL _m_bIsDisableAllPermissionContact; // +0x70
    CContact * _m_contact; // +0x78
    NSString * _m_moreLimitFootTitle; // +0x80
    id <SetPermissionsViewControllerDelegate> _viewDelegate; // +0x88
}
+ (BOOL)shouldShowSetPermissionsWithUserName:(id)arg1;
- (void)reloadTableView;
- (void)operateSuccess;
- (void)operateFail;
- (void)opSocialBlackPermission;
- (void)opAllPermission;
- (void)doOpAddOrRemoveSocialBlackPermission:(BOOL)arg1;
- (void)realDoSocialBlackWithModType:(long long)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_moreLimitFootTitle;
- (void)setM_moreLimitFootTitle:(id)arg1;
- (BOOL)m_bIsDisableAllPermissionContact;
- (void)setM_bIsDisableAllPermissionContact:(BOOL)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end
