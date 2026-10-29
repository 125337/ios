@interface BrandProfileItemTextCell : BrandProfileItemBaseCell <ILinkEventExt>
{
    RichTextView * _textView; // +0x8
    MMUIButton * _bottomButton; // +0x10
    WAAppIdToUsernameTransfer * _appIdTransfer; // +0x18
    MMURLHandler * _urlHandler; // +0x20
    RichTextView * _mainTitleView; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)accessibilityLabel;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)bottomButton;
- (void)setBottomButton:(id)arg1;
- (id)appIdTransfer;
- (void)setAppIdTransfer:(id)arg1;
- (id)urlHandler;
- (void)setUrlHandler:(id)arg1;
- (id)mainTitleView;
- (void)setMainTitleView:(id)arg1;
- (void).cxx_destruct;
@end

