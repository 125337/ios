@interface TrackRoomMgr : MMUserService <ITrackRoomMgrV1Ext, ITrackRoomMgrV2Ext, PBMessageObserverDelegate, ILocationMgrExt, MMServiceProtocol>
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
    NSString * _uniqueTrackRoomID; // +0x50
    long long _joinTimestamp; // +0x58
    long long _onlineUserCount; // +0x60
    TrackPOIItem * _trackPOIItem; // +0x68
    TrackPOIItem * _roomPOI; // +0x70
    CLLocationCoordinate2D _uploadCoordiante; // +0x78
    MMTimer * _refreshTimer; // +0x88
    unsigned int _scene; // +0x90
    unsigned int _refreshTimeInterval; // +0x94
    BOOL _isNeedResumeWXMuisc; // +0x98
    BOOL _isNeedResumeFinderMinimize; // +0x99
    TrackRoomReportParam * _exitReportParam; // +0xa0
    CLLocationCoordinate2D _coordinate; // +0xa8
}
+ (id)tipsTextForUserList:(id)arg1;
- (void)reportAction:(long long)arg1;
- (void)reportRetryAction:(long long)arg1;
- (void)reportTimeAction:(long long)arg1 time:(unsigned long long)arg2;
- (void)reportExitAction:(long long)arg1;
- (void)markNextResumeFromFloat;
- (id)init;
- (void)dealloc;
- (void)resumeTrackRoom:(unsigned int)arg1;
- (void)collapseTrackRoom;
- (int)openTrackRoom:(id)arg1 POIItem:(id)arg2 Scene:(unsigned int)arg3;
- (int)setTrackRoomState:(int)arg1;
- (void)setUploadCoordinate:(CLLocationCoordinate2D)arg1;
- (int)closeTrackRoom:(unsigned int)arg1;
- (void)onSessionAppear:(id)arg1;
- (void)onSessionDisappear:(id)arg1;
- (void)onMinimize;
- (void)onMaximize;
- (id)chatname;
- (id)trackRoomID;
- (double)heading;
- (BOOL)isUploading;
- (CLLocationCoordinate2D)coordinate;
- (unsigned int)refreshTimeInterval;
- (id)roomPOI;
- (BOOL)hasLegacyUser;
- (id)eventContext;
- (long long)chatEnterTimestampOf:(id)arg1;
- (void)OnSta;
- (void)OnOpenTrackRoom:(id)arg1;
- (void)OnJoinTrackRoomOK:(id)arg1;
- (void)OnRefreshTrackRoom:(id)arg1 Type:(int)arg2;
- (void)OnExitTrackRoom;
- (void)OnGetRoomPOI:(id)arg1;
- (void)OnTrackRoomError:(int)arg1 Message:(id)arg2;
- (void)OnHeadingChanged:(double)arg1;
- (void)OnTrackRoomStateDidChangedTo:(int)arg1;
- (void).cxx_destruct;
@end
