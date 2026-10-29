@interface TSKMultiParam : NSObject
{
    BOOL _enableNewStcSection; // +0x8
    NSData * _dynamicData; // +0x10
    NSString * _skillString; // +0x18
    NSString * _mapString; // +0x20
}
- (id)dynamicData;
- (void)setDynamicData:(id)arg1;
- (id)skillString;
- (void)setSkillString:(id)arg1;
- (BOOL)enableNewStcSection;
- (void)setEnableNewStcSection:(BOOL)arg1;
- (id)mapString;
- (void)setMapString:(id)arg1;
- (void).cxx_destruct;
@end

