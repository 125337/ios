@interface WCBizAppReaderMessageBigPicView : BizAppReaderMessageBigPicView
{
    CAGradientLayer * _bgGradiantLayer; // +0x8
}
- (void)setupCoverImageView;
- (void)setupCoverBottomViews;
- (void)updateWithViewModel:(id)arg1;
- (void)cancelUpdatingCoverImageView;
- (void)updateCoverImageView:(id)arg1;
- (void)updateLayoutWithBigPicSize:(CGSize)arg1 titleSize:(CGSize)arg2 viewStyle:(id)arg3;
- (void)refreshBottomViewLayout:(id)arg1;
- (BOOL)isHiddenAvatarImageView;
- (BOOL)isHiddenNickNameLabel;
- (id)bgGradiantLayer;
- (void)setBgGradiantLayer:(id)arg1;
- (void).cxx_destruct;
@end
