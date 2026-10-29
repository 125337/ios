@interface WCFinderGroupMemberCreateMasterSheet : WCFinderCustomPanelSheet <ILinkEventExt, WCFinderCreateUserViewControllerDelegate>
{
    NSString * _titleDesc; // +0x68
    id /* block */ _complectionBlock; // +0x70
    UIView * _contentContainerView; // +0x78
    WCFinderHeadImageView * _headImageView; // +0x80
    MMUIButton * _aggreCheckBox; // +0x88
    RichTextView * _aggrementView; // +0x90
    RichTextView * _nickNameLabel; // +0x98
    WCFinderContact * _createContact; // +0xa0
}
- (id)init;
- (void)viewDidLoad;
- (void)dismiss;
- (id)aggreCheckBox;
- (id)aggrementView;
- (id)createAgrementView;
- (id)loadContentView;
- (double)maxHeight;
- (void)viewDidLayoutSubviews;
- (void)onAgreementCheckBoxClick:(id)arg1;
- (void)createGroupContact;
- (void)clickEditAction;
- (long long)closeButtonStyle;
- (UIEdgeInsets)contentInset;
- (void)shakeAggreetView;
- (void)createUserFinished:(id)arg1;
- (id)titleDesc;
- (void)setTitleDesc:(id)arg1;
- (id /* block */)complectionBlock;
- (void)setComplectionBlock:(id /* block */)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (void)setAggreCheckBox:(id)arg1;
- (void)setAggrementView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)createContact;
- (void)setCreateContact:(id)arg1;
- (void).cxx_destruct;
@end

