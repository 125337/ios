@interface QuickReplyMsgWindow : MMUIWindow
{
    id <QuickReplyMsgWindowDelegate> _delegate; // +0x8
}
- (id)init;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

