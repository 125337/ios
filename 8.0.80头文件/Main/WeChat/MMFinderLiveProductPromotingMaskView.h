@interface MMFinderLiveProductPromotingMaskView : UIView
{
    BOOL _isPlayingPromotionAnimation; // +0x8
    UIView * _contentView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)startPromotionShowAnimation;
- (void)stopPromotionShowAnimation;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)isPlayingPromotionAnimation;
- (void)setIsPlayingPromotionAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
