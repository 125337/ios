@interface FavDebugFloatingView : UIView
{
    BOOL _expanded; // +0x8
    double _topOffset; // +0x10
    UIButton * _toggleButton; // +0x18
    UITextView * _textView; // +0x20
    UIButton * _clearButton; // +0x28
    NSMutableArray * _messages; // +0x30
}
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (void)appendDebugMessage:(id)arg1;
+ (void)clearDebugMessages;
- (id)init;
- (void)setupUI;
- (void)layoutExpandedView;
- (void)layoutCollapsedView;
- (void)appendMessage:(id)arg1;
- (void)clearMessages;
- (void)refreshTextView;
- (void)onToggle;
- (void)onClear;
- (void)handlePan:(id)arg1;
- (double)topOffset;
- (void)setTopOffset:(double)arg1;
- (id)toggleButton;
- (void)setToggleButton:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)clearButton;
- (void)setClearButton:(id)arg1;
- (id)messages;
- (void)setMessages:(id)arg1;
- (BOOL)expanded;
- (void)setExpanded:(BOOL)arg1;
- (void).cxx_destruct;
@end
