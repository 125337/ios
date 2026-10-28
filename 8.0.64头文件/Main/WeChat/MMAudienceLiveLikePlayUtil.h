@interface MMAudienceLiveLikePlayUtil : MMLiveLikePlayUtil
{
    MMLiveLikeButton * _likeButton; // +0x90
}
- (void)likeButtonClickStart;
- (void)likeButtonClickEnd;
- (void)showLiveLike;
- (void)hideLiveLike;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (void).cxx_destruct;
@end
