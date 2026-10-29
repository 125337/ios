@interface WAAuthPageSheetUserIdView : WAAuthPageSheetBaseView <ILinkEventExt>
{
    UIView * _auiView; // +0x8
    UILabel * _idLabel; // +0x10
    UILabel * _phoneTitleLabel; // +0x18
    MMTableView * _phoneView; // +0x20
    ZZFLEXAngel * _phoneAngel; // +0x28
    MMUIButton * _managerButton; // +0x30
    UIView * _protocolView; // +0x38
    MMCheckBox * _protocolJumpCheckBox; // +0x40
    RichTextView * _protocolJumpRichText; // +0x48
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
+ (double)tableViewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)pageSheet;
- (id)pageInfo;
- (id)auiView;
- (void)setAuiView:(id)arg1;
- (id)idLabel;
- (void)setIdLabel:(id)arg1;
- (id)phoneTitleLabel;
- (void)setPhoneTitleLabel:(id)arg1;
- (id)phoneView;
- (void)setPhoneView:(id)arg1;
- (id)phoneAngel;
- (void)setPhoneAngel:(id)arg1;
- (id)managerButton;
- (void)setManagerButton:(id)arg1;
- (id)protocolView;
- (void)setProtocolView:(id)arg1;
- (id)protocolJumpCheckBox;
- (void)setProtocolJumpCheckBox:(id)arg1;
- (id)protocolJumpRichText;
- (void)setProtocolJumpRichText:(id)arg1;
- (void).cxx_destruct;
@end
