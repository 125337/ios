@interface MMFinderLiveFeedPreviewSearchComponentView : UIView
{
    UIImageView * _iconView; // +0x8
    UILabel * _label; // +0x10
    UIImageView * _arrowView; // +0x18
}
+ (BOOL)canDisplay:(id)arg1;
+ (id)wordingOfInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)isEmpty;
- (void)updateWithInfo:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
