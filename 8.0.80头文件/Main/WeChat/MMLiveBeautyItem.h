@interface MMLiveBeautyItem : MMLiveBeautyOption
{
    BOOL _applyBlurring; // +0x8
    BOOL _reverseValueDisplay; // +0x9
    BOOL _applyAbsoluteValue; // +0xa
    BOOL _useOpaqueResources; // +0xb
    NSString * _displayName; // +0x10
    NSString * _itemDescription; // +0x18
    NSString * _colorHexString; // +0x20
    MMLiveBeautyBadgeItem * _badge; // +0x28
    NSString * _driverName; // +0x30
    double _minimumValue; // +0x38
    double _maximumValue; // +0x40
    double _defaultValue; // +0x48
    NSString * _positiveResourcesPath; // +0x50
    NSString * _negativeResourcesPath; // +0x58
    NSString * _iconPath; // +0x60
    double _value; // +0x68
}
+ (id)itemInJsonDictionary:(id)arg1 suiteId:(id)arg2 suiteResourcePath:(id)arg3 itemGroups:(id)arg4 badges:(id)arg5 capabilities:(id)arg6;
- (unsigned long long)type;
- (double)equivalentModernValueForLegacyValue:(double)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)itemDescription;
- (void)setItemDescription:(id)arg1;
- (id)colorHexString;
- (void)setColorHexString:(id)arg1;
- (BOOL)applyBlurring;
- (void)setApplyBlurring:(BOOL)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (id)driverName;
- (void)setDriverName:(id)arg1;
- (double)minimumValue;
- (void)setMinimumValue:(double)arg1;
- (double)maximumValue;
- (void)setMaximumValue:(double)arg1;
- (double)defaultValue;
- (void)setDefaultValue:(double)arg1;
- (BOOL)reverseValueDisplay;
- (void)setReverseValueDisplay:(BOOL)arg1;
- (BOOL)applyAbsoluteValue;
- (void)setApplyAbsoluteValue:(BOOL)arg1;
- (BOOL)useOpaqueResources;
- (void)setUseOpaqueResources:(BOOL)arg1;
- (id)positiveResourcesPath;
- (void)setPositiveResourcesPath:(id)arg1;
- (id)negativeResourcesPath;
- (void)setNegativeResourcesPath:(id)arg1;
- (id)iconPath;
- (void)setIconPath:(id)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (void).cxx_destruct;
@end
