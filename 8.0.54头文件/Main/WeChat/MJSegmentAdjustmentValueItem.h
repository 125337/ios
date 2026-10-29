@interface MJSegmentAdjustmentValueItem : NSObject
{
    BOOL _isSelected; // +0x8
    float _value; // +0xc
    float _minimumValue; // +0x10
    float _maximumValue; // +0x14
    float _defaultValue; // +0x18
}
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (float)value;
- (void)setValue:(float)arg1;
- (float)minimumValue;
- (void)setMinimumValue:(float)arg1;
- (float)maximumValue;
- (void)setMaximumValue:(float)arg1;
- (float)defaultValue;
- (void)setDefaultValue:(float)arg1;
@end

