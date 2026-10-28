@interface WCAccountLoginMainPageView : UIView <WCBaseInfoItemDelegate, MMUIViewControllerDelegate>
{
    id <MMUIViewControllerDelegate> _vcDelegate; // +0x8
    WCAccountControlData * _data; // +0x10
    unsigned long long _page; // +0x18
    NSString * _countryCode; // +0x20
    NSString * _phoneNumber; // +0x28
    NSString * _username; // +0x30
    NSString * _password; // +0x38
    double _horizonPadding; // +0x40
    UIView * _phoneNumberPageView; // +0x48
    MMUILabel * _phoneNumberTitleLabel; // +0x50
    WCFullPhoneNumInputHelper * _fullPhoneNumInputHelper; // +0x58
    UIView * _otherPageView; // +0x60
    MMUILabel * _otherTitleLabel; // +0x68
    WCRedesignTextItem * _accountTextItem; // +0x70
    WCRedesignTextItem * _passwordTextItem; // +0x78
    id /* block */ _checkNextHandler; // +0x80
    id /* block */ _nextHandler; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)changeToPage:(unsigned long long)arg1;
- (void)addCheckNextHandler:(id /* block */)arg1;
- (id)checkNext;
- (void)addNextHandler:(id /* block */)arg1;
- (void)initPages;
- (void)initPhoneNumberPage;
- (void)updatePhoneNumberPageLayout;
- (void)initOtherPage;
- (void)updateOtherPageLayout;
- (void)setData:(id)arg1;
- (id)countryCode;
- (id)phoneNumber;
- (id)username;
- (id)password;
- (id)phoneNumberTextItem;
- (id)regionButtonItem;
- (id)currentPageView;
- (void)updateCurrentPageLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)getViewController;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (id)data;
- (unsigned long long)page;
- (void)setPage:(unsigned long long)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setPassword:(id)arg1;
- (double)horizonPadding;
- (void)setHorizonPadding:(double)arg1;
- (id)phoneNumberPageView;
- (void)setPhoneNumberPageView:(id)arg1;
- (id)phoneNumberTitleLabel;
- (void)setPhoneNumberTitleLabel:(id)arg1;
- (id)fullPhoneNumInputHelper;
- (void)setFullPhoneNumInputHelper:(id)arg1;
- (id)otherPageView;
- (void)setOtherPageView:(id)arg1;
- (id)otherTitleLabel;
- (void)setOtherTitleLabel:(id)arg1;
- (id)accountTextItem;
- (void)setAccountTextItem:(id)arg1;
- (id)passwordTextItem;
- (void)setPasswordTextItem:(id)arg1;
- (id /* block */)checkNextHandler;
- (void)setCheckNextHandler:(id /* block */)arg1;
- (id /* block */)nextHandler;
- (void)setNextHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
