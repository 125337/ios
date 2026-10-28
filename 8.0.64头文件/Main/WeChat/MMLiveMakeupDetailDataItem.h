@interface MMLiveMakeupDetailDataItem : NSObject
{
    float _defaultValue; // +0x8
    float _value; // +0xc
    NSString * _detailId; // +0x10
    NSString * _title; // +0x18
    NSString * _coverColorString; // +0x20
    unsigned long long _order; // +0x28
    NSString * _effectMaterialsFolderPath; // +0x30
    unsigned long long _objectType; // +0x38
    NSString * _iconPath; // +0x40
    NSString * _saveKey; // +0x48
    MMLiveBeautyBadgeItem * _badge; // +0x50
}
- (BOOL)isMakeupFilter;
- (id)detailId;
- (void)setDetailId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
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
