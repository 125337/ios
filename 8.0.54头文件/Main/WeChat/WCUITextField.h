@interface WCUITextField : UITextField
{
    BOOL m_bRestrictShareMenu; // +0x8
    double m_fPlaceholderFontSize; // +0x10
    UIEdgeInsets _expandHitAreaInsets; // +0x18
}
- (id)init;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)drawPlaceholderInRect:(CGRect)arg1;
- (void)dealloc;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)m_bRestrictShareMenu;
- (void)setM_bRestrictShareMenu:(BOOL)arg1;
- (double)m_fPlaceholderFontSize;
- (void)setM_fPlaceholderFontSize:(double)arg1;
- (UIEdgeInsets)expandHitAreaInsets;
- (void)setExpandHitAreaInsets:(UIEdgeInsets)arg1;
@end

