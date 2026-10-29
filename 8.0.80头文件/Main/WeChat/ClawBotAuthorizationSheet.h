@interface ClawBotAuthorizationSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    id <ClawBotAuthorizationSheetDelegate> _delegate; // +0x8
    NSDictionary * _reportParams; // +0x10
    UIView * _contentView; // +0x18
    UILabel * _titleLabel; // +0x20
    RichTextView * _contentTextView; // +0x28
}
+ (id)authorizationKey;
+ (BOOL)hasUserConfirmedAuthorization;
+ (void)setUserConfirmedAuthorization:(BOOL)arg1;
- (id)init;
- (void)setupConfig;
- (void)setupUI;
- (void)updateView;
- (id)pageSheetContentView;
- (double)pageSheetContentHeight;
- (double)pageSheetContentWidth;
- (void)reportButtonClickWithBtnType:(long long)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (long long)styleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (void).cxx_destruct;
@end
