@interface BrandProfileUrgePublishEntryView : UIControl
{
    NSArray * _avatarImageViews; // +0x8
    UILabel * _wordingLabel; // +0x10
    UIImageView * _arrowImageView; // +0x18
}
+ (double)preferredHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithCount:(unsigned int)arg1 userList:(id)arg2;
- (id)avatarImageViews;
- (void)setAvatarImageViews:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
