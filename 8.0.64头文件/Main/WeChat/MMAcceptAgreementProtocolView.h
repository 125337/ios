@interface MMAcceptAgreementProtocolView : MMUIView <ILinkEventExt>
{
    RichTextView * m_protocolTextView; // +0x8
    BOOL m_isAgreedProtocol; // +0x10
    MMUIButton * m_isAgreedProtocolButton; // +0x18
    NSString * m_protocolText; // +0x20
    id <MMAcceptAgreementProtocolViewDelegate> m_delegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 andProtocolText:(id)arg2;
- (void)layoutSubviews;
- (void)layoutProtocolTextView;
- (void)layoutIsAgreedProtocolButton;
- (id)getLeftImage;
- (void)onClickAgreedProtocolBtn:(id)arg1;
- (BOOL)isHadAgreedProtocol;
- (id)protocolButtonCheckedColor;
- (id)protocolButtonUncheckedColor;
- (id)protocolTextColor;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
