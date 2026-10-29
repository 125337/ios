@interface MMAssetICloudLoadingView : UIView
{
    BOOL _isLoadFail; // +0x8
    BOOL _useShortTitle; // +0x9
    NSString * _title; // +0x10
    UIImageView * _iconImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _loadingDotLabel; // +0x28
    MMTimer * _animateTimer; // +0x30
    long long _animateDotIndex; // +0x38
    NSArray * _animateDots; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setIsLoadFail:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)didMoveToWindow;
- (void)startDotAnimation;
- (void)stopDotAnimation;
- (void)onDotAnimateUpdate;
- (void)sizeToFitWidth:(double)arg1;
- (void)layoutSubviews;
- (id)currentTitle;
- (id)title;
- (BOOL)isLoadFail;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)loadingDotLabel;
- (void)setLoadingDotLabel:(id)arg1;
- (id)animateTimer;
- (void)setAnimateTimer:(id)arg1;
- (long long)animateDotIndex;
- (void)setAnimateDotIndex:(long long)arg1;
- (id)animateDots;
- (void)setAnimateDots:(id)arg1;
- (BOOL)useShortTitle;
- (void)setUseShortTitle:(BOOL)arg1;
- (void).cxx_destruct;
@end

