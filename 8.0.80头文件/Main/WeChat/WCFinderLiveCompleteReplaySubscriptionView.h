@interface WCFinderLiveCompleteReplaySubscriptionView : UIView
{
    BOOL _isSubscribed; // +0x8
    id /* block */ _subscribeButtonBlock; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _statusLabel; // +0x20
    MMUIButton * _subscribeButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)createUI;
- (void)updateWithReplayStatus:(id)arg1 isSubscribed:(BOOL)arg2;
- (void)updateSubscribeButtonTitle;
- (void)onSubscribeButtonTapped;
- (void)layoutSubviews;
- (void)layoutUI;
- (id /* block */)subscribeButtonBlock;
- (void)setSubscribeButtonBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)subscribeButton;
- (void)setSubscribeButton:(id)arg1;
- (BOOL)isSubscribed;
- (void)setIsSubscribed:(BOOL)arg1;
- (void).cxx_destruct;
@end
