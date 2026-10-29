@interface MMLiveHeadImageView : UIView
{
    BOOL _isMysterious; // +0x8
    BOOL _hasConfiguredMysteriousState; // +0x9
    WCFinderHeadImageView * _headImageView; // +0x10
    UIVisualEffectView * _blurOverlayView; // +0x18
}
- (id)initWithSize:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)configureWithContact:(id)arg1 isFinderIdentity:(BOOL)arg2 isMysterious:(BOOL)arg3;
- (void)configureWithHeadURL:(id)arg1 isFinderIdentity:(BOOL)arg2 isMysterious:(BOOL)arg3;
- (void)configureWithImage:(id)arg1 isFinderIdentity:(BOOL)arg2 isMysterious:(BOOL)arg3;
- (void)updateDisplayStyleWithFinderIdentity:(BOOL)arg1;
- (void)updateMysteriousState:(BOOL)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)configureDisplayStyle:(BOOL)arg1;
- (void)configureMysteriousBlur:(BOOL)arg1;
- (void)syncBlurOverlayLayout;
- (id)lazyLoadBlurOverlayView;
- (void)prepareForReuse;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (BOOL)isMysterious;
- (void)setIsMysterious:(BOOL)arg1;
- (id)blurOverlayView;
- (void)setBlurOverlayView:(id)arg1;
- (BOOL)hasConfiguredMysteriousState;
- (void)setHasConfiguredMysteriousState:(BOOL)arg1;
- (void).cxx_destruct;
@end
