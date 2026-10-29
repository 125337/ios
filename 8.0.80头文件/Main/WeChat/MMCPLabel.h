@interface MMCPLabel : MMUILabel
{
    NSString * m_cpKey; // +0x8
    UILongPressGestureRecognizer * m_recognizer; // +0x10
    NSString * m_restoreStr; // +0x18
    BOOL m_bRegisterObserver; // +0x20
    BOOL _showRestoreMenuItem; // +0x21
    BOOL _showCopyMenuItem; // +0x22
    BOOL _isHighlighted; // +0x23
    id <MMCPLabelDelegate> _cpLabelDelegate; // +0x28
    NSString * _prefixTitle; // +0x30
    UIColor * _hlBackgroundColor; // +0x38
}
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 cpKey:(id)arg4;
+ (double)labelWidth:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 cpKey:(id)arg4;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleLongPressGestureRecognizer:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(CGContext *)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onRestore:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)setShowRestoreMenuItem:(BOOL)arg1;
- (void)setShowCopyMenuItem:(BOOL)arg1;
- (void)setPrefixTitle:(id)arg1;
- (void)setIsHighlighted:(BOOL)arg1;
- (void)dealloc;
- (id)cpKey;
- (void)setCpKey:(id)arg1;
- (BOOL)showRestoreMenuItem;
- (id)cpLabelDelegate;
- (void)setCpLabelDelegate:(id)arg1;
- (BOOL)showCopyMenuItem;
- (id)prefixTitle;
- (id)hlBackgroundColor;
- (void)setHlBackgroundColor:(id)arg1;
- (BOOL)isHighlighted;
- (void).cxx_destruct;
@end
