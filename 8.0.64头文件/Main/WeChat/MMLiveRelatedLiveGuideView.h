@interface MMLiveRelatedLiveGuideView : UIView
{
    PAGView * _animationView; // +0x8
    UILabel * _label; // +0x10
    CGSize _animationSize; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)play;
- (void)dismiss;
- (void)layoutSubviews;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (CGSize)animationSize;
- (void)setAnimationSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
