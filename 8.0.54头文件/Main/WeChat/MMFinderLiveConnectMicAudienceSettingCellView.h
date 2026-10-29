@interface MMFinderLiveConnectMicAudienceSettingCellView : UITableViewCell
{
    BOOL _isSingleLineMode; // +0x8
    BOOL _showSeparator; // +0x9
    UILabel * _titleLabel; // +0x10
    UILabel * _subtitleLabel; // +0x18
    UIImageView * _arrowIconView; // +0x20
    UIView * _separateLineView; // +0x28
}
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateCellWithTitle:(id)arg1 subtitle:(id)arg2 isSingleLineMode:(BOOL)arg3 andShowSeparator:(BOOL)arg4;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)separateLineView;
- (void)setSeparateLineView:(id)arg1;
- (BOOL)isSingleLineMode;
- (void)setIsSingleLineMode:(BOOL)arg1;
- (BOOL)showSeparator;
- (void)setShowSeparator:(BOOL)arg1;
- (void).cxx_destruct;
@end

