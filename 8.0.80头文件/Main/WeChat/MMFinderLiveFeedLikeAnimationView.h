@interface MMFinderLiveFeedLikeAnimationView : MMFinderLiveFeedStreamWidgetBaseView
{
    WCLiveBottomTextButton * _likeUnClickableButton; // +0x8
    MMAudienceLiveLikePlayUtil * _likePlayUtil; // +0x10
    MMLiveLikeAnimationUtil * _likeAnimationUtil; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupLikePlayUtil;
- (void)updateLikeCount:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)updateLikeHeadImgContacts:(id)arg1;
- (void)endLikePlay;
- (void)updateCheerInfo:(id)arg1;
- (void)prepareForReuse;
- (void)updateLikeButtonIcon:(id)arg1;
- (id)likePlayUtil;
- (id)likeAnimationUtil;
- (id)likeUnClickableButton;
- (long long)layoutOrientation;
- (void)setLikeUnClickableButton:(id)arg1;
- (void)setLikePlayUtil:(id)arg1;
- (void)setLikeAnimationUtil:(id)arg1;
- (void).cxx_destruct;
@end
