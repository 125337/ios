@interface WCAccountFillPhoneViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>
{
    NSString * _restrictiveISOContryCode; // +0x80
    id <WCAccountFillPhoneViewControllerDelegate> _delegate; // +0x88
    NSString * _headerTip; // +0x90
    WCFullPhoneNumInputHelper * _fullPhoneNumInputHelper; // +0x98
    UIButton * _nextButton; // +0xa0
    double _firstKeyboardHeight; // +0xa8
    MMUILabel * _subtitleLabel; // +0xb0
}
- (BOOL)isForbidPageSheet;
- (void)viewDidLoad;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (BOOL)autoHandleKeyboardEvent;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (void)initView;
- (void)layoutSubtitleLabel;
- (void)viewDidLayoutSubviews;
- (void)checkNextBtnEnable;
- (void)onFillPhoneBack;
- (void)onNext;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (id)restrictiveISOContryCode;
- (void)setRestrictiveISOContryCode:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headerTip;
- (void)setHeaderTip:(id)arg1;
- (id)fullPhoneNumInputHelper;
- (void)setFullPhoneNumInputHelper:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (double)firstKeyboardHeight;
- (void)setFirstKeyboardHeight:(double)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
