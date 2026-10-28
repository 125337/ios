@interface MMFinderLiveNotifyStyleTopCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell
{
    UIScrollView * _commentScrollView; // +0x8
    MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer * _labelContainer; // +0x10
    UIView * _scrollViewContainerView; // +0x18
}
- (id)initWithCellFrame:(id)arg1;
- (void)layoutSubviews;
- (void)layoutScrollViewAndCommentLabel;
- (double)getFirstLineBottom;
- (void)updateCommentLabelOrigin;
- (void)layoutNickLabel;
- (void)updateNickLabelOrigin;
- (void)layoutLabelContainer;
- (id)createGradientLayer;
- (BOOL)isLiveAnchorNotice;
- (id)commentScrollView;
- (void)setCommentScrollView:(id)arg1;
- (id)labelContainer;
- (void)setLabelContainer:(id)arg1;
- (id)scrollViewContainerView;
- (void)setScrollViewContainerView:(id)arg1;
- (void).cxx_destruct;
@end
