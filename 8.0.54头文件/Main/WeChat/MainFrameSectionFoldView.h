@interface MainFrameSectionFoldView : UIView
{
    BOOL _hideBottomLine; // +0x8
    BOOL _isFolding; // +0x9
    id <MainFrameSectionFoldViewDelegate> _delegate; // +0x10
    long long _foldCount; // +0x18
    UIView * _topSeparatorView; // +0x20
    MFBannerBtn * _bannerBtn; // +0x28
    UIView * _bottomSeparatorView; // +0x30
}
+ (double)height;
- (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)setHideBottomLine:(BOOL)arg1;
- (void)setIsFolding:(BOOL)arg1 foldCount:(long long)arg2;
- (void)layoutSubviews;
- (void)onSingleTap;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hideBottomLine;
- (BOOL)isFolding;
- (void)setIsFolding:(BOOL)arg1;
- (long long)foldCount;
- (void)setFoldCount:(long long)arg1;
- (id)topSeparatorView;
- (void)setTopSeparatorView:(id)arg1;
- (id)bannerBtn;
- (void)setBannerBtn:(id)arg1;
- (id)bottomSeparatorView;
- (void)setBottomSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end

