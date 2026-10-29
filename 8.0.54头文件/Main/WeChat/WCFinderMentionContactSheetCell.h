@interface WCFinderMentionContactSheetCell : UITableViewCell
{
    UIImageView * _avatarView; // +0x8
    FavAttributeCPLabel * _titleLabel; // +0x10
    FavAttributeCPLabel * _summaryLabel; // +0x18
    CGSize _lastSize; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutIfNeeded;
- (void)_doLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateTitle:(id)arg1 avatarUrl:(id)arg2 desc:(id)arg3 hightlightDesc:(id)arg4;
- (CGSize)lastSize;
- (void)setLastSize:(CGSize)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)summaryLabel;
- (void)setSummaryLabel:(id)arg1;
- (void).cxx_destruct;
@end

