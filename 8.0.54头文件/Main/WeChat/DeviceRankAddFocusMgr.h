@interface DeviceRankAddFocusMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
- (void)dealloc;
- (void)sendGetWeRunFollowerListRequest;
- (void)handleGetWeRunFollowerListResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end

