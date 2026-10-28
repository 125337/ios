@interface TrackRoomMgr : MMUserService <PBMessageObserverDelegate, ILocationMgrExt, MMServiceProtocol>
{
    BOOL _isJoining; // +0x8
    BOOL _isRefreshing; // +0x9
    int _nextState; // +0xc
    int _currentState; // +0x10
    unsigned long long _headingTag; // +0x18
    unsigned long long _locationTag; // +0x20
    int _retryCount; // +0x28
    double _trueHeading; // +0x30
    double _course; // +0x38
    NSString * _chatname; // +0x40
    NSString * _trackRoomID; // +0x48
    TrackPOIItem * _trackPOIItem; // +0x50
    TrackPOIItem * _roomPOI; // +0x58
    CLLocationCoordinate2D _uploadCoordiante; // +0x60
    MMTimer * _refreshTimer; // +0x70
    unsigned int _scene; // +0x78
    unsigned int _refreshTimeInterval; // +0x7c
    BOOL _isNeedResumeWXMuisc; // +0x80
    BOOL _isNeedResumeFinderMinimize; // +0x81
    CLLocationCoordinate2D _coordinate; // +0x88
}
- (void)reportAction:(long long)arg1;
- (void)reportRetryAction:(long long)arg1;
- (void)reportTimeAction:(long long)arg1 time:(unsigned long long)arg2;
- (void)reportExitAction:(long long)arg1;
- (id)init;
- (void)dealloc;
- (void)enterBackground;
- (void)enterForeground;
- (int)openTrackRoom:(id)arg1 POIItem:(id)arg2 Scene:(unsigned int)arg3;
- (int)setTrackRoomState:(int)arg1;
- (void)setUploadCoordinate:(CLLocationCoordinate2D)arg1;
- (int)closeTrackRoom:(unsigned int)arg1;
- (double)heading;
- (BOOL)isUploading;
- (int)onRoomStateChanging:(int)arg1;
- (void)setCurrentState:(int)arg1;
- (void)startUpdateTrueHeading;
- (void)stopUpdateTrueHeading;
- (void)startUpdateCourse;
- (void)stopUpdateCourse;
- (int)joinTrackRoom:(id)arg1;
- (int)refreshTrackRoomWithType:(int)arg1;
- (void)onTimerRefreshTrackRoom;
- (int)exitTrackRoom:(unsigned int)arg1;
- (void)retryChangeState;
- (void)handleJoinTrackRoomResponse:(id)arg1;
- (void)handleRefreshTrackRoomResponse:(id)arg1;
- (void)handleExitTrackRoomResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (id)chatname;
- (id)trackRoomID;
- (CLLocationCoordinate2D)coordinate;
- (unsigned int)refreshTimeInterval;
- (id)roomPOI;
- (void).cxx_destruct;
@end
