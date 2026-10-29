@interface MJCaptionLabel : UIView
{
    UILabel * _label; // +0x8
    UILabel * _subLabel; // +0x10
    UIImageView * _indicatorView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)addRecognizingAnimation;
- (void)layoutWithMaxWidth:(double)arg1;
- (void)setText:(id)arg1;
- (void)setSubText:(id)arg1;
- (id)text;
- (id)subText;
- (void)showIndicatorViewAnimated:(BOOL)arg1;
- (void)hideIndicatorViewAnimated:(BOOL)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)subLabel;
- (void)setSubLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end

