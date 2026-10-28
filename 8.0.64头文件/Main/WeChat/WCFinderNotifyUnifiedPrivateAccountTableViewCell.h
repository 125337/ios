@interface WCFinderNotifyUnifiedPrivateAccountTableViewCell : WCFinderNotifyUnifiedTableViewCell <WCFinderNotifyCenterCellViewModelDelegate>
{
    WCFinderRichTextView * _contentTextView; // +0x8
    UIButton * _confirmButton; // +0x10
}
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)confirmButtonDidClick:(id)arg1;
- (void)updateConfirmButton;
- (void)onPrivateAccountFollowStateChanged;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
