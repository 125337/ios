@interface WCOutInviteFriendLogic : NSObject <WCOutCouponExt>
{
    id <WCOutInviteFriendLogicDelegate> _delegate; // +0x8
    GetWeChatOutCouponsResponse * _couponResponse; // +0x10
    unsigned long long _scene; // +0x18
    unsigned long long _getBalanceScene; // +0x20
}
- (id)initWithDelegate:(id)arg1 inviteScene:(unsigned long long)arg2 getBalanceScene:(unsigned long long)arg3;
- (void)requestCoupon;
- (void)didReceiveCouponResponse:(id)arg1;
- (id)getRemainingTime;
- (id)getInvalidDateTips;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)couponResponse;
- (void)setCouponResponse:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)getBalanceScene;
- (void)setGetBalanceScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
