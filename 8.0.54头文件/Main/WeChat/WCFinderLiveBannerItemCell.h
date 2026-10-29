@interface WCFinderLiveBannerItemCell : WCFinderLiveBannerBaseCell
{
    MMRollableLabelView * _masterTitleTextView; // +0x8
    MMRollableLabelView * _subTitleTextView; // +0x10
    MMWebImageView * _rightImageView; // +0x18
    MMWebImageView * _subTitleIconImageView; // +0x20
    MMRollableLabelViewConfig * _masterTitleConfig; // +0x28
    MMRollableLabelViewConfig * _subTitleConfig; // +0x30
}
+ (CGSize)bannerSizeByInfo:(id)arg1;
- (void)prepareForReuse;
- (void)startScrollAnimation:(BOOL)arg1;
- (void)stopScrollAnimation;
- (void)delayStartScrollAnimation;
- (void)setupUIIfNeeded;
- (void)setBannerVM:(id)arg1;
- (double)getRollingSpeedPerSecond:(double)arg1 maxWidth:(double)arg2;
- (double)maxMasterTitleWidth;
- (double)maxSubTitleWidth;
- (BOOL)showDeleteAnimationWithCompleteAction:(id /* block */)arg1;
- (BOOL)updateCurrentSubTitle;
- (void)forceStopPagAnimation;
- (id)masterTitleTextView;
- (void)setMasterTitleTextView:(id)arg1;
- (id)subTitleTextView;
- (void)setSubTitleTextView:(id)arg1;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (id)subTitleIconImageView;
- (void)setSubTitleIconImageView:(id)arg1;
- (id)masterTitleConfig;
- (void)setMasterTitleConfig:(id)arg1;
- (id)subTitleConfig;
- (void)setSubTitleConfig:(id)arg1;
- (void).cxx_destruct;
@end

