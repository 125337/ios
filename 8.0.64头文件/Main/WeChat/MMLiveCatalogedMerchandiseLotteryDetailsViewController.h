@interface MMLiveCatalogedMerchandiseLotteryDetailsViewController : MMUIViewController <MMLiveCatalogedMerchandiseLotteryDetailsViewDelegate>
{
    id <MMLiveCatalogedMerchandiseLotteryDetailsViewControllerDelegate> _delegate; // +0x70
    UIView * _containerView; // +0x78
    UIView * _lightDismissView; // +0x80
    MMLiveCatalogedMerchandiseLotteryDetailsView * _detailsView; // +0x88
    UIButton * _closeButton; // +0x90
}
- (id)initWithTaskId:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)timerToken;
- (void)setTimerToken:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)close;
- (BOOL)shouldHideNavigationBar;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)onCloseTapped;
- (void)onCatalogedMerchandiseLotteryDetailsViewMerchandiseDetailsButtonTapped:(id)arg1;
- (void)onCatalogedMerchandiseLotteryDetailsViewParticipateButtonTapped:(id)arg1;
- (void)onCatalogedMerchandiseLotteryDetailsViewDrawingDetailsButtonTapped:(id)arg1;
- (void)onCatalogedMerchandiseLotteryDetailsView:(id)arg1 disclaimerLinkTapped:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)lightDismissView;
- (void)setLightDismissView:(id)arg1;
- (id)detailsView;
- (void)setDetailsView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end
