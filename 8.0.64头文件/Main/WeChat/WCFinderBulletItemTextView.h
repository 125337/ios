@interface WCFinderBulletItemTextView : UIView
{
    WCFinderBulletItem * _item; // +0x8
    UIView * _contentView; // +0x10
    _TtC6WeChat20WFDEnhancedLabelView * _textLabel; // +0x18
    UIImageView * _userIdentityImg; // +0x20
    UIImageView * _likeIcon; // +0x28
    WCFinderStrokeLabel * _likeCountLabel; // +0x30
}
+ (double)containerExtraWidthWithItem:(id)arg1 font:(id)arg2;
+ (double)estimateWidthWithItem:(id)arg1 font:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)removeFromSuperview;
- (void)_setupUI;
- (void)updateContent:(id)arg1 style:(id)arg2 containerWidth:(double)arg3;
- (void)updateLikeCount;
- (unsigned long long)tapGestureHittingAreaWithGestureLocation:(CGPoint)arg1;
- (id)_strokeColor;
- (BOOL)_showLikeCount;
- (id)likeIcon;
- (id)likeCountLabel;
- (void)_updateLikeTipsWithHighlight:(BOOL)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)userIdentityImg;
- (void)setUserIdentityImg:(id)arg1;
- (void)setLikeIcon:(id)arg1;
- (void)setLikeCountLabel:(id)arg1;
- (void).cxx_destruct;
@end
