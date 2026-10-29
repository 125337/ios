@interface MMFinderLiveConnectMicPkSelectItemView : UITableViewCell
{
    UIView * _container; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _subTitleLabel; // +0x18
}
+ (id)ReuseIdentifier;
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (void)configWithMode:(unsigned long long)arg1 subTitle:(id)arg2;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
