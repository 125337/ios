@interface WCAccountVoiceVerifyViewController : WCAccountBaseViewController <VoiceVerifyLanguageDelegate>
{
    id <WCAccountVoiceVerifyViewControllerDelegate> _delegate; // +0x80
    NSString * _code; // +0x88
    MMUILabel * _titleLabel; // +0x90
    MMUILabel * _contentLabel; // +0x98
    WCRedesignButtonItem * _changeLanguageButtonItem; // +0xa0
    UIButton * _voiceButton; // +0xa8
}
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initData;
- (void)initView;
- (void)onTapChangeLanguageButton;
- (void)onTapVoiceButton;
- (void)onSelectLanguage:(id)arg1 Code:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)changeLanguageButtonItem;
- (void)setChangeLanguageButtonItem:(id)arg1;
- (id)voiceButton;
- (void)setVoiceButton:(id)arg1;
- (void).cxx_destruct;
@end
