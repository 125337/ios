@interface MMFinderLiveChooseClarityViewNavBar : UIView
{
    id /* block */ _leftButtonClickBLock; // +0x8
    id /* block */ _rightButtonClickBLock; // +0x10
    MMUIButton * _closeButton; // +0x18
    MMUIButton * _rightButton; // +0x20
    MMUILabel * _titleLabel; // +0x28
    UIView * _sepelateLine; // +0x30
    MMLiveRewardGiftCoinButton * _coinButton; // +0x38
    MMUIButton * _ticketCoinButton; // +0x40
    unsigned long long _type; // +0x48
    NSString * _rightText; // +0x50
}
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)layoutTitleView;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (void)layoutNavCoinButton;
- (void)layoutNavTicketCoinButton;
- (id)coinButton;
- (id)ticketCoinButton;
- (void)layoutSeparateLine;
- (void)updateCoinButtonTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)startLoading;
- (void)stopLoading;
- (id)closeButton;
- (id)rightButton;
- (id)titleLabel;
- (id)sepelateLine;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)hideRightButton;
- (id /* block */)leftButtonClickBLock;
- (void)setLeftButtonClickBLock:(id /* block */)arg1;
- (id /* block */)rightButtonClickBLock;
- (void)setRightButtonClickBLock:(id /* block */)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSepelateLine:(id)arg1;
- (void)setCoinButton:(id)arg1;
- (void)setTicketCoinButton:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)rightText;
- (void)setRightText:(id)arg1;
- (void).cxx_destruct;
@end
