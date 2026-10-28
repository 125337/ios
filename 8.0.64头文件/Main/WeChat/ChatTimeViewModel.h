@interface ChatTimeViewModel : BaseChatViewModel
{
    NSString * m_timeText; // +0x28
    double m_labelWidth; // +0x30
    BOOL m_rightButtonANewLine; // +0x38
    double m_rightButtonHeight; // +0x40
    double m_rightButtonWidth; // +0x48
    CGPoint m_rightButtonOrigin; // +0x50
    double _showingTime; // +0x60
    ChatTimeNodeRightButtonInfo * _rightButtonInfo; // +0x68
}
- (id)init;
- (id)cellViewClassName;
- (CGSize)measure:(CGSize)arg1;
- (BOOL)isRightButtonNeedANewLine;
- (void)updateLayouts;
- (id)timeText;
- (double)labelWidth;
- (BOOL)rightButtonANewLine;
- (double)rightButtonHeight;
- (double)rightButtonWidth;
- (CGPoint)rightButtonOrigin;
- (double)showingTime;
- (void)setShowingTime:(double)arg1;
- (id)rightButtonInfo;
- (void)setRightButtonInfo:(id)arg1;
- (void).cxx_destruct;
@end
