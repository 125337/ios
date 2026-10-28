@interface MMFinderLiveGameEsportSignView : UIView
{
    BOOL _isCustomizedAccessibilityLabel; // +0x8
    FinderLiveBadgeInfo * _badgeInfo; // +0x10
    NSString * _badgeName; // +0x18
    long long _uiStyle; // +0x20
    long long _uiMode; // +0x28
    MMWebImageView * _rankImgView; // +0x30
    MMUILabel * _signLabel; // +0x38
    double _currentLayoutFontScale; // +0x40
}
+ (CGSize)getGameEsportSizeWithBadgeName:(id)arg1 uiStyle:(long long)arg2;
+ (id)signLabelFontForStyle:(long long)arg1;
+ (double)signIconWidthForStyle:(long long)arg1;
+ (double)signIconHeightForStyle:(long long)arg1;
+ (double)insetLeftForStyle:(long long)arg1;
+ (double)insetRightForStyle:(long long)arg1;
+ (double)fixHeightForStyle:(long long)arg1;
+ (double)insetTopForStyle:(long long)arg1;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutRankImgView;
- (void)layoutSignLabel;
- (void)updateUIStyle:(long long)arg1;
- (void)updateBadgeInfo:(id)arg1;
- (void)updateLayoutFontScale;
- (void)refresh;
- (id)accessibilityLabel;
- (void)setIsCustomizedAccessibilityLabel:(BOOL)arg1;
- (BOOL)isSameBadgeInfo:(id)arg1;
- (void)initDefaultLayoutFontScale;
- (void)updateSelfSize;
- (id)getSignTextColor;
- (BOOL)isCustomizedAccessibilityLabel;
- (id)badgeInfo;
- (void)setBadgeInfo:(id)arg1;
- (id)badgeName;
- (void)setBadgeName:(id)arg1;
- (long long)uiStyle;
- (void)setUiStyle:(long long)arg1;
- (long long)uiMode;
- (void)setUiMode:(long long)arg1;
- (id)rankImgView;
- (void)setRankImgView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (double)currentLayoutFontScale;
- (void)setCurrentLayoutFontScale:(double)arg1;
- (void).cxx_destruct;
@end
