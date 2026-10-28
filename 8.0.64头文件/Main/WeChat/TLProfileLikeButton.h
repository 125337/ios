@interface TLProfileLikeButton : MMUIButton
{
    BOOL _isLiked; // +0x8
    id /* block */ _tapBlock; // +0x10
    UIImageView * _likeIconImageView; // +0x18
    UILabel * _numLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)updateWithLiked:(BOOL)arg1;
- (void)updateWithContact:(id)arg1;
- (void)onLikeButtonSelected:(id)arg1;
- (void)performLikeAnimate;
- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg1;
- (id)likeIconImageView;
- (void)setLikeIconImageView:(id)arg1;
- (id)numLabel;
- (void)setNumLabel:(id)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (void).cxx_destruct;
@end
