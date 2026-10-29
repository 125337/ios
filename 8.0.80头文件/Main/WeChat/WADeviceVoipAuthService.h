@interface WADeviceVoipAuthService : MMUserService <WADeviceVoipAuthGetDeviceListCgiDelegate, WADeviceVoipAuthModCgiDelegate, PBMessageObserverDelegate, MMServiceProtocol>
- (void)fetchVoipAuthItemList:(id)arg1;
- (void)didFetchDeviceVoipAuthDeviceList:(id)arg1 serviceAuthList:(id)arg2 cgi:(id)arg3;
- (void)didFailToFetchDeviceWithError:(id)arg1 cgi:(id)arg2;
- (void)updateVoipDeviceAuthStatus:(id)arg1;
- (void)updateServiceVoipAuthStatus:(id)arg1;
- (void)didModDeviceVoipAuthStatus:(id)arg1;
- (void)didFailToModDeviceAuthStatusWithError:(id)arg1 cgi:(id)arg2;
- (void)setVoipCallSubIdStatus:(BOOL)arg1 subId:(id)arg2;
- (BOOL)getVoipCallSubIdStatusCache:(id)arg1;
- (void)fetchVoipCallSubIdStatus:(id)arg1;
- (void)handleGetVoipCallSubIdStatus:(id)arg1;
- (void)handleSetVoipCallSubIdStatus:(id)arg1;
- (void)writeServiceVoipSubIdStatus:(id)arg1 status:(BOOL)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
