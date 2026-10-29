@interface WWKFReportLocationMgr : MMUserService <PBMessageObserverDelegate, LocationRetrieveDelegate, MMServiceProtocol>
{
    BOOL _retrieveringLocation; // +0x8
    LocationRetriever * _locationRetriever; // +0x10
    NSMutableDictionary * _reportUsers; // +0x18
}
- (id)init;
- (BOOL)shouldShowReportLocationSwitchForUserName:(id)arg1;
- (BOOL)shouldReportLocationForUserName:(id)arg1;
- (BOOL)isAllowReportLocationForUserName:(id)arg1;
- (void)reportLocationIfNeededForUserName:(id)arg1 scene:(int)arg2;
- (void)setAllowReportLocation:(BOOL)arg1 userName:(id)arg2;
- (void)cancelGetLocation;
- (void)reportLocation:(id)arg1;
- (void)doReportLocationForUserName:(id)arg1 usingLocation:(id)arg2 locationType:(id)arg3 scene:(int)arg4;
- (void)onFailedToGetLocation;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onSetAllowReportLocationResp:(id)arg1;
- (void)onReportLocationResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (BOOL)retrieveringLocation;
- (void)setRetrieveringLocation:(BOOL)arg1;
- (id)reportUsers;
- (void)setReportUsers:(id)arg1;
- (void).cxx_destruct;
@end

