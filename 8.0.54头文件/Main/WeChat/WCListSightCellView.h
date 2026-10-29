@interface WCListSightCellView : WCListBaseCellView <WCImageViewDelegate>
{
    UIButton * m_tailView; // +0x98
}
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
+ (id)defaultRichTextView;
+ (double)contentLabelWidthWithCellViewWidth:(double)arg1;
- (void)initTailView;
- (void)initView;
- (void)onClickWCImage:(id)arg1;
- (void)onClickContent:(id)arg1;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)layoutStatusIconImageView;
- (double)statusIconImageViewBottom;
- (BOOL)handleShouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;
- (void).cxx_destruct;
@end

