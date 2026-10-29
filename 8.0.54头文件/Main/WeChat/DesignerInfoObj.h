@interface DesignerInfoObj : MMObject <PBCoding, NSCopying>
{
    unsigned long long _updateTime; // +0x8
    PersonalDesigner * _designer; // +0x10
}
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_designer;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
- (id)designer;
- (void)setDesigner:(id)arg1;
- (void).cxx_destruct;
@end

