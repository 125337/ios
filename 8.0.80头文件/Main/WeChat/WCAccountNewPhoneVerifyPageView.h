@interface WCAccountNewPhoneVerifyPageView : UIView
{
    unsigned long long _page; // +0x8
    WCRedesignTextItem * _passwordTextItem; // +0x10
    WCRedesignVerifyCodeTextItem * _verifyCodeTextItem; // +0x18
    id /* block */ _tapVerifyCodeButtonHandler; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initItems;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)changeToPage:(unsigned long long)arg1;
- (unsigned long long)page;
- (void)setPage:(unsigned long long)arg1;
- (id)passwordTextItem;
- (void)setPasswordTextItem:(id)arg1;
- (id)verifyCodeTextItem;
- (void)setVerifyCodeTextItem:(id)arg1;
- (id /* block */)tapVerifyCodeButtonHandler;
- (void)setTapVerifyCodeButtonHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
