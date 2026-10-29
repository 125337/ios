@interface MMLiveHeatAndIconButton : MMUIButton
{
    UIImageView * _iconView; // +0x8
    UILabel * _heatLabel; // +0x10
    UIView * _lineView; // +0x18
}
- (void)updateWithHeatText:(id)arg1 icon:(id)arg2;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)heatLabel;
- (void)setHeatLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

