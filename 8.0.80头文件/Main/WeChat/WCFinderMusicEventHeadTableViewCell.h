@interface WCFinderMusicEventHeadTableViewCell : UITableViewCell
{
    id <WCFinderMusicEventHeadTableViewCellDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    MMWebImageView * _coverImageView; // +0x18
    UILabel * _authorNameLabel; // +0x20
    UILabel * _descLabel; // +0x28
    MMWebImageView * _authIconView; // +0x30
    UIButton * _actionButton; // +0x38
}
+ (double)cellH;
+ (id)cellID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubview;
- (void)setupLayout;
- (void)updateWithCellData:(id)arg1;
- (void)onClickActionButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)authorNameLabel;
- (void)setAuthorNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
