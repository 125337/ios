@interface WAFullScreenPrivacyInfoViewController : MMUIViewController <WARichTextViewHelperDelegate>
{
    NSString * _wording; // +0x68
    UILabel * _titleLabel; // +0x70
    id <IWARichTextViewHelper> _richTextHelper; // +0x78
}
- (id)initWithWording:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)updateNavigationItems;
- (void)onReturn;
- (id)titleLabel;
- (id)richTextHelper;
- (void)onLinkClicked:(id)arg1 linkRect:(CGRect)arg2;
- (id)wording;
- (void)setWording:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setRichTextHelper:(id)arg1;
- (void).cxx_destruct;
@end

