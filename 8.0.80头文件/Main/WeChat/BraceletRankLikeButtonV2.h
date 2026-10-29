@interface BraceletRankLikeButtonV2 : BraceletRankLikeButton
{
    BOOL _useCustomVerticalLayout; // +0x8
    double _customLikeImageCenterY; // +0x10
    double _customLikeCountCenterY; // +0x18
}
- (id)initWithDeviceRankInfo:(id)arg1;
- (void)initView;
- (id)p_likeImageView;
- (id)p_likeCountLabel;
- (void)p_applyCustomVerticalLayoutIfNeeded;
- (void)layoutLikeImageCenterY:(double)arg1 likeCountCenterY:(double)arg2;
- (void)animatChangeToLikeState:(BOOL)arg1;
- (BOOL)useCustomVerticalLayout;
- (void)setUseCustomVerticalLayout:(BOOL)arg1;
- (double)customLikeImageCenterY;
- (void)setCustomLikeImageCenterY:(double)arg1;
- (double)customLikeCountCenterY;
- (void)setCustomLikeCountCenterY:(double)arg1;
@end
