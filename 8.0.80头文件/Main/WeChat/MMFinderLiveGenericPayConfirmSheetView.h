@interface MMFinderLiveGenericPayConfirmSheetView : MMPageSheetBaseView <WCCoinBuyCoinLogicDelegate>
{
    BOOL _hasClickActionButton; // +0x8
    BOOL _isFromFeed; // +0x9
    id /* block */ _cancelClickBlock; // +0x10
    id /* block */ _actionClickBlock; // +0x18
    double _contentHeight; // +0x20
    UIView * _contentView; // +0x28
    MMUIButton * _closeButton; // +0x30
    MMLiveRewardGiftCoinButton * _coinButton; // +0x38
    UILabel * _tipLabel; // +0x40
    UIImageView * _wecoinIconView; // +0x48
    MMCPLabel * _wecoinIconLabel; // +0x50
    UILabel * _moneyLabel; // +0x58
    MMUIButton * _actionButton; // +0x60
    long long _price; // +0x68
}
- (void)updateContentView;
- (void)updateContentHeight;
- (void)onWecoinBalanceUpdated:(long long)arg1;
- (void)setNeedsLayout;
- (void)layoutUI;
- (void)createUI;
- (void)fetchWecoinBalance;
- (id)initWithFrame:(CGRect)arg1;
- (void)customInit;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (id)contentView;
- (id)closeButton;
- (void)leftButtonAction;
- (id)coinButton;
- (void)rightButtonAction;
- (void)onBuyCoin;
- (id)actionButton;
- (id)wecoinIconView;
- (id)wecoinIconLabel;
- (id)tipLabel;
- (id)moneyLabel;
- (void)needBuyCoin;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)pageSheetWillDisappear;
- (void)onClickActionButton;
- (void)customInitActionButton:(id)arg1;
- (void)customInitTipLabel:(id)arg1;
- (void)customInitMoneyLabel:(id)arg1;
- (BOOL)hasClickActionButton;
- (void)setHasClickActionButton:(BOOL)arg1;
- (id /* block */)cancelClickBlock;
- (void)setCancelClickBlock:(id /* block */)arg1;
- (id /* block */)actionClickBlock;
- (void)setActionClickBlock:(id /* block */)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (void)setContentView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setCoinButton:(id)arg1;
- (void)setTipLabel:(id)arg1;
- (void)setWecoinIconView:(id)arg1;
- (void)setWecoinIconLabel:(id)arg1;
- (void)setMoneyLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (long long)price;
- (void)setPrice:(long long)arg1;
- (BOOL)isFromFeed;
- (void)setIsFromFeed:(BOOL)arg1;
- (void).cxx_destruct;
@end
