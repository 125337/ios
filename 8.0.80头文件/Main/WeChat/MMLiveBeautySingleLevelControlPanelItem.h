@interface MMLiveBeautySingleLevelControlPanelItem : MMLiveBeautyControlPanelItem
{
    BOOL _fineTuningAvailable; // +0x8
    double _maxValue; // +0x10
    double _minValue; // +0x18
    double _defaultValue; // +0x20
    double _value; // +0x28
}
- (BOOL)fineTuningAvailable;
- (void)setFineTuningAvailable:(BOOL)arg1;
- (double)maxValue;
- (void)setMaxValue:(double)arg1;
- (double)minValue;
- (void)setMinValue:(double)arg1;
- (double)defaultValue;
- (void)setDefaultValue:(double)arg1;
- (double)value;
- (void)setValue:(double)arg1;
@end
