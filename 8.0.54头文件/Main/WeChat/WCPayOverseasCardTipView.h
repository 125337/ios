@interface WCPayOverseasCardTipView : MMUIView <MMWebViewDelegate, ILinkEventExt>
{
    UIImageView * _backgroundView; // +0x8
    UIButton * _selectBtn; // +0x10
    UIButton * _cancelButton; // +0x18
    MMWebViewController * _webView; // +0x20
    id <WCPayOverseasCarTipDelegate> m_tipViewDelegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)onSelect;
- (void)webViewReturn:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)initTextView;
- (void)initBottomView;
- (id)genBackgroundView;
- (id)m_tipViewDelegate;
- (void)setM_tipViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end

