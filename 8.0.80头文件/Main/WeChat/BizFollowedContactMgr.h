@interface BizFollowedContactMgr : MMUserService <MMServiceProtocol>
- (void)openBizFollowedContactList;
- (void)openBrsFollowedContactList;
- (void)openPhotoFollowedContactList;
- (void)preloadBizInitialDataIfNeed;
- (void)preloadBrsInitialDataIfNeed;
- (void)preloadPhotoInitialDataIfNeed;
@end
