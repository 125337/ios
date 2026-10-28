@interface MMFinderLiveConnectMicRandomHintTableFooterView : UIView <ILinkEventExt>
{
    BOOL _enableAction; // +0x8
    id <MMFinderLiveConnectMicRandomHintTableFooterViewDelegate> _delegate; // +0x10
    RichTextView * _label; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setEnableAction:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)enableAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
