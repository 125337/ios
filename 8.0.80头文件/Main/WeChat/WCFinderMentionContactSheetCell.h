@interface WCFinderMentionContactSheetCell : UITableViewCell
{
    UIImageView * _avatarView; // +0x8
    FavAttributeCPLabel * _titleLabel; // +0x10
    FavAttributeCPLabel * _summaryLabel; // +0x18
    NSString * _summaryText; // +0x20
    NSArray * _summaryKeywords; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateTitle:(id)arg1 avatarUrl:(id)arg2 desc:(id)arg3 hightlightDesc:(id)arg4;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)summaryLabel;
- (void)setSummaryLabel:(id)arg1;
- (id)summaryText;
- (void)setSummaryText:(id)arg1;
- (id)summaryKeywords;
- (void)setSummaryKeywords:(id)arg1;
- (void).cxx_destruct;
@end
