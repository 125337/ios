@interface BizAppReaderMessageBigPicView : UIView
{
    BOOL _SnsCardStyleOptimization; // +0x8
    UIView * _coverImageView; // +0x10
    CAGradientLayer * _coverGradientLayer; // +0x18
    RichTextView * _titleLabel; // +0x20
    MMHeadImageView * _avatarImageView; // +0x28
    UIImageView * _multiPicIconView; // +0x30
    UILabel * _picCountLabel; // +0x38
    UIImageView * _finderAuthorView; // +0x40
    UILabel * _nickNameLabel; // +0x48
    BizAppReaderMessageBigPicViewModel * _viewModel; // +0x50
    UILabel * _videoDurationLabel; // +0x58
    UIView * _separator; // +0x60
    BiaAppReaderMessagePlayButton * _playButton; // +0x68
}
+ (id)convertToDurationString:(unsigned long long)arg1;
- (id)init;
- (void)setupUI;
- (void)setupCoverImageView;
- (void)setupCoverBottomViews;
- (void)setupTitleLabel;
- (void)setupAuthorViews;
- (void)prepareForReuse;
- (void)updateWithViewModel:(id)arg1;
- (void)cancelUpdatingCoverImageView;
- (void)updateCoverImageView:(id)arg1;
- (void)showFailedCoverImage;
- (void)cropLongPic:(id)arg1;
- (void)updateLayoutWithBigPicSize:(CGSize)arg1 titleSize:(CGSize)arg2 viewStyle:(id)arg3;
- (void)refreshBottomViewLayout:(id)arg1;
- (void)updateUsername:(id)arg1 nickname:(id)arg2;
- (BOOL)isHiddenAvatarImageView;
- (BOOL)isHiddenNickNameLabel;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)coverGradientLayer;
- (void)setCoverGradientLayer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)multiPicIconView;
- (void)setMultiPicIconView:(id)arg1;
- (id)picCountLabel;
- (void)setPicCountLabel:(id)arg1;
- (BOOL)SnsCardStyleOptimization;
- (void)setSnsCardStyleOptimization:(BOOL)arg1;
- (id)finderAuthorView;
- (void)setFinderAuthorView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)videoDurationLabel;
- (void)setVideoDurationLabel:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (void).cxx_destruct;
@end
