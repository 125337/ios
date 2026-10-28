@interface KidsWatchKidsRegisterBindConfirmViewController : KidsWatchBaseViewController
{
    KidsWatchTipsCardView * _tipsCardView; // +0x70
    KidsWatchButton * _continueButton; // +0x78
    KidsWatchButton * _backButton; // +0x80
    NSString * _bindedNickName; // +0x88
    NSString * _bindedHeadImageURL; // +0x90
}
- (void)viewDidLoad;
- (void)setupWithData:(id)arg1;
- (void)initSubviews;
- (BOOL)forceCloseBarButtonItem;
- (void)onTapCloseBarButtonItem;
- (void)onTapContinueButton;
- (void)onTapBackButton;
- (id)tipsCardView;
- (void)setTipsCardView:(id)arg1;
- (id)continueButton;
- (void)setContinueButton:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)bindedNickName;
- (void)setBindedNickName:(id)arg1;
- (id)bindedHeadImageURL;
- (void)setBindedHeadImageURL:(id)arg1;
- (void).cxx_destruct;
@end
