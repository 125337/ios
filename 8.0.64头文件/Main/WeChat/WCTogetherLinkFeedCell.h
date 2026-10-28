@interface WCTogetherLinkFeedCell : WCTogetherBaseFeedCell
{
    UIView * _iconContainerView; // +0x8
    WCImageView * _iconImageView; // +0x10
    MMWebImageView * _iconWebImageView; // +0x18
    UIImageView * _iconDefaultImageView; // +0x20
    UIView * _playIconContainerView; // +0x28
    UIImageView * _playIconView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUILabel * _subtitleLabel; // +0x40
}
+ (id)cellIdentifier;
+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)loadItemContentView;
- (void)loadIconViews;
- (void)layoutItemContentView;
- (void)contentDidTap;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)iconWebImageView;
- (void)setIconWebImageView:(id)arg1;
- (id)iconDefaultImageView;
- (void)setIconDefaultImageView:(id)arg1;
- (id)playIconContainerView;
- (void)setPlayIconContainerView:(id)arg1;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
