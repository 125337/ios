@interface SettingModifyEmailOnBindHeadView : MMAcceptAgreementCommonHeadView
{
    BOOL _showFullEmail; // +0x8
    MMUILabel * _emailLabel; // +0x10
    MMUIButton * _emailOperateButton; // +0x18
}
- (void)updateViewWithTitle:(id)arg1 content:(id)arg2 email:(id)arg3 showEmail:(BOOL)arg4;
- (void)layoutUI;
- (id)emailLabel;
- (void)setEmailLabel:(id)arg1;
- (id)emailOperateButton;
- (void)setEmailOperateButton:(id)arg1;
- (BOOL)showFullEmail;
- (void)setShowFullEmail:(BOOL)arg1;
- (void).cxx_destruct;
@end

