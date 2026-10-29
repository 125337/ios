@interface EmoticonLensItemConfig : NSObject <YYModel>
{
    long long _lensType; // +0x8
    NSString * _type; // +0x10
    double _version; // +0x18
    NSMutableArray * _elements; // +0x20
    NSMutableDictionary * _params; // +0x28
    NSString * _id; // +0x30
    NSString * _nameEn; // +0x38
    NSString * _nameCn; // +0x40
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)init;
- (BOOL)modelCustomTransformToDictionary:(id)arg1 forConfigTag:(id)arg2;
- (void)setAdjust:(BOOL)arg1;
- (long long)lensType;
- (void)setLensType:(long long)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (double)version;
- (void)setVersion:(double)arg1;
- (id)elements;
- (void)setElements:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)id;
- (void)setId:(id)arg1;
- (id)nameEn;
- (void)setNameEn:(id)arg1;
- (id)nameCn;
- (void)setNameCn:(id)arg1;
- (void).cxx_destruct;
@end

