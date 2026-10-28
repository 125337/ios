@interface MMLiveConnectMicUserLocationDisplayLogic : NSObject
{
    unsigned int _locationDisplayTimeInterval; // +0x8
    id <MMLiveConnectMicUserLocationDisplayLogicDelegate> _actionDelegate; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    NSMutableDictionary * _displayedLocationUserDict; // +0x20
    MMLiveConnectMicUserLocationDisplayInfo * _anchorLocationDisplayInfo; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (id)getLiveTask;
- (void)checkAndUpdateAnchorLocationDisplayInfoWithLiveTask:(id)arg1 andCurrentTime:(unsigned int)arg2;
- (void)checkAndUpdateDisplayedLocationUserDictWithMicUsersInfo:(id)arg1 andCurrentTime:(unsigned int)arg2;
- (unsigned long long)checkExpiredTimeForLocationDisplayInfo:(id)arg1 withCurrentTime:(unsigned int)arg2;
- (void)delayCheckExpiredTimeAndNotify;
- (void)updateWithConnectMicUsersInfo:(id)arg1;
- (id)getAnchorLocationName;
- (id)getLocationNameWithSdkUserId:(id)arg1;
- (unsigned int)locationDisplayTimeInterval;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)displayedLocationUserDict;
- (void)setDisplayedLocationUserDict:(id)arg1;
- (id)anchorLocationDisplayInfo;
- (void)setAnchorLocationDisplayInfo:(id)arg1;
- (void)setLocationDisplayTimeInterval:(unsigned int)arg1;
- (void).cxx_destruct;
@end
