@interface WCFinderCommonTipsAlertView : WCFinderCustomPanelSheet
{
    id /* block */ _confirmBlock; // +0x70
    UIImage * _icon; // +0x78
    NSString * _tipsTitle; // +0x80
    NSString * _descText; // +0x88
    NSString * _actionTitle; // +0x90
    NSString * _linkURL; // +0x98
    NSString * _linkTitle; // +0xa0
}
- (id)initWithIcon:(id)arg1 title:(id)arg2 descText:(id)arg3 actionTitle:(id)arg4 linkTitle:(id)arg5 linkURL:(id)arg6;
- (id)initWithHalfSheetInfo:(id)arg1;
- (id)init;
- (id)loadContentView;
- (void)clickLinkAction;
- (void)clickConfirmBlock;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)tipsTitle;
- (void)setTipsTitle:(id)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (id)actionTitle;
- (void)setActionTitle:(id)arg1;
- (id)linkURL;
- (void)setLinkURL:(id)arg1;
- (id)linkTitle;
- (void)setLinkTitle:(id)arg1;
- (void).cxx_destruct;
@end
