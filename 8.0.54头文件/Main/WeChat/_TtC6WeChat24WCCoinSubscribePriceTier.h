@interface _TtC6WeChat24WCCoinSubscribePriceTier : NSObject
{
     title; // +0x8
     price; // +0x18
     type; // +0x20
     tierDesc; // +0x28
     bottomDesc; // +0x38
     confirmButtonWording; // +0x48
     delegate; // +0x58
     showDiscountTitle; // +0x60
     originPrice; // +0x64
     userInfo; // +0x68
}
- (id)title;
- (unsigned int)price;
- (long long)type;
- (id)tierDesc;
- (void)setTierDesc:(id)arg1;
- (id)bottomDesc;
- (id)confirmButtonWording;
- (void)setConfirmButtonWording:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showDiscountTitle;
- (void)setShowDiscountTitle:(BOOL)arg1;
- (unsigned int)originPrice;
- (void)setOriginPrice:(unsigned int)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)initWithTitle:(id)arg1 price:(unsigned int)arg2 type:(long long)arg3 delegate:(id)arg4 bottomDesc:(id)arg5;
- (id)init;
- (void).cxx_destruct;
@end

