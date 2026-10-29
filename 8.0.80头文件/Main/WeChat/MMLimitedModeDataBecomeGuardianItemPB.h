@interface MMLimitedModeDataBecomeGuardianItemPB : MMObject <PBCoding>
{
    unsigned int _becomeGuardianTime; // +0x8
    NSString * _guardianUserName; // +0x10
    NSString * _wardUserName; // +0x18
    NSString * _ticket; // +0x20
}
+ (void)PBArrayAdd_guardianUserName;
+ (void)PBArrayAdd_wardUserName;
+ (void)PBArrayAdd_becomeGuardianTime;
+ (void)PBArrayAdd_ticket;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)guardianUserName;
- (void)setGuardianUserName:(id)arg1;
- (id)wardUserName;
- (void)setWardUserName:(id)arg1;
- (unsigned int)becomeGuardianTime;
- (void)setBecomeGuardianTime:(unsigned int)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (void).cxx_destruct;
@end
