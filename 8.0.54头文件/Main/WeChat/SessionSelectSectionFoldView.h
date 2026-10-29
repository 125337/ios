@interface SessionSelectSectionFoldView : UIView
{
    BOOL _hideBottomLine; // +0x8
    BOOL _isFolding; // +0x9
    id <SessionSelectSectionFoldViewDelegate> _delegate; // +0x10
    double _contentMarginLeft; // +0x18
    long long _foldCount; // +0x20
    UIView * _topSeparatorView; // +0x28
    BannerButton * _bannerBtn; // +0x30
    UIView * _bottomSeparatorView; // +0x38
}
+ (double)height;
- (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)setHideBottomLine:(BOOL)arg1;
- (void)setContentMarginLeft:(double)arg1;
- (void)setIsFolding:(BOOL)arg1 foldCount:(long long)arg2;
- (void)layoutSubviews;
- (void)onSingleTap;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hideBottomLine;
- (double)contentMarginLeft;
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

