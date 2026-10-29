@interface BizAppReaderMessageBigPicView : UIView
{
    UIView * _coverImageView; // +0x8
    CAGradientLayer * _coverGradientLayer; // +0x10
    MMHeadImageView * _avatarImageView; // +0x18
    UILabel * _nickNameLabel; // +0x20
    UIImageView * _multiPicIconView; // +0x28
    UILabel * _picCountLabel; // +0x30
    RichTextView * _titleLabel; // +0x38
    BizAppReaderMessageBigPicViewModel * _viewModel; // +0x40
}
- (id)init;
- (void)setupUI;
- (void)setupCoverImageView;
- (void)setupCoverBottomViews;
- (void)setupTitleLabel;
- (void)prepareForReuse;
- (void)updateWithViewModel:(id)arg1;
- (void)cancelUpdatingCoverImageView;
- (void)updateCoverImageView:(id)arg1;
- (void)cropLongPic:(id)arg1;
- (void)updateLayoutWithBigPicSize:(CGSize)arg1 titleSize:(CGSize)arg2 viewStyle:(id)arg3;
- (void)refreshBottomViewLayout:(id)arg1;
- (void)updateUsername:(id)arg1 nickname:(id)arg2;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)coverGradientLayer;
- (void)setCoverGradientLayer:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)multiPicIconView;
- (void)setMultiPicIconView:(id)arg1;
- (id)picCountLabel;
- (void)setPicCountLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

