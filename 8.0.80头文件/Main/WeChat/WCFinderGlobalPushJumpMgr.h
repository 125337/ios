@interface WCFinderGlobalPushJumpMgr : MMUserService <MMServiceProtocol>
- (void)handleInactiveAPNSPushWithUsrInfo:(id)arg1;
- (void)handleBackgroundAPNSPushWithUsrInfo:(id)arg1;
- (void)handleLocalPushWithUsrInfo:(id)arg1;
- (void)handlePushWithGlobalPushInfo:(id)arg1;
- (void)showLiveRoomWithGlobalPushInfo:(id)arg1;
- (void)jumpToFinderTimelineWithType:(unsigned long long)arg1 globalPushInfo:(id)arg2;
- (BOOL)findSettingPageFinderIsClose;
@end
