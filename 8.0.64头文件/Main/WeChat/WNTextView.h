@interface WNTextView : RTETextView <WNAccessibilityElementDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray * m_accessiblityElement; // +0x18
    NSMutableArray * m_accessiblityMenuItems; // +0x20
    unsigned long long m_accessiblityMenuItemIndex; // +0x28
    NSMutableArray * m_urlArray; // +0x30
    NSString * m_touchUrl; // +0x38
    UILabel * m_placeHolder; // +0x40
    BOOL m_onTouch; // +0x48
    CGPoint m_touchPoint; // +0x50
    BOOL m_readyToShowMMMenu; // +0x60
    BOOL _needUpdateAccessbility; // +0x61
    unsigned int _enterNoteScene; // +0x64
    id <WNTextViewOperationDelegate> _operationDelegate; // +0x68
}
- (long long)accessibilityElementCount;
- (void)updateMenuRotor;
- (void)initMenuRotor;
- (void)tryUpdateAccessbilityElement;
- (BOOL)isAccessibilityElement;
- (void)onBecomeFocus:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setPlaceHolder:(id)arg1;
- (void)setPlaceHolderHidden:(BOOL)arg1;
- (void)updatePlaceHolder;
- (id)snapshop;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (CGRect)caretRectForPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setDataDelegate:(id)arg1;
- (id)dataDelegate;
- (void)tryScrollTouchPointToVisible;
- (void)menuWillHide;
- (id)editMenuForTextRange:(id)arg1 suggestedActions:(id)arg2;
- (void)tryToShowMMMenu;
- (void)setSelectedRange:(_NSRange)arg1;
- (BOOL)canBecameFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (void)onDelete:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onCut:(id)arg1;
- (void)onPaste:(id)arg1;
- (void)onEdit:(id)arg1;
- (void)setBoldFromKey:(id)arg1;
- (void)setHighlightFromKey:(id)arg1;
- (void)setLargeImage:(id)arg1;
- (void)setSmallImage:(id)arg1;
- (void)paste:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)onEditOrderList:(id)arg1;
- (void)tryShowLinkStyle;
- (BOOL)handleTouchLinkArea:(CGPoint)arg1;
- (BOOL)handleLinkClick;
- (void)jumpLink;
- (id)webviewWCPayScene;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)calculateTouchAreaUrl:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setAttributedText:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onPanAction:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (BOOL)needUpdateAccessbility;
- (void)setNeedUpdateAccessbility:(BOOL)arg1;
- (unsigned int)enterNoteScene;
- (void)setEnterNoteScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
