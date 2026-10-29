@interface WCGiftCardViewController : MMUIViewController <CAAnimationDelegate, WCGiftCardDetailViewDelegate, WCBatchViewCardHelpDelegate>
{
    unsigned int _bizUin; // +0x68
    NSString * _currentUserName; // +0x70
    WCPreGiftCardData * _preGiftCard; // +0x78
    WCGiftCardData * _giftCard; // +0x80
    NSString * _orderId; // +0x88
    WCGiftCardEnvelopeView * _envelopeView; // +0x90
    WCGiftCardDetailView * _detailView; // +0x98
    long long _fromScence; // +0xa0
    UIScrollView * _scrollView; // +0xa8
    WCBatchViewCardHelper * _viewCardHelp; // +0xb0
}
- (id)initWithPreGiftCardData:(id)arg1;
- (id)initWithBizUin:(unsigned int)arg1 orderId:(id)arg2;
- (id)initWithGiftCardData:(id)arg1;
- (void)showInViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)showEnvelopseAnimation;
- (void)handleEnvelopse;
- (void)handleLoading;
- (void)handleFinshed;
- (void)showEnvelopeView;
- (void)closeEnvelopeAndSelf;
- (void)configEnvelopeViewFrame;
- (void)showDetailView;
- (void)configDetailViewFrame;
- (void)viewDidLayoutSubviews;
- (void)showConfirmAlertWithTitle:(id)arg1 sel:(SEL)arg2;
- (void)popCon;
- (id)envelopeView;
- (id)detailView;
- (BOOL)useTransparentNavibar;
- (void)jumpButtonDidClikced;
- (void)operationButtonDidClikced;
- (void)detailViewCenterButtonClick;
- (void)openAppBranWithUserName:(id)arg1 brandPath:(id)arg2;
- (void)openUrl:(id)arg1;
- (void)openUrl:(id)arg1 returnBlock:(id /* block */)arg2;
- (void)jumbToDetailCard;
- (id)getDelegateViewController;
- (void)onBatchViewCardReturn;
- (void)onBack;
- (void)dismissSelf;
- (void)handleJumpNativeUrl:(id)arg1;
- (void)enterCardHomePage;
- (void)enterCouponListPage;
- (id)currentUserName;
- (void)setCurrentUserName:(id)arg1;
- (id)preGiftCard;
- (void)setPreGiftCard:(id)arg1;
- (id)giftCard;
- (void)setGiftCard:(id)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (void)setEnvelopeView:(id)arg1;
- (void)setDetailView:(id)arg1;
- (long long)fromScence;
- (void)setFromScence:(long long)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)viewCardHelp;
- (void)setViewCardHelp:(id)arg1;
- (void).cxx_destruct;
@end

