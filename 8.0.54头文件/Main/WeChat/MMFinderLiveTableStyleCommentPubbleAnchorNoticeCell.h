@interface MMFinderLiveTableStyleCommentPubbleAnchorNoticeCell : MMFinderLiveTableStyleCommentPubbleSignTextCell <ILinkEventExt>
- (void)updateBackGroundColor;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCommentLabel;
- (void)LiveAnchorTopicLayoutCommentLabel;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)expandIntroductionTextView;
- (void)shrinkIntroductionTextView;
- (id)generateDisplayedContentForCommentItem:(id)arg1 isExpanded:(BOOL)arg2;
- (id)signText;
- (BOOL)isUITypeValid;
- (void)beginTopInCommentTable;
- (void)reportForIntroductionTextExpandClick;
- (void)reportForExposeInCommentTableTopState;
- (void)reportAnchorNoticeWithType:(long long)arg1;
@end

