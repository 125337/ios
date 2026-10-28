@interface WCLabSettingFooterView : UIView <ILinkEventExt>
{
    MMUILabel * _tipLabel; // +0x8
    RichTextView * _agreementView; // +0x10
    id <WCLabSettingFooterViewDelegate> _delegate; // +0x18
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initTipLabel;
- (void)initAgreementView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
