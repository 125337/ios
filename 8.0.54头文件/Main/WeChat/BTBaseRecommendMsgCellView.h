@interface BTBaseRecommendMsgCellView : BTBaseItemCellView
{
    UIView * m_highlightMaskView; // +0x8
    UILongPressGestureRecognizer * m_longPressGestureRecognizer; // +0x10
    UIView * m_separateLine; // +0x18
    BTRecommendSectionData * _sectionData; // +0x20
    MMUIButton * _feedbackBtn; // +0x28
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)layoutContentView;
- (unsigned long long)cellRectCorner;
- (void)initFeedbackBtn;
- (void)onClickFeedbackBtn;
- (void)initSeparateLine;
- (void)initHighlightMaskView;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)needHighlightLayer;
- (void)initGestureRecognizer;
- (void)handleLongPress:(id)arg1;
- (id)sectionData;
- (id)feedbackBtn;
- (void).cxx_destruct;
@end

