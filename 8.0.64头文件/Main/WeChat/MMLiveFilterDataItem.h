@interface MMLiveFilterDataItem : NSObject
{
    float _defaultValue; // +0x8
    float _value; // +0xc
    NSString * _filterId; // +0x10
    NSString * _title; // +0x18
    NSString * _filterFilePath; // +0x20
    NSString * _coverColorString; // +0x28
    MMLiveBeautyBadgeItem * _badge; // +0x30
    unsigned long long _order; // +0x38
}
+ (id)defaultNoopItem;
- (id)init;
- (BOOL)effective;
- (BOOL)canSetValue;
- (id)saveKey;
- (id)filterId;
- (void)setFilterId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (float)defaultValue;
- (void)setDefaultValue:(float)arg1;
- (float)value;
- (void)setValue:(float)arg1;
- (id)filterFilePath;
- (void)setFilterFilePath:(id)arg1;
- (id)coverColorString;
- (void)setCoverColorString:(id)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
