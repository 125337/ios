@interface TextReaderMessageCellView : ReaderMessageCellView <RichTextLayoutDelegate, ILinkEventExt>
{
    UIImageView * m_bgImageView; // +0x48
    RichTextView * m_mainTitleView; // +0x50
    RichTextView * m_titleView; // +0x58
    MMUIButton * m_detailButton; // +0x60
    WAAppIdToUsernameTransfer * m_appIdTransfer; // +0x68
    NSMutableArray * _voiceOverElements; // +0x70
}
- (void)layoutContentView;
- (void)initDetailButton;
- (void)setHighlighted:(BOOL)arg1;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)voiceOverElements;
- (void)initVoiceOverElements;
- (void)updateVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)setVoiceOverElements:(id)arg1;
- (void).cxx_destruct;
@end
