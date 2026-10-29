@interface MJMultiMaterialInfo : NSObject <PBCoding, NSCopying>
{
    BOOL _enable; // +0x8
    int _materialCountType; // +0xc
    unsigned long long _materialCountMin; // +0x10
    unsigned long long _materialCountMax; // +0x18
    unsigned long long _materialCountExact; // +0x20
    NSString * _pickerGuideWording; // +0x28
    NSArray * _materialSlotList; // +0x30
}
+ (void)PBArrayAdd_enable;
+ (void)PBArrayAdd_materialCountMin;
+ (void)PBArrayAdd_materialCountMax;
+ (void)PBArrayAdd_materialCountExact;
+ (void)PBArrayAdd_pickerGuideWording;
+ (void)PBArrayAdd_materialSlotList;
+ (void)PBArrayAdd_materialCountType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithMultiMaterialInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (unsigned long long)materialCountMin;
- (void)setMaterialCountMin:(unsigned long long)arg1;
- (unsigned long long)materialCountMax;
- (void)setMaterialCountMax:(unsigned long long)arg1;
- (unsigned long long)materialCountExact;
- (void)setMaterialCountExact:(unsigned long long)arg1;
- (id)pickerGuideWording;
- (void)setPickerGuideWording:(id)arg1;
- (id)materialSlotList;
- (void)setMaterialSlotList:(id)arg1;
- (int)materialCountType;
- (void)setMaterialCountType:(int)arg1;
- (void).cxx_destruct;
@end
