@interface TrackRoomReporter : NSObject
{
    CLLocation * _userEnterLocation; // +0x8
    NSArray * _othersEnterLocation; // +0x10
    CLLocation * _userCurrentLocation; // +0x18
    NSArray * _othersCurrentLocation; // +0x20
    double _movePathDistance; // +0x28
}
- (void)onUserEnter:(id)arg1 otherLocations:(id)arg2;
- (void)onUserUpdate:(id)arg1 otherLocations:(id)arg2;
- (unsigned int)userMoveDistance;
- (unsigned int)userMovePathDistance;
- (unsigned int)distanceWithRoomCreater;
- (unsigned int)enterCount;
- (unsigned int)leaveCount;
- (id)allDistanceWhenEnter;
- (id)allDistanceWhenLeave;
- (id)userEnterLocation;
- (void)setUserEnterLocation:(id)arg1;
- (id)othersEnterLocation;
- (void)setOthersEnterLocation:(id)arg1;
- (id)userCurrentLocation;
- (void)setUserCurrentLocation:(id)arg1;
- (id)othersCurrentLocation;
- (void)setOthersCurrentLocation:(id)arg1;
- (double)movePathDistance;
- (void)setMovePathDistance:(double)arg1;
- (void).cxx_destruct;
@end

