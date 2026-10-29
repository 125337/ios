@interface WCAdDynamicFeedRichTextView : RichTextView
{
    WCAdDynamicFeedElementInfo * _elementInfo; // +0x98
}
- (void)dealloc;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)appendNotifications;
- (void)onMenuControllerWillHide:(id)arg1;
- (id)elementInfo;
- (void)setElementInfo:(id)arg1;
- (void).cxx_destruct;
@end

