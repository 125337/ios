@interface TrackRoomMgrV2 : MMUserService <PBMessageObserverDelegate, ILocationMgrExt, VoipUIManagerExt, MultiTalkMgrExt, MMServiceProtocol>
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
    CLLocationCoordinate2D _uploadCoordinate; // +0x78
    MMTimer * _refreshTimer; // +0x88
    unsigned int _scene; // +0x90
    unsigned int _refreshTimeInterval; // +0x94
    TrackRoomReportParam * _exitReportParam; // +0x98
    NSArray * _latestOtherPositions; // +0xa0
    BOOL _hasLegacyUser; // +0xa8
    BOOL _isMinimized; // +0xa9
    NSTimer * _leaveTimeoutTimer; // +0xb0
    BOOL _isNextResumeFromFloat; // +0xb8
    BOOL _hasExitCurrentChat; // +0xb9
    long long _pendingCloseMethod; // +0xc0
    long long _snapshotCloseMethodForReport; // +0xc8
    BOOL _snapshotHasExitCurrentChatForReport; // +0xd0
    BOOL _wasMinimizedAtCloseTime; // +0xd1
    NSMutableDictionary * _chatEnterTimestamps; // +0xd8
    BOOL _hasReportedFirstRefresh; // +0xe0
    CLLocationCoordinate2D _coordinate; // +0xe8
}
+ (id)tipsTextForUserList:(id)arg1;
- (void)reportAction:(long long)arg1;
- (void)reportRetryAction:(long long)arg1;
- (void)reportTimeAction:(long long)arg1 time:(unsigned long long)arg2;
- (void)reportExitAction:(long long)arg1;
- (id)init;
- (void)dealloc;
- (void)enterBackground;
- (void)enterForeground;
- (int)openTrackRoom:(id)arg1 POIItem:(id)arg2 Scene:(unsigned int)arg3;
- (void)onSessionAppear:(id)arg1;
- (void)onSessionDisappear:(id)arg1;
- (void)onMinimize;
- (void)onMaximize;
- (void)startLeaveTimeoutTimer;
- (void)stopLeaveTimeoutTimer;
- (void)onLeaveTimeoutFired;
- (void)resumeTrackRoom:(unsigned int)arg1;
- (void)markNextResumeFromFloat;
- (void)collapseTrackRoom;
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
- (void)exitTrackRoomById:(id)arg1 chatname:(id)arg2 scene:(unsigned int)arg3;
- (void)retryChangeState;
- (void)handleJoinTrackRoomResponse:(id)arg1;
- (void)handleRefreshTrackRoomResponse:(id)arg1;
- (void)handleExitTrackRoomResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)reportScene:(long long)arg1 code:(long long)arg2 isRecover:(BOOL)arg3 chatname:(id)arg4 roomId:(id)arg5 uniqueRoomId:(id)arg6 joinTimestamp:(long long)arg7 onlineUserCount:(long long)arg8 isRoomCreate:(BOOL)arg9 isRoomDestroy:(BOOL)arg10;
- (void)reportType:(long long)arg1 code:(long long)arg2 chatname:(id)arg3 roomId:(id)arg4 uniqueRoomId:(id)arg5 joinTimestamp:(long long)arg6 onlineUserCount:(long long)arg7 isRoomCreate:(BOOL)arg8 isRoomDestroy:(BOOL)arg9;
- (void)reportParam:(id)arg1;
- (void)reportVoipInShareWithIsInitiator:(BOOL)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)UIManagerDidSwitchToTalk;
- (void)onEnterMultiTalk:(id)arg1;
- (long long)currentMinDistanceToOthers;
- (id)createTrackRoomReportParamType:(long long)arg1 code:(long long)arg2 chatname:(id)arg3 roomId:(id)arg4 uniqueRoomId:(id)arg5 joinTimestamp:(long long)arg6 onlineUserCount:(long long)arg7 isRoomCreate:(BOOL)arg8 isRoomDestroy:(BOOL)arg9;
- (long long)chatEnterTimestampOf:(id)arg1;
- (id)eventContext;
- (void)setPendingCloseMethod:(long long)arg1;
- (id)chatname;
- (id)trackRoomID;
- (CLLocationCoordinate2D)coordinate;
- (unsigned int)refreshTimeInterval;
- (id)roomPOI;
- (BOOL)hasLegacyUser;
- (void).cxx_destruct;
@end
