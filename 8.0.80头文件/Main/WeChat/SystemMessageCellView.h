@interface SystemMessageCellView : BaseMessageCellView <ILinkEventExt, ChatBackgroundExt>
{
    UIView * m_bgImageView; // +0x28
    RichTextView * m_richTextView; // +0x30
    UIView * m_highlightMaskView; // +0x38
    BOOL hasReportTransferAlertTips; // +0x40
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)updateStatus;
- (void)onAppear;
- (void)layoutContentView;
- (BOOL)canCellShowOperationMenu;
- (BOOL)autoHighlight;
- (void)setHighlighted:(BOOL)arg1;
- (id)generateOperationMenu;
- (id)getRichTextView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityPerformMagicTap;
- (void)accessibilityElementDidBecomeFocused;
- (void)onChatBackgroundChanged:(id)arg1;
- (void).cxx_destruct;
@end
