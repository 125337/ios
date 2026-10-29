@interface MMFinderLiveShopShelfHeaderScoreView : UIView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _levelLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithScoreInfo:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)levelLabel;
- (void)setLevelLabel:(id)arg1;
- (void).cxx_destruct;
@end

