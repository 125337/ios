@interface MMLocationAttributeBanner : MMUIView <MMWebImageViewDelegate>
{
    NSString * _title; // +0x8
    NSString * _logoUrl; // +0x10
    NSString * _link; // +0x18
    id <MMLocationAttributeBannerDelegate> _delegate; // +0x20
    UILabel * _titleLable; // +0x28
    MMWebImageView * _logoImgView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onTapBanner:(id)arg1;
- (void)updateBanner:(id)arg1 LogoUrl:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (id)title;
- (id)logoUrl;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

