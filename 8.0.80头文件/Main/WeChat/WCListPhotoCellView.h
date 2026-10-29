@interface WCListPhotoCellView : WCListBaseCellView <WCImageViewDelegate, WCPuzzleImageViewDelegate>
{
    UIView * m_imageGridView; // +0x98
}
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
+ (id)defaultRichTextView;
+ (double)contentLabelWidthWithCellViewWidth:(double)arg1;
- (void)initImageGridView;
- (BOOL)isPrivatePublishEntryRow;
- (void)initView;
- (void)safeChangeImageViewDelegate:(id)arg1;
- (BOOL)handleShouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)findActiveView:(id)arg1;
- (void)handleClickImageContentView:(id)arg1;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onClickWCImage:(id)arg1;
- (void)onClickWCPuzzleImage:(id)arg1;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;
- (id)accessibilityLabelForDataItem:(id)arg1;
- (void).cxx_destruct;
@end
