@interface EmoticonLensInfo : MMObject <PBCoding, NSCopying>
{
    NSString * _lensId; // +0x8
    NSString * _name; // +0x10
    PersonalDesigner * _designer; // +0x18
    LensPackage * _package; // +0x20
    LensIcon * _iconInfo; // +0x28
}
+ (void)PBArrayAdd_lensId;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_designer;
+ (void)PBArrayAdd_package;
+ (void)PBArrayAdd_iconInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)lensId;
- (void)setLensId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)designer;
- (void)setDesigner:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)iconInfo;
- (void)setIconInfo:(id)arg1;
- (void).cxx_destruct;
@end

