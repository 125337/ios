@interface MMFinderLiveMusicSettingSearchTitleView : UIView
{
    MMUILabel * _titleLabel; // +0x8
    UIImageView * _sourceIconImg; // +0x10
    MMUILabel * _sourceLabel; // +0x18
}
+ (double)preferWidth;
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTitleLabel;
- (void)layoutSouceIconImg;
- (void)layoutSourceLabel;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sourceIconImg;
- (void)setSourceIconImg:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (void).cxx_destruct;
@end
