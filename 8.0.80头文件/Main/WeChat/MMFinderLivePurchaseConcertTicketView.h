@interface MMFinderLivePurchaseConcertTicketView : MMPageSheetBaseView <WCCoinBuyCoinLogicDelegate>
{
    BOOL _needHalfScreen; // +0x8
    BOOL _isTicket; // +0x9
    BOOL _hasCriticalResourceLoadError; // +0xa
    BOOL _criticalResourceLoadErrorNotified; // +0xb
    id /* block */ _purchaseConcertTicketViewFinishBlock; // +0x10
    MMFinderLivePrepayTiersPanelViewModel * _tiersViewModel; // +0x18
    ConcertTicketInfo * _ticket; // +0x20
    CAShapeLayer * _shapeLayer; // +0x28
    UIView * _contentView; // +0x30
    MMFinderLiveChooseClarityViewNavBar * _navBar; // +0x38
    UIImageView * _backgroundImageView; // +0x40
    UIView * _ticketDropShadowView; // +0x48
    UIImageView * _brandLogoView; // +0x50
    MMUILabel * _concertNameLabel; // +0x58
    MMUILabel * _timeLabel; // +0x60
    MMFinderLivePurchaseTicketPayButton * _payButton; // +0x68
    long long _asyncLoadResourceCount; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithTiersViewModel:(id)arg1 needHalfScreen:(BOOL)arg2 isTicket:(BOOL)arg3;
- (void)wcfSetImageWithModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setImageUri:(id)arg1 forImageView:(id)arg2 fallbackImage:(id)arg3 isRequired:(BOOL)arg4 isCritical:(BOOL)arg5 logKey:(id)arg6;
- (void)checkImageLoadCompletion;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (id)contentView;
- (id)navBar;
- (void)onBuyCoin;
- (void)fetchWecoinBalance;
- (id)backgroundImageView;
- (id)ticketDropShadowView;
- (id)brandLogoView;
- (id)concertNameLabel;
- (id)timeLabel;
- (id)payButton;
- (void)payButtonClick;
- (void)cancelButtonClick;
- (void)pageSheetWillDisappear;
- (id /* block */)purchaseConcertTicketViewFinishBlock;
- (void)setPurchaseConcertTicketViewFinishBlock:(id /* block */)arg1;
- (id)tiersViewModel;
- (void)setTiersViewModel:(id)arg1;
- (BOOL)needHalfScreen;
- (void)setNeedHalfScreen:(BOOL)arg1;
- (BOOL)isTicket;
- (void)setIsTicket:(BOOL)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setTicketDropShadowView:(id)arg1;
- (void)setBrandLogoView:(id)arg1;
- (void)setConcertNameLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setPayButton:(id)arg1;
- (long long)asyncLoadResourceCount;
- (void)setAsyncLoadResourceCount:(long long)arg1;
- (BOOL)hasCriticalResourceLoadError;
- (void)setHasCriticalResourceLoadError:(BOOL)arg1;
- (BOOL)criticalResourceLoadErrorNotified;
- (void)setCriticalResourceLoadErrorNotified:(BOOL)arg1;
- (void).cxx_destruct;
@end
