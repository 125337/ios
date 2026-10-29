@interface MMFinderLiveNotifyStyleCommentPubbleCell : MMLiveCommentPubbleCell
{
    RichTextView * _nickLabel; // +0x8
    NSString * _selfAccessibilityStr; // +0x10
}
- (id)initWithCellFrame:(id)arg1;
- (void)updateBackGroundColor;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (void)layoutNickLabel;
- (void)updateNickLabelOrigin;
- (id)finderPubbleCellFrame;
- (id)getHandledAccessibilityStr:(id)arg1;
- (id)getSelfAccessibility;
- (void)updateAccessibility:(id)arg1;
- (void)updateSelfAccessibility;
- (id)nickLabel;
- (void)setNickLabel:(id)arg1;
- (id)selfAccessibilityStr;
- (void)setSelfAccessibilityStr:(id)arg1;
- (void).cxx_destruct;
@end
