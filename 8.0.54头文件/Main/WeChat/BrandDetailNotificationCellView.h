@interface BrandDetailNotificationCellView : BrandNotificationCellView
{
    MMHeadImageView * _headView; // +0x40
    UILabel * _nameLabel; // +0x48
    UIButton * _followButton; // +0x50
    WCTagsView * _tagsView; // +0x58
    YYLabel * _titleLabel; // +0x60
    YYLabel * _detailLabel; // +0x68
    UILabel * _dateLabel; // +0x70
}
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;
- (void)initSubViews;
- (id)accessibilityLabel;
- (id)headView;
- (id)tagsView;
- (id)titleLabel;
- (id)detailLabel;
- (void)setHeadView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (void)setTagsView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (void).cxx_destruct;
@end

