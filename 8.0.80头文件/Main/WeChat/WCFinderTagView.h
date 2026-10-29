@interface WCFinderTagView : MMUIView
{
    UIImageView * _iconView; // +0x8
    UILabel * _label; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)updateImage:(id)arg1;
- (void)updateText:(id)arg1;
- (void)updateLayout;
- (id)iconView;
- (id)label;
- (void)setIconView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
