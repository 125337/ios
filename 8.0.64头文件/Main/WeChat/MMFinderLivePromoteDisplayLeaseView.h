@interface MMFinderLivePromoteDisplayLeaseView : UIView
{
    BOOL _userDismissable; // +0x8
    BOOL _closeButtonHidden; // +0x9
    MMUIButton * _closeButton; // +0x10
    MMFinderLivePromoteDisplayLeaseToken * _leaseToken; // +0x18
    id <MMFinderLivePromoteDisplayLeasePromotionDelegate> _promotionDelegate; // +0x20
}
- (id)initWithLeaseToken:(id)arg1;
- (void)setCloseButtonHidden:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)addSubview:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)onCloseButtonTapped;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)leaseToken;
- (void)setLeaseToken:(id)arg1;
- (BOOL)userDismissable;
- (void)setUserDismissable:(BOOL)arg1;
- (BOOL)closeButtonHidden;
- (id)promotionDelegate;
- (void)setPromotionDelegate:(id)arg1;
- (void).cxx_destruct;
@end
