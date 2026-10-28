@interface WAReportNearByWeappActionItem : WAReportBaseItem
{
    unsigned int _appCount; // +0x8
    unsigned int _clicktime; // +0xc
    unsigned long long _enterScene; // +0x10
    unsigned long long _openType; // +0x18
    NSString * _nearbyListID; // +0x20
}
- (id)reportString;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)openType;
- (void)setOpenType:(unsigned long long)arg1;
- (unsigned int)appCount;
- (void)setAppCount:(unsigned int)arg1;
- (id)nearbyListID;
- (void)setNearbyListID:(id)arg1;
- (unsigned int)clicktime;
- (void)setClicktime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
