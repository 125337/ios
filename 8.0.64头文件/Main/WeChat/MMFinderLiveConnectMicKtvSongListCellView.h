@interface MMFinderLiveConnectMicKtvSongListCellView : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    UIImageView * _titleIcon; // +0x10
    UILabel * _subtitleLabel; // +0x18
    UIImageView * _rightArrowIcon; // +0x20
}
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configUI;
- (void)configTitleLabel;
- (void)configSubtitleLabel;
- (void)configTitleIcon;
- (void)configRightArrowIcon;
- (void)layoutUI;
- (void)updateWithSubtitle:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleIcon;
- (void)setTitleIcon:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)rightArrowIcon;
- (void)setRightArrowIcon:(id)arg1;
- (void).cxx_destruct;
@end
