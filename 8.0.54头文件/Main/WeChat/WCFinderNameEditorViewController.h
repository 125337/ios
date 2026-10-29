@interface WCFinderNameEditorViewController : MMUIViewController <WCFinderVeirfyNameTipsViewControllerDelegate, UITextFieldDelegate>
{
    WCFinderContact * _contact; // +0x68
    NSString * _tips; // +0x70
    NSString * _modifyAlertTips; // +0x78
    id <WCFinderNameEditorViewControllerDelegate> _delegate; // +0x80
    WCFinderCreateUserViewModel * _viewModel; // +0x88
    UIScrollView * _scrollView; // +0x90
    UILabel * _titleLabel; // +0x98
    UILabel * _tipsLabel; // +0xa0
    UITextField * _textField; // +0xa8
    UILabel * _wordTips; // +0xb0
    UIButton * _confirmButton; // +0xb8
    WCFinderBannerView * _bannerView; // +0xc0
    UIView * _topLine; // +0xc8
    UIView * _bottomLine; // +0xd0
}
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)layoutView;
- (void)setupView;
- (void)disMissThisViewAnimated;
- (void)onSaveText;
- (id)modifyAlertTipsWithNewName:(id)arg1;
- (void)afterAlertModifyName:(id)arg1;
- (void)updateWordCount:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)modifyName:(id)arg1;
- (void)showError:(id)arg1;
- (void)updateWordCountTipsLabel:(int)arg1;
- (void)showRedBanner:(id)arg1;
- (void)showGrayBanner:(id)arg1;
- (void)hideBanner;
- (void)checkConfirmButtonEnable;
- (void)WCFinderVerifyNameTipsViewControllerDidClickConfirmButton;
- (id)scrollView;
- (id)titleLabel;
- (id)tipsLabel;
- (id)confirmButton;
- (id)topLine;
- (id)bottomLine;
- (id)bannerView;
- (id)textField;
- (id)wordTips;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)modifyAlertTips;
- (void)setModifyAlertTips:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setWordTips:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setTopLine:(id)arg1;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end

