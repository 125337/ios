@interface StoreEmotionBannerView : UIView
{
    EmotionBannerSet * _banner; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _markLabel; // +0x18
    UIView * _markBgView; // +0x20
    MMWebImageView * _coverImageView; // +0x28
    ColorGradientView * _gradientView; // +0x30
}
+ (CGSize)size;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)setBanner:(id)arg1;
- (id)getDynamicColorFrom:(id)arg1;
- (id)banner;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)markLabel;
- (void)setMarkLabel:(id)arg1;
- (id)markBgView;
- (void)setMarkBgView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (void).cxx_destruct;
@end

