@interface MMFinderLiveFeedStreamBaseRecommendWordingView : UIView
{
    UILabel * _prefixLabel; // +0x8
    UILabel * _contentLabel; // +0x10
    UILabel * _suffixLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithWording:(id)arg1;
- (id)prefixLabel;
- (void)setPrefixLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)suffixLabel;
- (void)setSuffixLabel:(id)arg1;
- (void).cxx_destruct;
@end
