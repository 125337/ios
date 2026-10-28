@interface WADeviceVoipAuthService : MMUserService <WADeviceVoipAuthGetDeviceListCgiDelegate, WADeviceVoipAuthModCgiDelegate, MMServiceProtocol>
- (void)fetchVoipDeviceList:(id)arg1;
- (void)didFetchDeviceVoipAuthDeviceList:(id)arg1 cgi:(id)arg2;
- (void)didFailToFetchDeviceWithError:(id)arg1 cgi:(id)arg2;
- (void)updateVoipDeviceAuthStatus:(id)arg1;
- (void)didModDeviceVoipAuthStatus:(id)arg1;
- (void)didFailToModDeviceAuthStatusWithError:(id)arg1 cgi:(id)arg2;
@end
