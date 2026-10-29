@interface MMLiveMakeupDetailDataItem : NSObject
{
    BOOL _applyBlurring; // +0x8
    float _defaultValue; // +0xc
    float _value; // +0x10
    NSString * _detailId; // +0x18
    NSString * _title; // +0x20
    NSString * _coverColorString; // +0x28
    unsigned long long _order; // +0x30
    NSString * _effectMaterialsFolderPath; // +0x38
    unsigned long long _objectType; // +0x40
    NSString * _iconPath; // +0x48
    NSString * _saveKey; // +0x50
    MMLiveBeautyBadgeItem * _badge; // +0x58
}
- (BOOL)isMakeupFilter;
- (id)detailId;
- (void)setDetailId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)applyBlurring;
- (void)setApplyBlurring:(BOOL)arg1;
- (id)coverColorString;
- (void)setCoverColorString:(id)arg1;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;
- (id)effectMaterialsFolderPath;
- (void)setEffectMaterialsFolderPath:(id)arg1;
- (unsigned long long)objectType;
- (void)setObjectType:(unsigned long long)arg1;
- (float)defaultValue;
- (void)setDefaultValue:(float)arg1;
- (id)iconPath;
- (void)setIconPath:(id)arg1;
- (float)value;
- (void)setValue:(float)arg1;
- (id)saveKey;
- (void)setSaveKey:(id)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (void).cxx_destruct;
@end
