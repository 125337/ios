@interface WCSnsMenuItem : MMObject <PBCoding>
{
    unsigned int _menuActionType; // +0x8
    unsigned int _alertActionType; // +0xc
    NSString * _title; // +0x10
    NSString * _alertWording; // +0x18
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_menuActionType;
+ (void)PBArrayAdd_alertWording;
+ (void)PBArrayAdd_alertActionType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isValidForShow;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned int)menuActionType;
- (void)setMenuActionType:(unsigned int)arg1;
- (id)alertWording;
- (void)setAlertWording:(id)arg1;
- (unsigned int)alertActionType;
- (void)setAlertActionType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
