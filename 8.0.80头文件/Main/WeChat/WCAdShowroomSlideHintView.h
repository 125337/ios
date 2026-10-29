@interface WCAdShowroomSlideHintView : MMUIView
{
    UIImageView * _arrowView; // +0x8
    double _iconMarginBottom; // +0x10
    MMUILabel * _titleLabel; // +0x18
    double _titleNaturalHeight; // +0x20
}
+ (double)hintWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)updateWithTitle:(id)arg1;
- (void)updateIconSizeWithViewController:(id)arg1 isTimelineScene:(BOOL)arg2;
- (void)layoutSubviews;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (double)iconMarginBottom;
- (void)setIconMarginBottom:(double)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (double)titleNaturalHeight;
- (void)setTitleNaturalHeight:(double)arg1;
- (void).cxx_destruct;
@end
