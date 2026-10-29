@interface RevokeMessageCellView : BaseMessageCellView <ILinkEventExt, ChatBackgroundExt, MessageBatchRevokeMgrExt>
{
    UIButton * _expandButton; // +0x28
    UIView * _revokeContentView; // +0x30
    RichTextView * _revokeRichTextView; // +0x38
    UIView * _highlightMaskView; // +0x40
}
- (id)initWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (BOOL)canBeReused;
- (BOOL)isAccessibilityElement;
- (id)generateOperationMenu;
- (BOOL)canCellShowOperationMenu;
- (BOOL)autoHighlight;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutContentView;
- (void)setRevokeMessageRead;
- (void)onTapExpandButton;
- (id)reusableContentView;
- (id)createRichTextViewUseLightStyle:(BOOL)arg1;
- (id)createExpandButtonUseLightStyle:(BOOL)arg1;
- (void)setView:(id)arg1 useLightStyle:(BOOL)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)onNeedUpdateLayoutForMsgId:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)revokeContentView;
- (void)setRevokeContentView:(id)arg1;
- (id)revokeRichTextView;
- (void)setRevokeRichTextView:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
