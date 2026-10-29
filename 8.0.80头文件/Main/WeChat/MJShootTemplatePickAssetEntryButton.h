@interface MJShootTemplatePickAssetEntryButton : UIControl
{
    CAShapeLayer * _backgroundLayer; // +0x8
    MMUIImageView * _iconView; // +0x10
    MMUILabel * _guideWordingLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setupLayoutWithGuideWording;
- (void)layoutSubviews;
- (id)_rebuildBackgroundLayerPath;
- (void)updateUIWithGuideWording:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_updateSubviewsAlpha:(double)arg1;
- (id)backgroundLayer;
- (id)iconView;
- (id)guideWordingLabel;
- (void)setBackgroundLayer:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setGuideWordingLabel:(id)arg1;
- (void).cxx_destruct;
@end
