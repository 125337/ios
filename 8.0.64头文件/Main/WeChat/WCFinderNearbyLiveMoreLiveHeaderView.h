@interface WCFinderNearbyLiveMoreLiveHeaderView : UICollectionViewCell
{
    UIColor * _textColor; // +0x8
    UIView * _verticalLineView; // +0x10
    MMWebImageView * _iconImage; // +0x18
    UILabel * _titleLabel; // +0x20
}
+ (double)cellHeightWithOtherTopMargin:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithTitle:(id)arg1 iconUrl:(id)arg2;
- (void)setupUI;
- (void)layoutUI;
- (id)verticalLineView;
- (id)titleLabel;
- (id)iconImage;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setVerticalLineView:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
