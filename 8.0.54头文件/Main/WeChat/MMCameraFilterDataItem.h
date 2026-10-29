@interface MMCameraFilterDataItem : NSObject
{
    float _defaultValue; // +0x8
    NSString * _filterId; // +0x10
    NSString * _title; // +0x18
    NSString * _filterImageUri; // +0x20
    NSString * _filterImageMd5Hash; // +0x28
    NSString * _filterImagePath; // +0x30
    NSString * _coverColorString; // +0x38
    unsigned long long _type; // +0x40
}
+ (id)defaultFilterDataItems;
- (BOOL)effective;
- (id)filterId;
- (void)setFilterId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (float)defaultValue;
- (void)setDefaultValue:(float)arg1;
- (id)filterImageUri;
- (void)setFilterImageUri:(id)arg1;
- (id)filterImageMd5Hash;
- (void)setFilterImageMd5Hash:(id)arg1;
- (id)filterImagePath;
- (void)setFilterImagePath:(id)arg1;
- (id)coverColorString;
- (void)setCoverColorString:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

