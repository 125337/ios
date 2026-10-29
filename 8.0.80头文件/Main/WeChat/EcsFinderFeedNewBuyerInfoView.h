@interface EcsFinderFeedNewBuyerInfoView : EcsFinderFeedSingleProductBaseView
{
    EcsRichTextLabel * _titleLabel; // +0x8
    UIControl * _moreView; // +0x10
    EcsRichTextLabel * _moreLabel; // +0x18
    UIImageView * _arrowView; // +0x20
}
- (void)setDataVM:(id)arg1;
- (void)setupUI;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)moreView;
- (void)setMoreView:(id)arg1;
- (id)moreLabel;
- (void)setMoreLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
