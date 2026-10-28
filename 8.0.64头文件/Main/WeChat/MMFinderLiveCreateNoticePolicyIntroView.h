@interface MMFinderLiveCreateNoticePolicyIntroView : MMFinderLivePaymentPolicyIntroView
{
    RichTextView * _descLabel; // +0x8
}
- (void)initUI;
- (void)changMode;
- (void)layoutCurrentUI;
- (void)updateDescLabel;
- (double)contentViewHeight;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
