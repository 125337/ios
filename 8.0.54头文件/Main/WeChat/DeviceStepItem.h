@interface DeviceStepItem : MMObject <PBCoding>
{
    unsigned int _uiTimeStamp; // +0x8
    unsigned int _uiStep; // +0xc
}
+ (void)PBArrayAdd_uiTimeStamp;
+ (void)PBArrayAdd_uiStep;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)uiTimeStamp;
- (void)setUiTimeStamp:(unsigned int)arg1;
- (unsigned int)uiStep;
- (void)setUiStep:(unsigned int)arg1;
@end

