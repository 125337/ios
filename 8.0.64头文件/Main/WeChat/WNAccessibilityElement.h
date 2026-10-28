@interface WNAccessibilityElement : UIAccessibilityElement
{
    id <WNAccessibilityElementDelegate> _delegate; // +0x8
    unsigned long long _focusLocation; // +0x10
    RTEAttachmentView * _attachmentView; // +0x18
}
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)focusLocation;
- (void)setFocusLocation:(unsigned long long)arg1;
- (id)attachmentView;
- (void)setAttachmentView:(id)arg1;
- (void).cxx_destruct;
@end
