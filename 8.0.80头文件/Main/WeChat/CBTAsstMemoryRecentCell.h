@interface CBTAsstMemoryRecentCell : UITableViewCell
{
    BOOL _roundTop; // +0x8
    BOOL _roundBottom; // +0x9
    BOOL _menuHighlighted; // +0xa
    UIView * _cardView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    UIImageView * _arrowView; // +0x28
    UIView * _separatorView; // +0x30
}
+ (double)preferredHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 timeText:(id)arg2 statusText:(id)arg3 showSeparator:(BOOL)arg4 roundTop:(BOOL)arg5 roundBottom:(BOOL)arg6;
- (void)setMenuHighlighted:(BOOL)arg1;
- (void)updateCardBackgroundColor;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (BOOL)roundTop;
- (void)setRoundTop:(BOOL)arg1;
- (BOOL)roundBottom;
- (void)setRoundBottom:(BOOL)arg1;
- (BOOL)menuHighlighted;
- (void).cxx_destruct;
@end
