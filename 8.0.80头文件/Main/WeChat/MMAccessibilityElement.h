@interface MMAccessibilityElement : UIAccessibilityElement
{
    UIBezierPath * _accessibilityPathInContainer; // +0x8
    RichTextView * _richTextView; // +0x10
}
- (id)accessibilityPath;
- (id)accessibilityPathInContainer;
- (void)setAccessibilityPathInContainer:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (void).cxx_destruct;
@end
