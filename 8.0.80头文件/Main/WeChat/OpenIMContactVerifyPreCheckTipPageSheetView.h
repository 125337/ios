@interface OpenIMContactVerifyPreCheckTipPageSheetView : MMPageSheetBaseView <ILinkEventExt>
{
    NSString * _wordingTitle; // +0x8
    NSString * _wordingContent; // +0x10
    NSString * _iconSVGName; // +0x18
    UIColor * _iconColor; // +0x20
    NSString * _actionButtonName; // +0x28
    unsigned long long _actionButtonStyle; // +0x30
    id /* block */ _actionHandler; // +0x38
    MMUIImageView * _iconView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    RichTextView * _contentLabel; // +0x50
    UIButton * _actionButton; // +0x58
}
- (id)initWithTitle:(id)arg1 content:(id)arg2 iconSVGName:(id)arg3 iconColor:(id)arg4 actionButtonName:(id)arg5 actionButtonStyle:(unsigned long long)arg6 actionHandler:(id /* block */)arg7;
- (void)initConfig;
- (void)initView;
- (void)onClickActionButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)wordingTitle;
- (void)setWordingTitle:(id)arg1;
- (id)wordingContent;
- (void)setWordingContent:(id)arg1;
- (id)iconSVGName;
- (void)setIconSVGName:(id)arg1;
- (id)iconColor;
- (void)setIconColor:(id)arg1;
- (id)actionButtonName;
- (void)setActionButtonName:(id)arg1;
- (unsigned long long)actionButtonStyle;
- (void)setActionButtonStyle:(unsigned long long)arg1;
- (id /* block */)actionHandler;
- (void)setActionHandler:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
