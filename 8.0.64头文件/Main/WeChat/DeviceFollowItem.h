@interface DeviceFollowItem : MMObject <PBCoding>
{
    unsigned int _uiStep; // +0x8
    unsigned int _uiIndex; // +0xc
    NSString * _nsUserName; // +0x10
}
+ (void)PBArrayAdd_nsUserName;
+ (void)PBArrayAdd_uiStep;
+ (void)PBArrayAdd_uiIndex;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (unsigned int)uiStep;
- (void)setUiStep:(unsigned int)arg1;
- (unsigned int)uiIndex;
- (void)setUiIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
