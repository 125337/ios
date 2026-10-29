@interface FavLocationMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    BOOL _isRunningReverse; // +0x8
    FavLocationDB * _locationDB; // +0x10
    unsigned int _eventID; // +0x18
}
- (id)init;
- (void)onServiceInit;
- (void)initData;
- (void)onServiceClearData;
- (id)getAddressByLocation:(id)arg1;
- (unsigned int)updateAddressByLocation:(id)arg1;
- (id)countryFromAddressDic:(id)arg1;
- (id)cityFromAddressDic:(id)arg1;
- (unsigned int)requestWXGeocodeWithLocation:(id)arg1;
- (void)clearLocationCache;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

