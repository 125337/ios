@interface WCFinderFeedSubtitleSettingTableViewCell : UITableViewCell
{
    BOOL _disableCheckMark; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _checkImageView; // +0x18
    UIView * _separatorLine; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithText:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateLayout;
- (void)setTitleFont:(id)arg1;
- (id)titleFont;
- (id)titleLabel;
- (void)setDisableCheckMark:(BOOL)arg1;
- (id)checkImageView;
- (void)setHiddenSeparator:(BOOL)arg1;
- (BOOL)hiddenSeparator;
- (id)separatorLine;
- (BOOL)disableCheckMark;
- (void)setTitleLabel:(id)arg1;
- (void)setCheckImageView:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end

