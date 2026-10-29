@interface WCMyStoryUserStateUtil : MMUserService <WCStoryFacadeExt, MMServiceProtocol, MMKernelExt>
{
    BOOL _waitingForShowPreview; // +0x8
    NSString * _selectedMember; // +0x10
    MMUIViewController * _parentVC; // +0x18
    NSArray * _currentUnReadStoryArray; // +0x20
    WCStoryNotifyHandler * _syncNotifyHandler; // +0x28
    NSMutableSet * _unreadStoryUsers; // +0x30
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)refreshUnReadStoryWithAddArray:(id)arg1 deleteArray:(id)arg2;
- (void)notifyAddSyncWithUsername:(id)arg1;
- (void)notifyRecoverStoryWithUsername:(id)arg1;
- (void)notifyClearSyncWithUserName:(id)arg1;
- (void)notifyUserDeleteStoryVideoWithUserName:(id)arg1;
- (BOOL)checkUserInUnReadStoryListWithUserName:(id)arg1;
- (BOOL)checkUserInUnReadStoryListWithUserNameInCache:(id)arg1;
- (void)showStoryMovieWithUserName:(id)arg1 previewReportObj:(id)arg2 inViewController:(id)arg3;
- (void)markUserStoryHasRead:(id)arg1 maxTid:(id)arg2;
- (void)notifyCheckSelector;
- (void)fetchNewStoryComment;
- (void)fetchNewStoryBubble;
- (void)onCleanUnReadStorys:(id)arg1;
- (BOOL)isContactInBlackList:(id)arg1;
- (BOOL)isUserNameInBlackList:(id)arg1;
- (void)loadUnreadStoryUsersCache;
- (void)reloadUnreadCacheForUser:(id)arg1;
- (int)getTimeZoneHourOffset;
- (id)selectedMember;
- (void)setSelectedMember:(id)arg1;
- (id)parentVC;
- (void)setParentVC:(id)arg1;
- (id)currentUnReadStoryArray;
- (void)setCurrentUnReadStoryArray:(id)arg1;
- (BOOL)waitingForShowPreview;
- (void)setWaitingForShowPreview:(BOOL)arg1;
- (id)syncNotifyHandler;
- (void)setSyncNotifyHandler:(id)arg1;
- (id)unreadStoryUsers;
- (void)setUnreadStoryUsers:(id)arg1;
- (void).cxx_destruct;
@end
