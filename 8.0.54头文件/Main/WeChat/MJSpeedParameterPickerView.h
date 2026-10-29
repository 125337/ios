@interface MJSpeedParameterPickerView : MJPrecisionPickerView
{
    double _indicatorHeight; // +0x8
    UIView * _indicatorView; // +0x10
    UILabel * _valueLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)setValue:(long long)arg1 withSpec:(struct)arg2 animated:(BOOL)arg3;
- (void)willMoveToSuperview:(id)arg1;
- (double)indicatorHeight;
- (void)setIndicatorHeight:(double)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (void).cxx_destruct;
@end

