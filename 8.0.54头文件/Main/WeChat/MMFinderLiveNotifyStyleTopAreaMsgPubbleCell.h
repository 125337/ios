@interface MMFinderLiveNotifyStyleTopAreaMsgPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell
- (id)initWithCellFrame:(id)arg1;
- (double)maxCornerRadius;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (void)layoutCommentLabel;
- (void)layoutTouchButton;
- (void)touchButtonClick:(id)arg1;
- (BOOL)isUITypeValid;
- (void)updateCommentLabelOrigin;
@end

