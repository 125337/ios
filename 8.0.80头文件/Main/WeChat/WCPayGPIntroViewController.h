@interface WCPayGPIntroViewController : WCPayBaseViewController <ILinkEventExt>
{
    id <WCPayGPIntroViewControllerDelegate> _delegate; // +0x98
    MMScrollView * _contentView; // +0xa0
}
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)setupContentView;
- (void)leftBarButtonClick;
- (void)launchBtnClick;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
