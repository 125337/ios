@interface MMFinderLiveTableStyleCommentPubbleSignTextCell : MMFinderLiveTableStyleCommentPubbleCell
{
    MMUIView * _signBackView; // +0x8
    MMUILabel * _signLabel; // +0x10
}
- (id)initWithCellFrame:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)signText;
- (void)layoutTouchButton;
- (void)touchButtonClick:(id)arg1;
- (void)layoutSignLabel;
- (void)updateSignLabelOrigin;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (id)getSelfAccessibility;
- (id)signBackView;
- (void)setSignBackView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (void).cxx_destruct;
@end

