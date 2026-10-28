@interface SystemMessageCellView : BaseMessageCellView <ILinkEventExt, ChatBackgroundExt>
{
    UIImageView * m_bgImageView; // +0x28
    RichTextView * m_richTextView; // +0x30
    BOOL hasReportTransferAlertTips; // +0x38
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)updateStatus;
- (void)onAppear;
- (void)layoutContentView;
- (BOOL)canCellShowOperationMenu;
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
