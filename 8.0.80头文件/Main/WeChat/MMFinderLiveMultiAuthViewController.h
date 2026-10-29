@interface MMFinderLiveMultiAuthViewController : MMUIViewController
{
    BOOL _completionFired; // +0x70
    id /* block */ _onCompleteEvent; // +0x78
    FinderJumpInfoMultiAuthParams * _params; // +0x80
    NSMutableSet * _doneTypes; // +0x88
    NSString * _phoneNumberSessionID; // +0x90
    UILabel * _titleLabel; // +0x98
    UILabel * _descriptionLabel; // +0xa0
    MMFinderLiveCashOutAuthTypeView * _auth1View; // +0xa8
    MMFinderLiveCashOutAuthTypeView * _auth2View; // +0xb0
    UIButton * _doneButton; // +0xb8
}
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onAuth1ViewClicked;
- (void)onAuth2ViewClicked;
- (void)dispatchItem:(id)arg1 view:(id)arg2 tag:(id)arg3;
- (void)markItemDone:(int)arg1 view:(id)arg2 phoneNumberSessionID:(id)arg3;
- (void)updateDoneButton;
- (void)onDoneButtonClicked;
- (void)fireSuccessCompletion;
- (BOOL)hasPhoneNumberItem;
- (long long)navigationBarHiddenStatus;
- (id /* block */)onCompleteEvent;
- (void)setOnCompleteEvent:(id /* block */)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)doneTypes;
- (void)setDoneTypes:(id)arg1;
- (id)phoneNumberSessionID;
- (void)setPhoneNumberSessionID:(id)arg1;
- (BOOL)completionFired;
- (void)setCompletionFired:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)auth1View;
- (void)setAuth1View:(id)arg1;
- (id)auth2View;
- (void)setAuth2View:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end
