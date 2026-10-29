@interface WCNewShareCardLayoutCacheItem : MMObject <PBCoding>
{
    BOOL _entryShowRedDot; // +0x8
    BOOL _entryShowNew; // +0x9
    unsigned int _lastUpdateTime; // +0xc
    NSMutableArray * _localCityList; // +0x10
    NSMutableArray * _otherCityList; // +0x18
    NSString * _cityName; // +0x20
    NSString * _entryTip; // +0x28
    NSMutableArray * _entryIcons; // +0x30
}
+ (void)PBArrayAdd_localCityList;
+ (void)PBArrayAdd_otherCityList;
+ (void)PBArrayAdd_cityName;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_entryTip;
+ (void)PBArrayAdd_entryIcons;
+ (void)PBArrayAdd_entryShowNew;
+ (void)PBArrayAdd_entryShowRedDot;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)localCityList;
- (void)setLocalCityList:(id)arg1;
- (id)otherCityList;
- (void)setOtherCityList:(id)arg1;
- (id)cityName;
- (void)setCityName:(id)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (id)entryTip;
- (void)setEntryTip:(id)arg1;
- (id)entryIcons;
- (void)setEntryIcons:(id)arg1;
- (BOOL)entryShowRedDot;
- (void)setEntryShowRedDot:(BOOL)arg1;
- (BOOL)entryShowNew;
- (void)setEntryShowNew:(BOOL)arg1;
- (void).cxx_destruct;
@end
