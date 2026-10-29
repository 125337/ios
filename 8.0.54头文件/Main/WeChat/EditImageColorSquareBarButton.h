@interface EditImageColorSquareBarButton : UIButton
{
    UIView * _backColorView; // +0x8
    UIView * _frontColorView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (double)backSize;
- (double)frontSize;
- (void)setColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (id)backColorView;
- (void)setBackColorView:(id)arg1;
- (id)frontColorView;
- (void)setFrontColorView:(id)arg1;
- (void).cxx_destruct;
@end

