@interface AppVideoMessageCellView : BizAppBaseMessageCellView
{
    SightIconView * _playIconImgView; // +0xf0
    MMUILabel * _timeLabel; // +0xf8
    CAGradientLayer * _gradientLayer; // +0x100
}
- (BOOL)canBeReused;
- (void)layoutContentView;
- (id)coverImage;
- (id)coverImageView;
- (void)addTitleLabel;
- (void)addCoverImageView;
- (void)addTimeLabel;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (id)playIconImgView;
- (void)setPlayIconImgView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
