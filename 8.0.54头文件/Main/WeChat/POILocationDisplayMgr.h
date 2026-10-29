@interface POILocationDisplayMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
- (void)dealloc;
- (int)getPOIDisplayNameWithLocation:(id)arg1 Scene:(int)arg2 SrcDisplayName:(id)arg3 extraInfo:(id)arg4;
- (void)logGoogleAddressResult:(id)arg1 ForLocation:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetPOICityResponse:(id)arg1;
@end

