@interface MMFinderLiveTableStyleCommentPubbleCell : MMLiveCommentPubbleCell <ILinkEventExt>
{
    NSString * _signAccessibilityStr; // +0x8
    NSString * _selfAccessibilityStr; // +0x10
}
- (id)initWithCellFrame:(id)arg1;
- (id)finderPubbleCellFrame;
- (void)layoutSubviews;
- (double)maxCornerRadius;
- (void)setCommentLabel:(id)arg1;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (id)getHandledAccessibilityStr:(id)arg1;
- (id)getSelfAccessibility;
- (void)updateAccessibility:(id)arg1;
- (void)updateSelfAccessibility;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)signAccessibilityStr;
- (void)setSignAccessibilityStr:(id)arg1;
- (id)selfAccessibilityStr;
- (void)setSelfAccessibilityStr:(id)arg1;
- (void).cxx_destruct;
@end
