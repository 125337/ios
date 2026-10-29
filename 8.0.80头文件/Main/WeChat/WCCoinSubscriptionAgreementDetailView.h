@interface WCCoinSubscriptionAgreementDetailView : UIView <ILinkEventExt>
{
    WCCoinSubscriptionAgreementView * _parent; // +0x8
    UIView * _protocolView; // +0x10
    RichTextView * _protocolTextView; // +0x18
    UIButton * _selectBoxButton; // +0x20
}
- (id)initWithParent:(id)arg1;
- (void)layoutTitle;
- (void)layoutContent;
- (void)layoutProtocol;
- (void)layout;
- (void)layoutSubviews;
- (void)shakeAgreementView;
- (void)clickSelectBox;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)protocolTextView;
- (id)selectBoxButton;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)protocolView;
- (void)setProtocolView:(id)arg1;
- (void)setProtocolTextView:(id)arg1;
- (void)setSelectBoxButton:(id)arg1;
- (void).cxx_destruct;
@end
