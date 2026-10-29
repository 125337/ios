@interface MMFinderLiveTableStyleCommentPubbleSubscribeCell : MMFinderLiveTableStyleCommentPubbleCell
{
    MMUIView * _signBackView; // +0x8
    MMUILabel * _signLabel; // +0x10
    UIImageView * _arrowImageView; // +0x18
}
- (id)initWithCellFrame:(id)arg1;
- (BOOL)isUITypeValid;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)signText;
- (void)layoutSignLabel;
- (void)updateSignLabelOrigin;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (void)layoutArrowImageView;
- (void)updateArrowImageViewOrigin;
- (double)getArrowImageWidth;
- (double)getArrowImageHeight;
- (id)getSelfAccessibility;
- (id)signBackView;
- (void)setSignBackView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
