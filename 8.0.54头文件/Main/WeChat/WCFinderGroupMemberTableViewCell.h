@interface WCFinderGroupMemberTableViewCell : UITableViewCell
{
    MMHeadImageView * _headImageView; // +0x8
    UILabel * _groupNickNameLabel; // +0x10
    UILabel * _videoCountLabel; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUpUI;
- (void)updateWithAuthorContact:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)groupNickNameLabel;
- (void)setGroupNickNameLabel:(id)arg1;
- (id)videoCountLabel;
- (void)setVideoCountLabel:(id)arg1;
- (void).cxx_destruct;
@end

